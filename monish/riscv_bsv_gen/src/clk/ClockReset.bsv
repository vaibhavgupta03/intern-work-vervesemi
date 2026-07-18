// ClockReset.bsv -- reset synchronizer helper for the two-domain SoC.
// The CPU and Debug clocks are supplied externally (see top/SoC.bsv and tb.bsv).
// This module just provides a synchronized reset in a target domain from an
// asynchronous source reset, using the BSV library synchronizer.
package ClockReset;

import Clocks :: *;

// Produce a reset synchronized to `dstClk` from an incoming (possibly async)
// reset. mkAsyncReset(stages, srcReset, dstClock) is the library synchronizer:
// assertion is immediate, deassertion is synchronized to dstClk.
module mkSyncedReset#(Clock dstClk, Reset srcRst)(Reset);
  Reset r <- mkAsyncReset(2, srcRst, dstClk);
  return r;
endmodule

endpackage : ClockReset
