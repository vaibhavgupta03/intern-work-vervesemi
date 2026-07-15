// CSRFile.bsv -- Minimal M-mode CSRs + trap/mret logic.
// CSRs: mstatus, mtvec, mepc, mcause, mtval, mscratch, mcycle(h), minstret(h).
// Read/modify/write for CSRRW/S/C; trap() and mret() drive the privileged flow.
// CReg ports order priority within a cycle: [0] counters, [1] csr write,
// [2] trap/mret -- so a trap in WB overrides a same-cycle CSR write.
package CSRFile;

import Types   :: *;
import ISADefs :: *;
import Ehr     :: *;

interface CSRIfc;
  // Combinational read of a CSR (returns value + legality).
  method Word csrRead(Bit#(12) addr);
  method Bool csrLegal(Bit#(12) addr);
  // Commit a CSR write (CSRRW/S/C already reduced to a final value).
  method Action csrWrite(Bit#(12) addr, Word v);
  // Take a trap: record cause/epc/tval, update mstatus, return vector (mtvec).
  method ActionValue#(Addr) trap(ExcCause cause, Addr epc, Word tval);
  // Return from trap: restore mstatus, return mepc.
  method ActionValue#(Addr) mret;
  // Per-cycle counter tick (mcycle++, and minstret++ when a retire happens).
  method Action tick(Bool retired);
  // Debug read of committed CSR (uses port 0 view).
  method Word dbgRead(Bit#(12) addr);
endinterface

(* synthesize *)
module mkCSRFile(CSRIfc);
  // mstatus: only MIE (bit3), MPIE (bit7), MPP (bits 12:11 = 2'b11 M-mode).
  Ehr#(3, Word) mstatus  <- mkEhr(0);
  Ehr#(3, Word) mtvec    <- mkEhr(0);
  Ehr#(3, Word) mepc     <- mkEhr(0);
  Ehr#(3, Word) mcause   <- mkEhr(0);
  Ehr#(3, Word) mtval    <- mkEhr(0);
  Ehr#(3, Word) mscratch <- mkEhr(0);
  Ehr#(2, Bit#(64)) mcycle   <- mkEhr(0);
  Ehr#(2, Bit#(64)) minstret <- mkEhr(0);

  function Bool legal(Bit#(12) a) =
       (a == csr_MSTATUS)  || (a == csr_MTVEC)   || (a == csr_MEPC)
    || (a == csr_MCAUSE)   || (a == csr_MTVAL)   || (a == csr_MSCRATCH)
    || (a == csr_MCYCLE)   || (a == csr_MCYCLEH) || (a == csr_MINSTRET)
    || (a == csr_MINSTRETH)|| (a == csr_MISA)    || (a == csr_MVENDORID)
    || (a == csr_MARCHID)  || (a == csr_MIMPID)  || (a == csr_MHARTID);

  function Word rd(Bit#(12) a);
    return
      (a == csr_MSTATUS)  ? mstatus[0]  :
      (a == csr_MTVEC)    ? mtvec[0]     :
      (a == csr_MEPC)     ? mepc[0]      :
      (a == csr_MCAUSE)   ? mcause[0]    :
      (a == csr_MTVAL)    ? mtval[0]     :
      (a == csr_MSCRATCH) ? mscratch[0]  :
      (a == csr_MCYCLE)   ? mcycle[0][31:0]   :
      (a == csr_MCYCLEH)  ? mcycle[0][63:32]  :
      (a == csr_MINSTRET) ? minstret[0][31:0] :
      (a == csr_MINSTRETH)? minstret[0][63:32]:
      0;   // read-only info CSRs read as 0 (MISA/vendor/arch/imp/hartid)
  endfunction

  method Word csrRead(Bit#(12) a) = rd(a);
  method Bool csrLegal(Bit#(12) a) = legal(a);
  method Word dbgRead(Bit#(12) a) = rd(a);

  method Action csrWrite(Bit#(12) a, Word v);
    case (a)
      csr_MSTATUS:  mstatus[1]  <= v;
      csr_MTVEC:    mtvec[1]     <= v;
      csr_MEPC:     mepc[1]      <= v;
      csr_MCAUSE:   mcause[1]    <= v;
      csr_MTVAL:    mtval[1]     <= v;
      csr_MSCRATCH: mscratch[1]  <= v;
      csr_MCYCLE:   mcycle[1]    <= {mcycle[1][63:32], v};
      csr_MCYCLEH:  mcycle[1]    <= {v, mcycle[1][31:0]};
      csr_MINSTRET: minstret[1]  <= {minstret[1][63:32], v};
      csr_MINSTRETH:minstret[1]  <= {v, minstret[1][31:0]};
      default: noAction;   // read-only / illegal handled by csrLegal upstream
    endcase
  endmethod

  method ActionValue#(Addr) trap(ExcCause cause, Addr epc, Word tval);
    mepc[2]   <= epc;
    mcause[2] <= {1'b0, excCode(cause)};   // interrupt bit = 0
    mtval[2]  <= tval;
    // mstatus: MPIE <= MIE; MIE <= 0; MPP <= 2'b11
    Word s = mstatus[2];
    Bool mie = s[3] == 1;
    Word ns = s;
    ns[7]  = pack(mie);   // MPIE
    ns[3]  = 0;           // MIE
    ns[12:11] = 2'b11;    // MPP = M
    mstatus[2] <= ns;
    return mtvec[2];      // direct mode: trap to mtvec base
  endmethod

  method ActionValue#(Addr) mret;
    Word s = mstatus[2];
    Bool mpie = s[7] == 1;
    Word ns = s;
    ns[3] = pack(mpie);   // MIE <= MPIE
    ns[7] = 1;            // MPIE <= 1
    ns[12:11] = 2'b11;    // MPP stays M
    mstatus[2] <= ns;
    return mepc[2];
  endmethod

  method Action tick(Bool retired);
    mcycle[0] <= mcycle[0] + 1;
    if (retired) minstret[0] <= minstret[0] + 1;
  endmethod
endmodule

endpackage : CSRFile
