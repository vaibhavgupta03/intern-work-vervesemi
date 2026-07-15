// ============================================================================
// Core.bsv -- RV32IM in-order 5-stage pipeline (IF/ID/EX/MEM/WB).
// ----------------------------------------------------------------------------
// One rule per stage. Pipeline latches are EHRs (CRegs) so the producing stage
// and the consuming stage can touch the same latch in one cycle with defined
// precedence (consumer reads port[0]/bubbles it; producer fills a higher port,
// which wins). This is the correct BSV idiom for a Reg-based pipeline -- plain
// Regs/Wires with two writers would conflict or silently drop a write.
//
// Port conventions (all EHR):
//   idex  : [0] do_ex consume/bubble   [1] do_id produce
//   exmem : [0] do_mem consume/bubble  [1] do_ex produce
//   Latches with a single writer (ifid, memwb) stay plain Regs.
//
// Control wires are single-writer:
//   hzId  (do_id)  load-use stall ;  hzEx (do_ex) mul/div stall  -> OR'd in hz
//   redirectWb (do_wb, trap/mret) beats redirectEx (do_ex, branch) -> redirectV
//   flushFront (do_ex) squashes the front end on any redirect.
//
// Memory: two single-outstanding AXI ports (imem/dmem), 1-cycle response.
// IF and MEM self-throttle via fetchPending / memPending.
//
// SCHEDULING :
//   * tickCounters used to read the same-cycle wire retireW written by do_wb.
//     That forced "do_wb before tickCounters", while the CSR method ordering
//     (tick before csrRead/csrWrite before trap/mret) forced
//     "tickCounters before do_ex before do_wb" -- a cycle. bsc broke it by
//     making do_wb unable to fire (G0021). tickCounters now consumes the
//     REGISTERED retire flag (retiredReg, last cycle's retire), so the only
//     rule ordering left is the natural tick < do_ex < do_wb chain.
//     minstret is identical, just counted one cycle later; the guard
//     (running || retiredReg) makes sure the final instruction before a halt
//     still gets counted.
//   * haltReq was a plain Reg: manageHalt reading it forced
//     "manageHalt before reqHalt-method", but the haltedE EHR ports forced
//     the opposite. haltReq is now an EHR ([0]=method, [1]=manageHalt) so
//     both agree: method < manageHalt < do_wb.
//   * do_id used the combined `hz` view, which wgets the same DWire (hzId)
//     that do_id itself wsets -- rejected by bsc 2025.x ("methods
//     conflict in parallel"). do_id now computes the stall locally from its
//     own hazard result plus hzEx; the value is identical to hz.stallPC.

package Core;

import Types         :: *;
import Config        :: *;
import ISADefs       :: *;
import ALU           :: *;
import ImmGen        :: *;
import Decoder       :: *;
import ControlUnit   :: *;
import BranchJump    :: *;
import ForwardingUnit:: *;
import HazardUnit    :: *;
import RegFileM      :: *;
import MulDiv        :: *;
import CSRFile       :: *;
import ProgramCounter:: *;
import InstFetch     :: *;
import InstMemIfc    :: *;
import DataMemIfc    :: *;
import AXI4Lite      :: *;
import Ehr           :: *;

interface CoreIfc;
  interface AXI4Lite_Master imem;
  interface AXI4Lite_Master dmem;

  method Action reqHalt(Bool h);
  method Action reqStep;
  method Bool   isHalted;
  method Word   dbgGprRead(RegIdx r);
  method Action dbgGprWrite(RegIdx r, Word v);
  method Addr   dbgPc;
  method Action dbgSetPc(Addr a);
  method Bool   retired;
endinterface

