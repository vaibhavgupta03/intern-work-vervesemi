// HazardUnit.bsv -- load-use interlock (combinational).
// If the instruction in EX is a load and the instruction in ID reads its rd,
// stall one cycle (freeze PC + IF/ID, bubble ID/EX) so the load can forward
// from MEM/WB next cycle.
package HazardUnit;

import Types :: *;

// exMemRead/exRd: load in EX and its destination.
// rs1/rs2      : sources of the instruction in ID.
(* noinline *)
function HazardCtrl hazard(Bool exMemRead, RegIdx exRd, RegIdx rs1, RegIdx rs2);
  Bool useRd = (exRd != 0) && (exRd == rs1 || exRd == rs2);
  Bool stall = exMemRead && useRd;
  return HazardCtrl { stallPC: stall, stallIFID: stall, bubbleIDEX: stall };
endfunction

endpackage : HazardUnit
