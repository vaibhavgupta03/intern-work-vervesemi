// ForwardingUnit.bsv -- EX operand forwarding selects (combinational).

// x0 never forwards (always reads 0).
package ForwardingUnit;

import Types :: *;

// exRd/exWr  : EX/MEM stage destination + regWrite
// memRd/memWr: MEM/WB stage destination + regWrite
// rs1/rs2    : source regs of the instruction currently in EX
(* noinline *)
function FwdCtrl forward(RegIdx rs1, RegIdx rs2,
                        RegIdx exRd,  Bool exWr,
                        RegIdx memRd, Bool memWr);
  function FwdSel sel(RegIdx rs);
    if (rs != 0 && exWr  && exRd  == rs) return FWD_EXMEM;
    else if (rs != 0 && memWr && memRd == rs) return FWD_MEMWB;
    else return FWD_NONE;
  endfunction
  return FwdCtrl { a: sel(rs1), b: sel(rs2) };
endfunction

endpackage : ForwardingUnit