(* synthesize *)
module mkCore(CoreIfc);
  // ---- Sub-blocks ----
  PCIfc        pcu   <- mkProgramCounter;
  RegFileIfc   rf    <- mkRegFile;
  CSRIfc       csr   <- mkCSRFile;
  MulDivIfc    md    <- mkMulDiv;
  IMemIfc      imemP <- mkInstMem;
  MemPortIfc   dmemP <- mkMemPort;

  // ---- Pipeline latches ----
  Reg#(IF_ID)      ifid  <- mkReg(bubbleIFID);       // single writer: do_if
  Ehr#(2, ID_EX)   idex  <- mkEhr(bubbleIDEX);       // [0]=do_ex [1]=do_id
  Ehr#(2, EX_MEM)  exmem <- mkEhr(bubbleEXMEM);      // [0]=do_mem [1]=do_ex
  Reg#(MEM_WB)     memwb <- mkReg(bubbleMEMWB);      // single writer: do_mem

  // ---- Handshake / unit state ----
  Reg#(Bool) fetchPending <- mkReg(False);
  Reg#(Addr) fetchPc      <- mkReg(reset_vector);
  Reg#(Bool) memPending   <- mkReg(False);
  Reg#(EX_MEM) memCur     <- mkReg(bubbleEXMEM); // op owning the in-flight dmem txn
  Reg#(Bool) mdInFlight   <- mkReg(False);

  // ---- Debug state (EHR, one writer per port) ----
  Ehr#(3, Bool) haltedE   <- mkEhr(False);  // [0]=method [1]=manageHalt [2]=do_wb
  Ehr#(2, Bool) haltReqE  <- mkEhr(False);  // [0]=method [1]=manageHalt
  Ehr#(2, Bool) stepReqE  <- mkEhr(False);  // [0]=method [1]=manageHalt
  Ehr#(2, Bool) stepArmedE<- mkEhr(False);  // [0]=manageHalt [1]=do_wb

  // ---- Same-cycle control wires (single writer each) ----
  RWire#(Addr) redirectWb <- mkRWire;   // trap/mret (oldest, wins)
  RWire#(Addr) redirectEx <- mkRWire;   // branch/jump
  Wire#(Bool)  flushFront <- mkDWire(False);
  Wire#(HazardCtrl) hzId <- mkDWire(HazardCtrl{stallPC:False,stallIFID:False,bubbleIDEX:False});
  Wire#(HazardCtrl) hzEx <- mkDWire(HazardCtrl{stallPC:False,stallIFID:False,bubbleIDEX:False});
  Wire#(Bool)  retireW  <- mkDWire(False);  // written by do_wb, latched below
  Reg#(Bool)   retiredReg <- mkReg(False);  // registered retire pulse

  // Combined views (pure combinational functions of the single-writer wires).
  HazardCtrl hz = HazardCtrl {
    stallPC:    hzId.stallPC    || hzEx.stallPC,
    stallIFID:  hzId.stallIFID  || hzEx.stallIFID,
    bubbleIDEX: hzId.bubbleIDEX || hzEx.bubbleIDEX };
  Maybe#(Addr) redirectV = isValid(redirectWb.wget) ? redirectWb.wget
                                                     : redirectEx.wget;

  Bool running = !haltedE[0] || stepArmedE[0];

  // ------------------------------------------------------------------
  // Counter tick. Uses the REGISTERED retire flag (last cycle's retire),
  // NOT the same-cycle wire -- see SCHEDULING FIX above. The extra
  // "|| retiredReg" term lets the tick of the final retired instruction
  // land even if the core halts on the very next cycle.
  rule tickCounters (running || retiredReg);
    csr.tick(retiredReg);
  endrule

  rule latchRetire;
    retiredReg <= retireW;
  endrule

  // ==================================================================
  // WB: register write-back, precise trap/mret. Highest urgency.
  // ==================================================================
  (* descending_urgency = "do_wb, do_mem, do_ex, do_id, do_if" *)
  rule do_wb (running);
    let m = memwb;
    Bool didRetire = False;

    if (m.valid) begin
      if (m.trap.valid) begin
        let vec <- csr.trap(m.trap.cause, m.trap.epc, m.trap.tval);
        redirectWb.wset(vec);
      end
      else begin
        if (m.ctrl.regWrite && m.rd != 0)
          rf.write(m.rd, m.wbData);
        if (m.ctrl.sysOp == SYS_MRET) begin
          let ret <- csr.mret;
          redirectWb.wset(ret);
        end
        didRetire = True;
      end
    end

    retireW <= didRetire;

    if (didRetire && stepArmedE[1]) begin
      stepArmedE[1] <= False;
      haltedE[2]    <= True;
    end
  endrule

  // ================
  // MEM: data memory access + load formatting. Fills memwb, consumes exmem[0].
  
  rule do_mem (running);
    let e = exmem[0];
    let c = e.ctrl;
    Bool isMemOp = e.valid && (c.memRead || c.memWrite) && !e.trap.valid;

    if (memPending) begin
      // Complete the in-flight access from memCur (NOT from exmem, which may
      // already hold a younger instruction).
      let w <- dmemP.resp;
      let mc = memCur.ctrl;
      Word wb = mc.memRead ? loadFormat(mc.memSize, mc.memUnsigned, memCur.aluOut, w)
                           : memCur.aluOut;
      memwb <= MEM_WB { valid: True, pc: memCur.pc, ctrl: mc, wbData: wb,
                        rd: memCur.rd, trap: memCur.trap };
      memPending <= False;
      // exmem untouched: it holds the next (younger) instruction, if any.
    end
    else if (isMemOp) begin
      Addr a = e.aluOut;
      if (memMisaligned(c.memSize, a)) begin
        TrapInfo t = TrapInfo { valid: True,
          cause: c.memWrite ? EXC_STORE_MISALIGN : EXC_LOAD_MISALIGN,
          epc: e.pc, tval: a };
        memwb <= MEM_WB { valid: True, pc: e.pc, ctrl: c, wbData: 0, rd: e.rd, trap: t };
        exmem[0] <= bubbleEXMEM;
      end else begin
        if (c.memWrite) begin
          match {.d, .s} = storeFormat(c.memSize, a, e.rs2v);
          dmemP.req(MemReq { addr: a, write: True, data: d, strb: s });
        end else begin
          dmemP.req(MemReq { addr: a, write: False, data: 0, strb: 0 });
        end
        memCur     <= e;          // this op now owns the dmem transaction
        memPending <= True;
        exmem[0]   <= bubbleEXMEM;
      end
    end
    else begin
      // Non-memory (or bubble/trap): pass straight through.
      memwb <= MEM_WB { valid: e.valid, pc: e.pc, ctrl: c,
                        wbData: e.aluOut, rd: e.rd, trap: e.trap };
      exmem[0] <= bubbleEXMEM;
    end
  endrule

  // ==================================================================
  // EX: forwarding, ALU, branch/jump, mul/div, CSR read/commit.
  // Reads idex[0], exmem[0] (pre-EX), memwb; produces exmem[1]; bubbles idex[0].
  // ==================================================================
  rule do_ex (running);
    let d  = idex[0];
    let c  = d.ctrl;
    let di = d.di;

    // Forwarding selects and values (from EX/MEM producer + MEM/WB).
    let pe = exmem[0];   // pre-EX EX/MEM contents (previous cycle's EX result)
    FwdCtrl fw = forward(di.rs1, di.rs2,
                         pe.rd, pe.valid && pe.ctrl.regWrite && pe.ctrl.wbSel != WB_MEM,
                         memwb.rd, memwb.valid && memwb.ctrl.regWrite);
    function Word pick(FwdSel s, Word base) =
      case (s)
        FWD_EXMEM: pe.aluOut;
        FWD_MEMWB: memwb.wbData;
        default:   base;
      endcase;
    Word a = pick(fw.a, d.rs1v);
    Word b = pick(fw.b, d.rs2v);

    Word opA = case (c.srcA) A_PC: d.pc; A_ZERO: 0; default: a; endcase;
    Word opB = (c.srcB == B_IMM) ? di.imm : b;
    Word aluR = alu(c.aluOp, opA, opB);

    Word csrOld = csr.csrRead(di.csrAddr);
    Word csrSrc = c.csrUseImm ? zeroExtend(di.rs1) : a;
    Word csrNew = case (c.csrCmd)
                    CSR_RW: csrSrc;
                    CSR_RS: csrOld | csrSrc;
                    CSR_RC: csrOld & ~csrSrc;
                    default: csrOld;
                  endcase;
    Bool csrIllegal = (c.csrCmd != CSR_NONE) && !csr.csrLegal(di.csrAddr);

    BranchResult br = branchJump(c, d.pc, a, b, di.imm);

    if (d.valid && c.isMulDiv && !d.trap.valid) begin
      if (!mdInFlight) begin
        md.start(c.mdOp, a, b);
        mdInFlight <= True;
        hzEx <= HazardCtrl { stallPC: True, stallIFID: True, bubbleIDEX: False };
      end else if (md.done) begin
        exmem[1] <= EX_MEM { valid: True, pc: d.pc, ctrl: c,
                             aluOut: md.result, rs2v: b, csrOld: 0, rd: di.rd, trap: d.trap };
        mdInFlight <= False;
        idex[0] <= bubbleIDEX;
      end else begin
        hzEx <= HazardCtrl { stallPC: True, stallIFID: True, bubbleIDEX: False };
      end
    end
    else begin
      TrapInfo t = d.trap;
      if (d.valid && !t.valid && csrIllegal)
        t = TrapInfo { valid: True, cause: EXC_ILLEGAL, epc: d.pc, tval: 0 };

      Word res = case (c.wbSel)
                   WB_PC4: d.pc + 4;
                   WB_CSR: csrOld;
                   default: aluR;
                 endcase;

      // CSR write commits here (CSR ops are not forwarded; in-order retire).
      if (d.valid && c.csrCmd != CSR_NONE && !t.valid && csr.csrLegal(di.csrAddr))
        csr.csrWrite(di.csrAddr, csrNew);

      exmem[1] <= EX_MEM { valid: d.valid, pc: d.pc, ctrl: c,
                           aluOut: res, rs2v: b, csrOld: csrOld, rd: di.rd, trap: t };
      idex[0] <= bubbleIDEX;

      if (d.valid && !t.valid && br.taken) begin
        redirectEx.wset(br.target);
        flushFront <= True;
      end
    end
  endrule

  // ==================================================================
  // ID: decode, control, register read, load-use hazard. Produces idex[1].
  // ==================================================================
  rule do_id (running);
    let f = ifid;
    DecodedInst di = decode(f.instr);
    CtrlSignals c  = control(di);
    Word r1 = rf.read1(di.rs1);
    Word r2 = rf.read2(di.rs2);

    // Load-use vs instruction currently in EX (idex[0], pre-consume value).
    let inEx = idex[0];
    HazardCtrl h = hazard(inEx.valid && inEx.ctrl.memRead, inEx.di.rd, di.rs1, di.rs2);
    hzId <= h;

    // Combined stall computed LOCALLY: `h` is exactly the value this rule
    // just wrote into hzId, so (h.stallPC || hzEx.stallPC) == hz.stallPC.
    // Reading the shared `hz` view here would wget the same DWire this rule
    // wsets, which bsc 2025.x rejects (G0004: methods conflict in parallel).
    Bool stallNow = h.stallPC || hzEx.stallPC;

    TrapInfo t = f.trap;
    if (f.valid && !t.valid) begin
      if (c.illegal)
        t = TrapInfo { valid: True, cause: EXC_ILLEGAL, epc: f.pc, tval: zeroExtend(f.instr) };
      else if (c.sysOp == SYS_ECALL)
        t = TrapInfo { valid: True, cause: EXC_ECALL_M, epc: f.pc, tval: 0 };
      else if (c.sysOp == SYS_EBREAK)
        t = TrapInfo { valid: True, cause: EXC_BREAKPOINT, epc: f.pc, tval: f.pc };
    end

    if (flushFront) begin
      idex[1] <= bubbleIDEX;                 // squash on redirect
    end else if (h.bubbleIDEX) begin
      idex[1] <= bubbleIDEX;                 // load-use bubble
    end else if (!stallNow) begin
      idex[1] <= ID_EX { valid: f.valid, pc: f.pc, di: di, ctrl: c,
                         rs1v: r1, rs2v: r2, trap: t };
    end else begin
      idex[1] <= idex[0];                    // mul/div stall: hold current EX input
    end
  endrule

  // ==================================================================
  // IF: fetch from AXI I-port, self-throttling; fill ifid, advance PC.
  // ==================================================================
  rule do_if (running);
    Bool stall = hz.stallIFID;
    Bool flush = flushFront || isValid(redirectV);

    if (!fetchPending) begin
      if (flush) begin
        // Redirect while idle: set PC to target, fetch it next cycle.
        pcu.redirect(validValue(redirectV));
        ifid <= bubbleIFID;
      end else if (!stall && imemP.canFetch) begin
        imemP.fetch(pcu.pc);
        fetchPc      <= pcu.pc;
        fetchPending <= True;
      end
    end
    else begin
      let instr <- imemP.instr;
      fetchPending <= False;
      if (flush) begin
        pcu.redirect(validValue(redirectV));
        ifid <= bubbleIFID;
      end else if (stall) begin
        pcu.redirect(fetchPc);               // re-fetch same PC; hold ifid
      end else begin
        TrapInfo t = pcMisaligned(fetchPc)
          ? TrapInfo { valid: True, cause: EXC_INSTR_MISALIGN, epc: fetchPc, tval: fetchPc }
          : noTrap;
        ifid <= IF_ID { valid: True, pc: fetchPc, instr: instr, trap: t };
        pcu.advance(fetchPc + 4);
      end
    end
  endrule

  // ==================================================================
  // Halt / step management. Reads haltReqE[1] (after the method's [0]
  // write) so the ordering "method < manageHalt" is consistent with the
  // haltedE EHR ports -- removes the reqHalt/manageHalt conflict (G0010).
  // ==================================================================
  rule manageHalt;
    if (haltReqE[1] && !haltedE[1] && !fetchPending && !memPending && !mdInFlight)
      haltedE[1] <= True;
    if (stepReqE[1] && haltedE[1]) begin
      stepArmedE[0] <= True;
      haltedE[1]    <= False;
      stepReqE[1]   <= False;
    end
  endrule

  // ---- Interfaces ----
  interface imem = imemP.axi;
  interface dmem = dmemP.axi;

  method Action reqHalt(Bool h);
    haltReqE[0] <= h;
    if (!h) haltedE[0] <= False;
  endmethod
  method Action reqStep; stepReqE[0] <= True; endmethod
  method Bool   isHalted = haltedE[0];
  method Word   dbgGprRead(RegIdx r) = rf.dbgRead(r);
  method Action dbgGprWrite(RegIdx r, Word v) = rf.dbgWrite(r, v);
  method Addr   dbgPc = pcu.pc;
  method Action dbgSetPc(Addr a) = pcu.dbgSet(a);
  method Bool   retired = retiredReg;
endmodule

endpackage : Core
