// ============================================================================
// Decoder.bsv  --  Instruction field decode (pure combinational)
// ----------------------------------------------------------------------------
// Splits a raw 32-bit instruction into a DecodedInst: the register indices,
// funct fields, CSR address, and the fully-extended immediate (via ImmGen).
//
// This module does *not* decide what the instruction does -- that is the
// ControlUnit's job.  Separating "what are the fields" (Decoder) from "what do
// they mean" (ControlUnit) keeps each block small and independently testable,
// matching the classic datapath/control split.
// ============================================================================
package Decoder;

import Types   :: *;
import ISADefs :: *;
import ImmGen  :: *;

(* noinline *)
function DecodedInst decode(Bit#(32) inst);
  return DecodedInst {
    opcode:  instOpcode(inst),
    rd:      instRd(inst),
    rs1:     instRs1(inst),
    rs2:     instRs2(inst),
    funct3:  instFunct3(inst),
    funct7:  instFunct7(inst),
    csrAddr: instCsrAddr(inst),
    imm:     immGen(inst)
  };
endfunction

endpackage : Decoder
