// ============================================================================
// SoC.bsv -- top-level integration. The `-g mkSoC` synthesis boundary.
// ----------------------------------------------------------------------------
// Contents (CPU clock domain unless noted):
//   * mkCore          : the RV32IM pipeline (imem + dmem AXI masters)
//   * mkDebugModule   : debug command engine + its own AXI master
//   * mkAXI4LiteXbar  : 3 masters (imem, dmem, debug) -> 1 BRAM slave
//   * mkBramMem       : unified I+D memory (AXI slave + TB backdoor)
//   * mkDebugCDC      : crosses debug<->cpu; host side runs on the Debug clock
//
// The default clock/reset are the CPU domain. The Debug clock/reset arrive as
// explicit parameters. The debug host methods (enqReq/getResp/...) are exposed
// on the Debug clock so an external (slower) debug transport drives them.
// ============================================================================
package SoC;

import Types        :: *;
import Config       :: *;
import Core         :: *;
import DebugModule  :: *;
import DebugCDC     :: *;
import BramMem      :: *;
import AXI4Lite     :: *;
import AXI4LiteXbar :: *;
import Clocks       :: *;
import Vector       :: *;

interface SoCIfc;
  // ---- Debug host interface (Debug clock domain) ----
  interface DbgHostIfc debug;

  // ---- Testbench backdoor to memory (CPU domain) ----
  method Action initWord(Bit#(32) wordIdx, Word v);
  method Word   peekWord(Bit#(32) wordIdx);

  // ---- Retire monitor for the scoreboard ----
  method Bool   retired;
endinterface

// dClk/dRst : the (slower) Debug clock domain, supplied externally.
// The module's own clock/reset (default) are the CPU domain.
module mkSoC#(Clock dClk, Reset dRst)(SoCIfc);
  Clock cClk <- exposeCurrentClock;   // CPU clock (default)
  Reset cRst <- exposeCurrentReset;

  // ---- Core, debug, memory ----
  CoreIfc        core <- mkCore;
  DebugCDCIfc    cdc  <- mkDebugCDC(dClk, dRst, cClk, cRst);
  DebugModuleIfc dbg  <- mkDebugModule(core, cdc.core);
  BramMemIfc     mem  <- mkBramMem;

  // ---- Interconnect: [imem, dmem, debug] -> BRAM ----
  Vector#(3, AXI4Lite_Master) masters;
  masters[0] = core.imem;
  masters[1] = core.dmem;
  masters[2] = dbg.memAxi;
  mkAXI4LiteXbar(masters, mem.slave);

  // ---- Debug host interface (Debug clock domain, re-exported directly) ----
  interface debug = cdc.host;

  method Action initWord(Bit#(32) i, Word v) = mem.initWord(i, v);
  method Word   peekWord(Bit#(32) i) = mem.peekWord(i);
  method Bool   retired = core.retired;
endmodule

endpackage : SoC
