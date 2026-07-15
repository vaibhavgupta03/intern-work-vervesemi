// ============================================================================
// ISADefs.bsv  --  RISC-V RV32IM instruction encoding constants
// ----------------------------------------------------------------------------
// This package holds the raw bit-field constants defined by the RISC-V
// Unprivileged ISA (opcodes, funct3, funct7) and the small set of privileged
// SYSTEM encodings we support (ECALL / EBREAK / MRET) plus the CSR addresses.
//
// It contains *only* constants and helper field-extraction functions -- no
// types that other structs embed -- so it can be imported by Types.bsv,
// Decoder.bsv and CSRFile.bsv without creating a dependency cycle.
//
// Naming follows the ISA manual:  OP_* are 7-bit opcodes (inst[6:0]),
// F3_* are 3-bit funct3 (inst[14:12]), F7_* are 7-bit funct7 (inst[31:25]).
// ============================================================================
package ISADefs;

import Config :: *;

// ----------------------------------------------------------------------------
// Field extraction helpers.  A raw 32-bit instruction is sliced into its
// architectural fields here so every consumer agrees on bit positions.
// ----------------------------------------------------------------------------
function Bit#(7)  instOpcode (Bit#(32) i) = i[6:0];
function Bit#(5)  instRd     (Bit#(32) i) = i[11:7];
function Bit#(3)  instFunct3 (Bit#(32) i) = i[14:12];
function Bit#(5)  instRs1    (Bit#(32) i) = i[19:15];
function Bit#(5)  instRs2    (Bit#(32) i) = i[24:20];
function Bit#(7)  instFunct7 (Bit#(32) i) = i[31:25];
function Bit#(12) instCsrAddr(Bit#(32) i) = i[31:20];   // CSR index for SYSTEM

// ----------------------------------------------------------------------------
// Opcodes (inst[6:0]).  Only the RV32IM subset we implement.
// ----------------------------------------------------------------------------
Bit#(7) op_LUI    = 7'b0110111;   // U-type  load upper immediate
Bit#(7) op_AUIPC  = 7'b0010111;   // U-type  add upper imm to PC
Bit#(7) op_JAL    = 7'b1101111;   // J-type  jump and link
Bit#(7) op_JALR   = 7'b1100111;   // I-type  jump and link register
Bit#(7) op_BRANCH = 7'b1100011;   // B-type  conditional branch
Bit#(7) op_LOAD   = 7'b0000011;   // I-type  loads
Bit#(7) op_STORE  = 7'b0100011;   // S-type  stores
Bit#(7) op_OPIMM  = 7'b0010011;   // I-type  ALU with immediate
Bit#(7) op_OP     = 7'b0110011;   // R-type  ALU register-register (+ M ext)
Bit#(7) op_SYSTEM = 7'b1110011;   // I-type  CSR / ECALL / EBREAK / MRET
Bit#(7) op_FENCE  = 7'b0001111;   // FENCE / FENCE.I -- decoded as NOP

// ----------------------------------------------------------------------------
// funct3 for OP / OP-IMM (R/I-type ALU)
// ----------------------------------------------------------------------------
Bit#(3) f3_ADD_SUB = 3'b000;      // ADD/ADDI (SUB when funct7=ALT under OP)
Bit#(3) f3_SLL     = 3'b001;      // shift left logical
Bit#(3) f3_SLT     = 3'b010;      // set-less-than (signed)
Bit#(3) f3_SLTU    = 3'b011;      // set-less-than (unsigned)
Bit#(3) f3_XOR     = 3'b100;
Bit#(3) f3_SRL_SRA = 3'b101;      // SRL, or SRA when funct7=ALT
Bit#(3) f3_OR      = 3'b110;
Bit#(3) f3_AND     = 3'b111;

// funct7 discriminators
Bit#(7) f7_BASE    = 7'b0000000;  // ADD, SRL, ...
Bit#(7) f7_ALT     = 7'b0100000;  // SUB, SRA  (bit30 set)
Bit#(7) f7_MULDIV  = 7'b0000001;  // M extension marker

