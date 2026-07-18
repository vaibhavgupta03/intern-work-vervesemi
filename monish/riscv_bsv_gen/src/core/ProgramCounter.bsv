// ProgramCounter.bsv -- architectural PC. Resets to reset_vector.
// Uses a CReg so a redirect (branch/trap/mret, port 1) overrides the default
// sequential advance (port 0) written in the same cycle.
package ProgramCounter;

import Types  :: *;
import Config :: *;
import Ehr    :: *;

interface PCIfc;
  method Addr    pc;               // current PC (read by IF)
  method Action  advance(Addr nxt);   // sequential / stall write (low priority)
  method Action  redirect(Addr tgt);  // control-flow write (high priority)
  method Action  dbgSet(Addr v);      // debug: set PC while halted
endinterface

(* synthesize *)
module mkProgramCounter(PCIfc);
  Ehr#(3, Addr) r <- mkEhr(reset_vector);

  method Addr   pc            = r[0];
  method Action advance(Addr n)  = action r[0] <= n; endaction;
  method Action redirect(Addr t) = action r[1] <= t; endaction;
  method Action dbgSet(Addr v)   = action r[2] <= v; endaction;
endmodule

endpackage : ProgramCounter
