// BramMem.bsv -- Word-addressed memory behind an AXI4-Lite slave.
// Backs unified I+D space. Supports byte-strobed writes. Provides a backdoor
// (init/peek/poke) for testbench memory-init and debug memory access.
// Single outstanding transaction (sufficient for AXI4-Lite + this core).
package BramMem;

import Types      :: *;
import Config     :: *;
import AXI4Lite   :: *;
import GetPut     :: *;
import FIFOF      :: *;
import Vector     :: *;
import RegFile    :: *;   // Bluespec library RegFile (array), aliased below

interface BramMemIfc;
  interface AXI4Lite_Slave slave;
  // Backdoor for TB init / debug (word-indexed).
  method Action initWord(Bit#(32) wordIdx, Word v);
  method Word   peekWord(Bit#(32) wordIdx);
endinterface

// word index from a byte address (mask into memory, drop low 2 bits)
function Bit#(TLog#(MEM_WORDS)) wordIndex(Addr a);
  Bit#(MEM_ADDR_BITS) masked = truncate(a);      // wrap into memory span
  return truncate(masked >> 2);                  // byte -> word
endfunction

(* synthesize *)
module mkBramMem(BramMemIfc);
  // Simple synchronous array. RegFileLoad-style array from BSV library.
  RegFile#(Bit#(TLog#(MEM_WORDS)), Word) mem <- mkRegFileFull;

  // AXI channel buffers.
  FIFOF#(AxiAW) awf <- mkFIFOF;
  FIFOF#(AxiW)  wf  <- mkFIFOF;
  FIFOF#(AxiB)  bf  <- mkFIFOF;
  FIFOF#(AxiAR) arf <- mkFIFOF;
  FIFOF#(AxiR)  rf  <- mkFIFOF;

  // ---- Write: consume AW+W together, apply byte strobes, respond on B ----
  rule do_write;
    let aw = awf.first; let w = wf.first;
    awf.deq; wf.deq;
    let idx = wordIndex(aw.awaddr);
    Word old = mem.sub(idx);
    // merge per-byte using wstrb
    Vector#(4, Bit#(8)) ob = unpack(old);
    Vector#(4, Bit#(8)) nb = unpack(w.wdata);
    Vector#(4, Bit#(8)) mb = newVector;
    for (Integer i = 0; i < 4; i = i + 1)
      mb[i] = (w.wstrb[i] == 1) ? nb[i] : ob[i];
    mem.upd(idx, pack(mb));
    bf.enq(AxiB { bresp: axi_OKAY });
  endrule

  // ---- Read: consume AR, return data on R ----
  rule do_read;
    let ar = arf.first; arf.deq;
    let idx = wordIndex(ar.araddr);
    rf.enq(AxiR { rdata: mem.sub(idx), rresp: axi_OKAY });
  endrule

  interface AXI4Lite_Slave slave;
    interface Put aw = toPut(awf);
    interface Put w  = toPut(wf);
    interface Get b  = toGet(bf);
    interface Put ar = toPut(arf);
    interface Get r  = toGet(rf);
  endinterface

  method Action initWord(Bit#(32) wordIdx, Word v);
    mem.upd(truncate(wordIdx), v);
  endmethod
  method Word peekWord(Bit#(32) wordIdx) = mem.sub(truncate(wordIdx));
endmodule

endpackage : BramMem