// ----------------------------------------------------------------------------
// funct3 for the M extension (opcode OP, funct7 = f7_MULDIV)
// ----------------------------------------------------------------------------
Bit#(3) f3_MUL    = 3'b000;
Bit#(3) f3_MULH   = 3'b001;
Bit#(3) f3_MULHSU = 3'b010;
Bit#(3) f3_MULHU  = 3'b011;
Bit#(3) f3_DIV    = 3'b100;
Bit#(3) f3_DIVU   = 3'b101;
Bit#(3) f3_REM    = 3'b110;
Bit#(3) f3_REMU   = 3'b111;

// ----------------------------------------------------------------------------
// funct3 for BRANCH
// ----------------------------------------------------------------------------
Bit#(3) f3_BEQ  = 3'b000;
Bit#(3) f3_BNE  = 3'b001;
Bit#(3) f3_BLT  = 3'b100;
Bit#(3) f3_BGE  = 3'b101;
Bit#(3) f3_BLTU = 3'b110;
Bit#(3) f3_BGEU = 3'b111;

// ----------------------------------------------------------------------------
// funct3 for LOAD / STORE (encodes access size + signedness)
// ----------------------------------------------------------------------------
Bit#(3) f3_LB  = 3'b000;   // load byte  (sign-extend)
Bit#(3) f3_LH  = 3'b001;   // load half  (sign-extend)
Bit#(3) f3_LW  = 3'b010;   // load word
Bit#(3) f3_LBU = 3'b100;   // load byte  (zero-extend)
Bit#(3) f3_LHU = 3'b101;   // load half  (zero-extend)
Bit#(3) f3_SB  = 3'b000;   // store byte
Bit#(3) f3_SH  = 3'b001;   // store half
Bit#(3) f3_SW  = 3'b010;   // store word

// ----------------------------------------------------------------------------
// funct3 for SYSTEM (CSR ops vs privileged).  funct3==000 => PRIV group,
// distinguished by the full 12-bit immediate (funct12 = inst[31:20]).
// ----------------------------------------------------------------------------
Bit#(3) f3_PRIV  = 3'b000;   // ECALL / EBREAK / MRET (funct12 selects which)
Bit#(3) f3_CSRRW = 3'b001;
Bit#(3) f3_CSRRS = 3'b010;
Bit#(3) f3_CSRRC = 3'b011;
Bit#(3) f3_CSRRWI= 3'b101;
Bit#(3) f3_CSRRSI= 3'b110;
Bit#(3) f3_CSRRCI= 3'b111;

// funct12 (inst[31:20]) values for the PRIV group
Bit#(12) priv_ECALL  = 12'h000;
Bit#(12) priv_EBREAK = 12'h001;
Bit#(12) priv_MRET   = 12'h302;
Bit#(12) priv_WFI    = 12'h105;   // decoded as NOP (no interrupts implemented)

// ----------------------------------------------------------------------------
// Machine-mode CSR addresses we implement.  All others trap as illegal.
// ----------------------------------------------------------------------------
Bit#(12) csr_MSTATUS  = 12'h300;
Bit#(12) csr_MTVEC    = 12'h305;
Bit#(12) csr_MSCRATCH = 12'h340;
Bit#(12) csr_MEPC     = 12'h341;
Bit#(12) csr_MCAUSE   = 12'h342;
Bit#(12) csr_MTVAL    = 12'h343;
Bit#(12) csr_MCYCLE   = 12'hB00;
Bit#(12) csr_MINSTRET = 12'hB02;
Bit#(12) csr_MCYCLEH  = 12'hB80;
Bit#(12) csr_MINSTRETH= 12'hB82;
// A few read-only informational CSRs are tolerated as reads returning 0 so
// that standard startup code does not trap; see CSRFile.bsv.
Bit#(12) csr_MISA     = 12'h301;
Bit#(12) csr_MVENDORID= 12'hF11;
Bit#(12) csr_MARCHID  = 12'hF12;
Bit#(12) csr_MIMPID   = 12'hF13;
Bit#(12) csr_MHARTID  = 12'hF14;

endpackage : ISADefs
