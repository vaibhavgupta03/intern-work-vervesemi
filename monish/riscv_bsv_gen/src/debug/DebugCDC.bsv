// DebugCDC.bsv -- clock-domain crossers between the Debug clock (host side)
// and the CPU clock (core side). Requests cross debug->cpu, responses cross
// cpu->debug via SyncFIFOs; halt status crosses cpu->debug via mkSyncBit.
//
// The interface is split into two sub-interfaces so each carries the right
// clock: `host` methods live in the Debug domain, `core` methods in the CPU
// domain. Re-exporting `host` directly (rather than wrapping it in a CPU-clock
// method) keeps bsc's clock-domain checking happy.
package DebugCDC;

import Types  :: *;
import Clocks :: *;
import GetPut :: *;

// Debug-clock (host) side.
interface DbgHostIfc;
  method Action enqReq(DbgReq r);
  method ActionValue#(DbgResp) getResp;
  method Bool respAvail;
  method Bool coreHalted;
endinterface

// CPU-clock (core) side.
interface DbgCoreIfc;
  method ActionValue#(DbgReq) coreReq;
  method Bool coreReqAvail;
  method Action coreResp(DbgResp r);
  method Action setHalted(Bool h);
endinterface

interface DebugCDCIfc;
  interface DbgHostIfc host;
  interface DbgCoreIfc core;
endinterface

// dClk/dRst : debug domain ; cClk/cRst : cpu domain.
module mkDebugCDC#(Clock dClk, Reset dRst, Clock cClk, Reset cRst)(DebugCDCIfc);
  SyncFIFOIfc#(DbgReq)  reqF  <- mkSyncFIFO(2, dClk, dRst, cClk);   // dbg->cpu
  SyncFIFOIfc#(DbgResp) respF <- mkSyncFIFO(2, cClk, cRst, dClk);   // cpu->dbg
  SyncBitIfc#(Bit#(1))  haltB <- mkSyncBit(cClk, cRst, dClk);       // cpu->dbg

  interface DbgHostIfc host;
    method Action enqReq(DbgReq r) = reqF.enq(r);
    method ActionValue#(DbgResp) getResp;
      let r = respF.first; respF.deq; return r;
    endmethod
    method Bool respAvail  = respF.notEmpty;
    method Bool coreHalted = (haltB.read == 1);
  endinterface

  interface DbgCoreIfc core;
    method ActionValue#(DbgReq) coreReq;
      let r = reqF.first; reqF.deq; return r;
    endmethod
    method Bool coreReqAvail = reqF.notEmpty;
    method Action coreResp(DbgResp r) = respF.enq(r);
    method Action setHalted(Bool h) = haltB.send(pack(h));
  endinterface
endmodule

endpackage : DebugCDC
