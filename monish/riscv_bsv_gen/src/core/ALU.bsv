
// ALU.bsv  --  RV32I arithmetic/logic unit (pure combinational)

// The ALU is a single-cycle combinational function of (AluOp, a, b).  It is
// exposed both as a plain function (`alu`) for use inside other combinational
// logic and as a trivial module wrapper (`mkALU`) so it appears as a named
// block in the design hierarchy / generated Verilog if desired.
//
// Design notes:
//   * Shifts use only the low 5 bits of the shift amount (RV32 shamt), exactly
//     as the ISA requires; bsc would otherwise error on a 32-bit shift count.
//   * SLT / SLTU return the XLEN-wide value 0 or 1.
//   * SRA (arithmetic right shift) is done on the signed (Int) view so bsc
//     sign-extends; SRL on the unsigned (Bit) view.
//   * ALU_COPY_B simply forwards operand b -- used by LUI, and by any control
//     path that wants the ALU to pass the immediate through untouched.
//   * There is deliberately no MUL/DIV here; the M extension lives in its own
//     multi-cycle unit (MulDiv.bsv) because those operations cannot meet the
//     single-cycle timing budget.

package ALU;

import Types :: *;

// ----------------------------------------------------------------------------
// The core combinational function.  Kept separate from the module so it can be
// inlined wherever a same-cycle ALU result is needed.
// ----------------------------------------------------------------------------
(* noinline *)
function Word alu(AluOp op, Word a, Word b);
  // Shift amount is the low 5 bits of operand b (per RV32 semantics).
  Bit#(5) shamt = b[4:0];
  // Signed views for signed comparisons and arithmetic shift.
  SWord sa = unpack(a);
  SWord sb = unpack(b);

    case (op)
    ALU_ADD:   return  a + b;
    ALU_SUB:   return  a - b;
    ALU_SLL:   return  a << shamt;
    ALU_SLT:    return (sa < sb) ? 1 : 0;          // signed set-less-than
    ALU_SLTU:   return (a  < b)  ? 1 : 0;          // unsigned set-less-than
    ALU_XOR:    return a ^ b;
    ALU_SRL:   return  a >> shamt;                 // logical right shift
    ALU_SRA:   return  pack(sa >> shamt);          // arithmetic right shift (sign-fill)
    ALU_OR:    return  a | b;
    ALU_AND:   return  a & b;
    ALU_COPY_B:  return b;
    default:   return  a + b;
  endcase
endfunction

// ----------------------------------------------------------------------------
// Module wrapper.  Purely combinational: `result` is a value method with no
// state, so bsc schedules it as combinational logic.
// ----------------------------------------------------------------------------
interface ALU_Ifc;
  method Word result(AluOp op, Word a, Word b);
endinterface

(* synthesize *)
module mkALU(ALU_Ifc);
  method Word result(AluOp op, Word a, Word b) = alu(op, a, b);
endmodule

endpackage : ALU
