// InstMemIfc.bsv -- Instruction-fetch memory port. Fetch is always an aligned
// word read, so this is a thin specialisation of the generic AXI master port
// (DataMemIfc.mkMemPort) exposing fetch/response methods.
package InstMemIfc;

import Types      :: *;
import AXI4Lite   :: *;
import DataMemIfc :: *;

interface IMemIfc;
  method Action           fetch(Addr pc);
  method ActionValue#(Bit#(32)) instr;
  method Bool             canFetch;
  interface AXI4Lite_Master axi;
endinterface

(* synthesize *)
module mkInstMem(IMemIfc);
  MemPortIfc p <- mkMemPort;

  method Action fetch(Addr pc) = p.req(MemReq { addr: pc, write: False, data: 0, strb: 0 });
  method ActionValue#(Bit#(32)) instr;
    let w <- p.resp; return w;
  endmethod
  method Bool canFetch = p.canReq;
  interface axi = p.axi;
endmodule

endpackage : InstMemIfc
