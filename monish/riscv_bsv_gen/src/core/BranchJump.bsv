
// BranchJump.bsv  --  Branch condition + branch/jump target (combinational)
// ----------------------------------------------------------------------------

//   * taken   : whether control transfers (branch condition met, or a jump)
//   * target  : the destination PC
//
// Target computation:
//   * Branch : PC + immB          (PC-relative)
//   * JAL    : PC + immJ          (PC-relative)
//   * JALR   : (rs1 + immI) & ~1  (register-relative, LSB cleared per spec)
// The immediate is already selected into ID_EX by ImmGen for the right format,
// so here we just add.  For JALR the base is rs1 (forwarded) rather than PC.
//

// critical fetch path and lets us use the forwarding network for the operands;
// the cost is a two-cycle branch penalty (IF and ID instructions squashed),
// which the Hazard/flush logic in Core handles.

package BranchJump;

import Types :: *;

typedef struct {
  Bool taken;
  Addr target;
} BranchResult deriving (Bits, Eq, FShow);

// Evaluate the branch condition on two operands.
function Bool branchTaken(BranchOp op, Word a, Word b);
  SWord sa = unpack(a);
  SWord sb = unpack(b);
  return case (op)
    BR_EQ:  (a == b);
    BR_NE:  (a != b);
    BR_LT:  (sa < sb);       // signed
    BR_GE:  (sa >= sb);      // signed
    BR_LTU: (a < b);         // unsigned
    BR_GEU: (a >= b);        // unsigned
    default: False;          // BR_NONE
  endcase;
endfunction

// Compute taken + target for a branch/jump instruction.
//   pc   : PC of this instruction
//   a,b  : forwarded rs1, rs2 values (for branch compare / JALR base)
//   imm  : the format-correct immediate already in ID_EX
(* noinline *)
function BranchResult branchJump(CtrlSignals c, Addr pc, Word a, Word b, Word imm);
  Bool taken = False;
  Addr target = pc + 4;

  if (c.isJump) begin
    taken = True;
    if (c.isJalr)
      target = (a + imm) & ~32'b1;   // JALR: clear least-significant bit
    else
      target = pc + imm;             // JAL : PC-relative
  end
  else if (c.branchOp != BR_NONE) begin
    taken  = branchTaken(c.branchOp, a, b);
    target = taken ? (pc + imm) : (pc + 4);
  end

  return BranchResult { taken: taken, target: target };
endfunction

endpackage : BranchJump
