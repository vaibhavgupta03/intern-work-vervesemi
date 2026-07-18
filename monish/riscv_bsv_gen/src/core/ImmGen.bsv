
// ImmGen.bsv  --  Immediate generator (pure combinational)
// ----------------------------------------------------------------------------
// Extracts and sign/zero-extends the immediate field from a 32-bit instruction
// according to its format.  RISC-V scatters the immediate bits across the
// instruction word (to keep the sign bit always at inst[31] and share operand
// register fields across formats), so this is really a set of bit re-packings.
//
// The immediate *type* is chosen from the opcode.  We compute all five formats
// and select; bsc optimises the unused ones away.  This mirrors the classic
// textbook "immediate generation" block and keeps the Decoder simple.
//
// Formats:
//   I-type : loads, ALU-imm, JALR, SYSTEM   imm[11:0]  = inst[31:20]
//   S-type : stores                         imm[11:0]  = inst[31:25]|inst[11:7]
//   B-type : branches                       imm[12:1]  (LSB 0), scrambled
//   U-type : LUI, AUIPC                      imm[31:12] = inst[31:12], low=0
//   J-type : JAL                             imm[20:1]  (LSB 0), scrambled

package ImmGen;

import Types   :: *;
import ISADefs :: *;

// I-type: 12-bit immediate at [31:20], sign-extended.
function Word immI(Bit#(32) i) = signExtend(i[31:20]);

// S-type: split immediate [31:25] (high) and [11:7] (low), sign-extended.
function Word immS(Bit#(32) i) = signExtend({ i[31:25], i[11:7] });

// B-type: branch offset, 13-bit, bit0 always 0.  Bits are scrambled:
// imm[12]=i31, imm[11]=i7, imm[10:5]=i[30:25], imm[4:1]=i[11:8].
function Word immB(Bit#(32) i) =
  signExtend({ i[31], i[7], i[30:25], i[11:8], 1'b0 });

// U-type: upper 20 bits placed at [31:12], low 12 bits zero.
function Word immU(Bit#(32) i) = { i[31:12], 12'b0 };

// J-type: jump offset, 21-bit, bit0 always 0.  Scrambled:
// imm[20]=i31, imm[19:12]=i[19:12], imm[11]=i20, imm[10:1]=i[30:21].
function Word immJ(Bit#(32) i) =
  signExtend({ i[31], i[19:12], i[20], i[30:21], 1'b0 });

// ----------------------------------------------------------------------------
// Top-level selector: pick the immediate by opcode.  Opcodes that carry no
// immediate (R-type / M-extension) return 0.
// ----------------------------------------------------------------------------
(* noinline *)
function Word immGen(Bit#(32) inst);
  let op = instOpcode(inst);
  return
    (op == op_LOAD  || op == op_OPIMM || op == op_JALR)   ? immI(inst) :
    (op == op_STORE)                                       ? immS(inst) :
    (op == op_BRANCH)                                      ? immB(inst) :
    (op == op_LUI   || op == op_AUIPC)                     ? immU(inst) :
    (op == op_JAL)                                         ? immJ(inst) :
    (op == op_SYSTEM)                                      ? immI(inst) : // CSR uimm handled separately
    0;
endfunction

endpackage : ImmGen
