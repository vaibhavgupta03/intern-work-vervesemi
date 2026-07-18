
// Core.bsv -- RV32IM in-order 5-stage pipeline (IF/ID/EX/MEM/WB).
// ----------------------------------------------------------------------------
// One rule per stage, ELASTIC handshaking: every pipeline latch is a
// valid-tagged slot; a stage advances an instruction only when the
// downstream slot is free, and consumes (bubbles) its input slot exactly
// once. This makes behaviour independent of memory latency: no instruction
// can be duplicated or clobbered no matter how many cycles the AXI
// transactions take. (The previous "transparent re-execution" scheme relied
// on fetch latency exceeding data-memory latency and silently dropped the
// last store before a jump on bsc 2025.x -- see git history.)
//
// EHR port conventions (RWire+canonicalize Ehr, higher port wins):
//   ifid  : [0] do_id consume/kill      [1] do_if produce
//   idex  : [0] do_ex consume           [1] do_id produce / flush-kill
//   exmem : [0] do_ex fwd-read+produce  [1] do_wb trap-squash  [2] do_mem view+consume
//   memwb : plain Reg (single writer do_mem); it PERSISTS after retirement so
//           EX can keep forwarding from it; wbDoneE marks the current entry
//           retired so do_wb retires each instruction exactly once.
//
// Control wires (single writer each):
//   redirectWb (do_wb, trap/mret) beats redirectEx (do_ex, branch) -> redirectV
//   flushFront (do_ex) squashes the front end on a branch/jump redirect.
//
// Precise traps: MEM is serialised (an in-flight dmem transaction blocks both
// issue and pass-through), so when a trap retires from memwb nothing older is
// unretired and nothing younger has touched memory; do_wb squashes exmem via
// port [1] and the front end via redirectWb.
//
// Memory: two single-outstanding AXI ports (imem/dmem). IF self-throttles via
// fetchPending/fetchDrop; MEM via memPending/memCur.

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

  // ---- Pipeline latches (see port conventions above) ----
  Ehr#(2, IF_ID)   ifid  <- mkEhr(bubbleIFID);
  Ehr#(2, ID_EX)   idex  <- mkEhr(bubbleIDEX);
  Ehr#(3, EX_MEM)  exmem <- mkEhr(bubbleEXMEM);
  Reg#(MEM_WB)     memwb <- mkReg(bubbleMEMWB);
  Ehr#(2, Bool)    wbDoneE <- mkEhr(True);   // [0]=do_wb set, [1]=do_mem read+clear

  // ---- Handshake / unit state ----
  Reg#(Bool)   fetchPending <- mkReg(False);
  Reg#(Addr)   fetchPc      <- mkReg(reset_vector);
  Reg#(Bool)   fetchDrop    <- mkReg(False);  // discard in-flight fetch on flush
  Reg#(Bool)   memPending   <- mkReg(False);
  Reg#(EX_MEM) memCur       <- mkReg(bubbleEXMEM); // op owning the dmem txn
  Reg#(Bool)   mdInFlight   <- mkReg(False);

  // ---- Debug state (EHR, one writer per port) ----
  Ehr#(3, Bool) haltedE   <- mkEhr(False);  // [0]=method [1]=manageHalt [2]=do_wb
  Ehr#(2, Bool) haltReqE  <- mkEhr(False);  // [0]=method [1]=manageHalt
  Ehr#(2, Bool) stepReqE  <- mkEhr(False);  // [0]=method [1]=manageHalt
  Ehr#(2, Bool) stepArmedE<- mkEhr(False);  // [0]=manageHalt [1]=do_wb

  // ---- Same-cycle control wires (single writer each) ----
  RWire#(Addr) redirectWb <- mkRWire;   // trap/mret (oldest, wins)
  RWire#(Addr) redirectEx <- mkRWire;   // branch/jump
  Wire#(Bool)  flushFront <- mkDWire(False);
  Wire#(Bool)  retireW  <- mkDWire(False);  // written by do_wb, latched below
  Reg#(Bool)   retiredReg <- mkReg(False);  // registered retire pulse

  Maybe#(Addr) redirectV = isValid(redirectWb.wget) ? redirectWb.wget
                                                     : redirectEx.wget;

  Bool running = !haltedE[0] || stepArmedE[0];

  // ------------------------------------------------------------------
  // Counter tick. Uses the REGISTERED retire flag (last cycle's retire),
  // not the same-cycle wire: reading retireW here would force
  // "do_wb before tickCounters" while the CSRFile EHR ports force
  // "tickCounters before do_ex before do_wb" -- a scheduling cycle that
  // bsc 2025.x breaks by disabling do_wb (G0021). The (running||retiredReg)
  // guard lets the tick of the final instruction land even if the core
  // halts on the very next cycle.
  rule tickCounters (running || retiredReg);
    csr.tick(retiredReg);
  endrule

  rule latchRetire;
    retiredReg <= retireW;
  endrule

  // ==================================================================
  // WB: retire the memwb entry exactly once (wbDoneE); precise trap/mret.
  // memwb itself is left intact so EX keeps forwarding from it.
  // ==================================================================
  (* descending_urgency = "do_wb, do_mem, do_ex, do_id, do_if" *)
  rule do_wb (running);
    let m = memwb;
    Bool didRetire = False;

    if (m.valid && !wbDoneE[0]) begin
      if (m.trap.valid) begin
        let vec <- csr.trap(m.trap.cause, m.trap.epc, m.trap.tval);
        redirectWb.wset(vec);
        exmem[1] <= bubbleEXMEM;    // squash the younger instr in/entering EX/MEM
      end
      else begin
        if (m.ctrl.regWrite && m.rd != 0)
          rf.write(m.rd, m.wbData);
        if (m.ctrl.sysOp == SYS_MRET) begin
          let ret <- csr.mret;
          redirectWb.wset(ret);
          exmem[1] <= bubbleEXMEM;  // squash younger, like a trap
        end
        didRetire = True;
      end
      wbDoneE[0] <= True;
    end

    retireW <= didRetire;

    if (didRetire && stepArmedE[1]) begin
      stepArmedE[1] <= False;
      haltedE[2]    <= True;
    end
  endrule

  // ==================================================================
  // MEM: serialised data access. A mem op is latched into memCur at issue
  // and exmem is bubbled immediately, so nothing can clobber it. While the
  // transaction is in flight, younger instructions simply wait in exmem
  // (do_ex will not overwrite an occupied slot). Pass-through happens only
  // when no transaction is in flight, so memwb retires strictly in order.
  // Reads exmem[2]: the post-produce, post-squash view.
  // ==================================================================
  rule do_mem (running);
    let e = exmem[2];
    let c = e.ctrl;
    Bool isMemOp = e.valid && (c.memRead || c.memWrite) && !e.trap.valid;
    Bool wbFree  = wbDoneE[1];   // current memwb entry already retired?

    if (memPending) begin
      if (wbFree) begin
        let w <- dmemP.resp;
        let mc = memCur.ctrl;
        Word wb = mc.memRead ? loadFormat(mc.memSize, mc.memUnsigned, memCur.aluOut, w)
                             : memCur.aluOut;
        memwb <= MEM_WB { valid: True, pc: memCur.pc, ctrl: mc, wbData: wb,
                          rd: memCur.rd, trap: memCur.trap };
        wbDoneE[1] <= False;
        memPending <= False;
      end
    end
    else if (isMemOp && wbFree) begin
      // wbFree gating keeps traps precise: the older instruction has fully
      // retired (and any trap-squash is already visible in exmem[2]) before
      // this access can touch memory.
      Addr a = e.aluOut;
      if (memMisaligned(c.memSize, a)) begin
        TrapInfo t = TrapInfo { valid: True,
          cause: c.memWrite ? EXC_STORE_MISALIGN : EXC_LOAD_MISALIGN,
          epc: e.pc, tval: a };
        memwb <= MEM_WB { valid: True, pc: e.pc, ctrl: c, wbData: 0, rd: e.rd, trap: t };
        wbDoneE[1] <= False;
        exmem[2] <= bubbleEXMEM;
      end else if (dmemP.canReq) begin
        if (c.memWrite) begin
          match {.d, .s} = storeFormat(c.memSize, a, e.rs2v);
          dmemP.req(MemReq { addr: a, write: True, data: d, strb: s });
        end else begin
          dmemP.req(MemReq { addr: a, write: False, data: 0, strb: 0 });
        end
        memCur     <= e;          // this op now owns the dmem transaction
        memPending <= True;
        exmem[2]   <= bubbleEXMEM;
      end
    end
    else if (e.valid) begin
      if (wbFree) begin
        // Non-memory (or trapped): pass straight through, in order.
        memwb <= MEM_WB { valid: True, pc: e.pc, ctrl: c,
                          wbData: e.aluOut, rd: e.rd, trap: e.trap };
        wbDoneE[1] <= False;
        exmem[2] <= bubbleEXMEM;
      end
    end
    // Bubble: nothing to do.
  endrule

  // ==================================================================
  // EX: forwarding, ALU, branch/jump, mul/div, CSR read/commit.
  // Advances only when the EX/MEM slot is free and no load hazard blocks
  // forwarding; otherwise the instruction WAITS in idex (no duplication).
  // ==================================================================
  rule do_ex (running);
    let d  = idex[0];
    let c  = d.ctrl;
    let di = d.di;

    let pe = exmem[0];           // previous EX result still in EX/MEM (fwd source)
    Bool exFree = !pe.valid;

    // Never forward from a trapped entry (its wbData is not architectural;
    // note memwb persists after retirement so a stale trapped entry could
    // otherwise poison a post-handler instruction).
    FwdCtrl fw = forward(di.rs1, di.rs2,
                         pe.rd, pe.valid && pe.ctrl.regWrite
                                && pe.ctrl.wbSel != WB_MEM && !pe.trap.valid,
                         memwb.rd, memwb.valid && memwb.ctrl.regWrite
                                   && !memwb.trap.valid);
    function Word pick(FwdSel s, Word base) =
      case (s)
        FWD_EXMEM: pe.aluOut;
        FWD_MEMWB: memwb.wbData;
        default:   base;
      endcase;
    Word a = pick(fw.a, d.rs1v);
    Word b = pick(fw.b, d.rs2v);

    // Load-use interlock: wait until the load's value is forwardable from
    // memwb (covers a load waiting in EX/MEM and one in flight in dmem).
    Bool loadHaz =
         (pe.valid && pe.ctrl.memRead && pe.rd != 0
                   && (pe.rd == di.rs1 || pe.rd == di.rs2))
      || (memPending && memCur.ctrl.memRead && memCur.rd != 0
                     && (memCur.rd == di.rs1 || memCur.rd == di.rs2));

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

    if (d.valid && c.isMulDiv && !d.trap.valid && !loadHaz) begin
      if (!mdInFlight) begin
        md.start(c.mdOp, a, b);
        mdInFlight <= True;
      end else if (md.done && exFree) begin
        exmem[0] <= EX_MEM { valid: True, pc: d.pc, ctrl: c,
                             aluOut: md.result, rs2v: b, csrOld: 0, rd: di.rd, trap: d.trap };
        mdInFlight <= False;
        idex[0] <= bubbleIDEX;
      end
      // else: still iterating; the instruction waits in idex.
    end
    else if (d.valid && !c.isMulDiv && exFree && !loadHaz) begin
      TrapInfo t = d.trap;
      if (!t.valid && csrIllegal)
        t = TrapInfo { valid: True, cause: EXC_ILLEGAL, epc: d.pc, tval: 0 };

      Word res = case (c.wbSel)
                   WB_PC4: d.pc + 4;
                   WB_CSR: csrOld;
                   default: aluR;
                 endcase;

      // CSR write commits here (CSR ops are not forwarded; in-order retire).
      if (c.csrCmd != CSR_NONE && !t.valid && csr.csrLegal(di.csrAddr))
        csr.csrWrite(di.csrAddr, csrNew);

      exmem[0] <= EX_MEM { valid: True, pc: d.pc, ctrl: c,
                           aluOut: res, rs2v: b, csrOld: csrOld, rd: di.rd, trap: t };
      idex[0] <= bubbleIDEX;

      if (!t.valid && br.taken) begin
        redirectEx.wset(br.target);
        flushFront <= True;
      end
    end
    else if (d.valid && c.isMulDiv && d.trap.valid && exFree) begin
      // Trapped mul/div: pass the trap through without touching the unit.
      exmem[0] <= EX_MEM { valid: True, pc: d.pc, ctrl: c,
                           aluOut: 0, rs2v: b, csrOld: 0, rd: di.rd, trap: d.trap };
      idex[0] <= bubbleIDEX;
    end
    // else: EX/MEM occupied or hazard -> hold; write nothing.
  endrule

  // ==================================================================
  // ID: decode, control, register read. Pushes into idex only when the
  // slot is free (post do_ex consume), consuming ifid exactly once.
  // A same-cycle trap/mret redirect (redirectWb) or branch flush kills
  // both front-end latches.
  // ==================================================================
  rule do_id (running);
    let f = ifid[0];
    Bool flushNow = flushFront || isValid(redirectWb.wget);
    Bool slotFree = !idex[1].valid;      // post-consume view of the EX input

    if (flushNow) begin
      idex[1] <= bubbleIDEX;
      ifid[0] <= bubbleIFID;
    end
    else if (f.valid && slotFree) begin
      DecodedInst di = decode(f.instr);
      CtrlSignals c  = control(di);
      Word r1 = rf.read1(di.rs1);
      Word r2 = rf.read2(di.rs2);

      TrapInfo t = f.trap;
      if (!t.valid) begin
        if (c.illegal)
          t = TrapInfo { valid: True, cause: EXC_ILLEGAL, epc: f.pc, tval: zeroExtend(f.instr) };
        else if (c.sysOp == SYS_ECALL)
          t = TrapInfo { valid: True, cause: EXC_ECALL_M, epc: f.pc, tval: 0 };
        else if (c.sysOp == SYS_EBREAK)
          t = TrapInfo { valid: True, cause: EXC_BREAKPOINT, epc: f.pc, tval: f.pc };
      end

      idex[1] <= ID_EX { valid: True, pc: f.pc, di: di, ctrl: c,
                         rs1v: r1, rs2v: r2, trap: t };
      ifid[0] <= bubbleIFID;             // consumed exactly once
    end
    // else: hold (EX input occupied, or nothing fetched yet).
  endrule

  // ==================================================================
  // IF: fetch from the AXI I-port. The response is consumed only when the
  // IF/ID slot is free (it waits in the port's FIFO otherwise), so no
  // fetched instruction is ever dropped except on an explicit flush
  // (fetchDrop discards the in-flight word after a redirect).
  // ==================================================================
  rule do_if (running);
    Bool flush    = flushFront || isValid(redirectV);
    Bool slotFree = !ifid[1].valid;      // post do_id consume/kill

    if (!fetchPending) begin
      if (flush) begin
        pcu.redirect(validValue(redirectV));
      end else if (imemP.canFetch) begin
        imemP.fetch(pcu.pc);
        fetchPc      <= pcu.pc;
        fetchPending <= True;
      end
    end
    else begin
      if (flush) begin
        pcu.redirect(validValue(redirectV));
        if (imemP.instrReady) begin
          let x <- imemP.instr;          // discard immediately
          fetchPending <= False;
        end else
          fetchDrop <= True;             // discard when it arrives
      end
      else if (fetchDrop) begin
        if (imemP.instrReady) begin
          let x <- imemP.instr;
          fetchDrop    <= False;
          fetchPending <= False;
        end
      end
      else if (imemP.instrReady && slotFree) begin
        let instr <- imemP.instr;
        fetchPending <= False;
        TrapInfo t = pcMisaligned(fetchPc)
          ? TrapInfo { valid: True, cause: EXC_INSTR_MISALIGN, epc: fetchPc, tval: fetchPc }
          : noTrap;
        ifid[1] <= IF_ID { valid: True, pc: fetchPc, instr: instr, trap: t };
        pcu.advance(fetchPc + 4);
      end
      // else: response not ready yet, or IF/ID still occupied -> wait.
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
