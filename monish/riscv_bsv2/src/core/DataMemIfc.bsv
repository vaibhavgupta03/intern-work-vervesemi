// DataMemIfc.bsv -- AXI4-Lite master adapter for the data path (also reused by
// the fetch path). Turns a simple MemReq into AXI AW/W or AR transactions and
// returns the read word. One outstanding request (matches the in-order core).
package DataMemIfc;

import Types      :: *;
import AXI4Lite   :: *;
import GetPut     :: *;
import FIFOF      :: *;

interface MemPortIfc;
  method Action           req(MemReq r);        // issue load or store
  method ActionValue#(Word) resp;               // load data / store ack (data=0)
  method Bool             canReq;               // ready to accept a new request
  interface AXI4Lite_Master axi;
endinterface

(* synthesize *)
module mkMemPort(MemPortIfc);
  FIFOF#(AxiAW) awf <- mkFIFOF;
  FIFOF#(AxiW)  wf  <- mkFIFOF;
  FIFOF#(AxiB)  bf  <- mkFIFOF;
  FIFOF#(AxiAR) arf <- mkFIFOF;
  FIFOF#(AxiR)  rf  <- mkFIFOF;
  FIFOF#(Word)  respF <- mkFIFOF;               // unified response queue
  Reg#(Bool)    busy  <- mkReg(False);          // one outstanding txn

  // Collect a read response.
  rule collectR;
    let r = rf.first; rf.deq;
    respF.enq(r.rdata);
    busy <= False;
  endrule

  // Collect a write response (ack).
  rule collectB;
    bf.deq;
    respF.enq(0);
    busy <= False;
  endrule

  method Action req(MemReq r) if (!busy);
    busy <= True;
    if (r.write) begin
      awf.enq(AxiAW { awaddr: r.addr, awprot: 0 });
      wf.enq (AxiW  { wdata:  r.data, wstrb: r.strb });
    end else begin
      arf.enq(AxiAR { araddr: r.addr, arprot: 0 });
    end
  endmethod

  method ActionValue#(Word) resp;
    let v = respF.first; respF.deq;
    return v;
  endmethod

  method Bool canReq = !busy;

  interface AXI4Lite_Master axi;
    interface Get aw = toGet(awf);
    interface Get w  = toGet(wf);
    interface Put b  = toPut(bf);
    interface Get ar = toGet(arf);
    interface Put r  = toPut(rf);
  endinterface
endmodule

endpackage : DataMemIfc
