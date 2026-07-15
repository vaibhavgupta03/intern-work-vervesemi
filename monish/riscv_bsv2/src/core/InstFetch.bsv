// InstFetch.bsv -- IF-stage helpers (combinational). PC alignment check and
// load-result formatting live here to keep Core.bsv focused on control flow.
package InstFetch;

import Types :: *;

// Next sequential PC.
function Addr pcPlus4(Addr pc) = pc + 4;

// Instruction address misalignment (RV32 requires 4-byte alignment; no C ext).
function Bool pcMisaligned(Addr pc) = (pc[1:0] != 0);

// Format a loaded word per size/signedness and the accessed byte offset.
// Loads from BRAM return the full aligned word; we extract the addressed lane.
function Word loadFormat(MemSize sz, Bool uns, Addr addr, Word word);
  Bit#(2) off = addr[1:0];
  case (sz)
    SZ_B: begin
      Bit#(8) b = case (off)
                    0: word[7:0];   1: word[15:8];
                    2: word[23:16]; 3: word[31:24];
                  endcase;
      return uns ? zeroExtend(b) : signExtend(b);
    end
    SZ_H: begin
      Bit#(16) h = (off[1] == 0) ? word[15:0] : word[31:16];
      return uns ? zeroExtend(h) : signExtend(h);
    end
    default: return word;   // SZ_W
  endcase
endfunction

// Build store data + byte strobes positioned for the addressed lane.
function Tuple2#(Word, Bit#(4)) storeFormat(MemSize sz, Addr addr, Word data);
  Bit#(2) off = addr[1:0];
  case (sz)
    SZ_B: begin
      Word d = data << ({off, 3'b0});          // shift byte into lane
      Bit#(4) s = 4'b0001 << off;
      return tuple2(d, s);
    end
    SZ_H: begin
      Word d = data << ({off[1], 4'b0});       // shift half into lane (0 or 16)
      Bit#(4) s = 4'b0011 << ({off[1], 1'b0}); // 0011 or 1100
      return tuple2(d, s);
    end
    default: return tuple2(data, 4'b1111);     // SZ_W
  endcase
endfunction

// Misalignment check for data accesses.
function Bool memMisaligned(MemSize sz, Addr a);
  return case (sz)
    SZ_H: (a[0] != 0);
    SZ_W: (a[1:0] != 0);
    default: False;   // byte always aligned
  endcase;
endfunction

endpackage : InstFetch
