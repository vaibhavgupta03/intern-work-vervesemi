
// Types.bsv  --  Shared data types for the RV32IM core
// ----------------------------------------------------------------------------
// This is the single source of truth for every struct/enum that crosses a
// module boundary or rides through a pipeline latch.  It imports only Config
// and ISADefs (pure constants), so nothing here can form a dependency cycle
// with the modules that use it.
//
// Every type derives (Bits, Eq, FShow):
//   * Bits  -- so it can be stored in a Reg / FIFO / pipeline latch.
//   * Eq    -- so hazard/forwarding comparisons and TB checks are easy.
//   * FShow -- so `$display(fshow(x))` gives readable trace output, which is
//              invaluable when debugging the pipeline in simulation.

package Types;

import Config  :: *;
import ISADefs :: *;
import Vector  :: *;

// ----------------------------------------------------------------------------
// Fundamental aliases
// ----------------------------------------------------------------------------
typedef Bit#(XLEN)  Word;    // an architectural data word
typedef Int#(XLEN)  SWord;   // signed view of a word
typedef Bit#(XLEN)  Addr;    // a byte address
typedef Bit#(5)     RegIdx;  // register file index (x0..x31)

// ----------------------------------------------------------------------------
// ALU operation selector.  The Decoder/ControlUnit maps (opcode,funct3,funct7)
// onto one of these; the ALU is a pure function of (AluOp, a, b).
// ALU_COPY_B is used by LUI (pass the immediate straight through).
// ----------------------------------------------------------------------------
typedef enum {
  ALU_ADD, ALU_SUB, ALU_SLL, ALU_SLT, ALU_SLTU,
  ALU_XOR, ALU_SRL, ALU_SRA, ALU_OR, ALU_AND, ALU_COPY_B
} AluOp deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Multiply/divide operation selector for the M extension.
// ----------------------------------------------------------------------------
typedef enum {
  MD_MUL, MD_MULH, MD_MULHSU, MD_MULHU,
  MD_DIV, MD_DIVU, MD_REM, MD_REMU
} MdOp deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Operand source selects (feed the two ALU inputs).
//   A: register rs1, or PC (for AUIPC/JAL target), or zero (for LUI).
//   B: register rs2, or the sign/zero-extended immediate.
// ----------------------------------------------------------------------------
typedef enum { A_RS1, A_PC,  A_ZERO } AluSrcA deriving (Bits, Eq, FShow);
typedef enum { B_RS2, B_IMM         } AluSrcB deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Write-back source: what value is written to rd.
// ----------------------------------------------------------------------------
typedef enum {
  WB_ALU,     // ALU result
  WB_MEM,     // load data
  WB_PC4,     // PC+4 (link register for JAL/JALR)
  WB_CSR,     // old CSR value (for CSR read-modify-write)
  WB_MD       // multiply/divide result
} WbSel deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Memory access size for loads/stores.
// ----------------------------------------------------------------------------
typedef enum { SZ_B, SZ_H, SZ_W } MemSize deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Branch condition (also encodes "always"/"never" for jumps and non-branches).
// ----------------------------------------------------------------------------
typedef enum {
  BR_NONE,                              // not a branch
  BR_EQ, BR_NE, BR_LT, BR_GE, BR_LTU, BR_GEU
} BranchOp deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// CSR read-modify-write command (the immediate variants are folded in by
// selecting the operand source; the *operation* is the same).
// ----------------------------------------------------------------------------
typedef enum {
  CSR_NONE,   // not a CSR instruction
  CSR_RW,     // write value
  CSR_RS,     // set   bits (OR)
  CSR_RC      // clear bits (AND ~)
} CsrCmd deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// System / privileged op (from the SYSTEM opcode PRIV group).
// ----------------------------------------------------------------------------
typedef enum { SYS_NONE, SYS_ECALL, SYS_EBREAK, SYS_MRET } SysOp
  deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Exception cause.  Kept as a small enum internally; excCode() maps to the
// numeric mcause value defined by the privileged spec.
// ----------------------------------------------------------------------------
typedef enum {
  EXC_INSTR_MISALIGN,   // 0  instruction address misaligned
  EXC_ILLEGAL,          // 2  illegal instruction
  EXC_BREAKPOINT,       // 3  EBREAK
  EXC_LOAD_MISALIGN,    // 4  load address misaligned
  EXC_STORE_MISALIGN,   // 6  store/AMO address misaligned
  EXC_ECALL_M           // 11 environment call from M-mode
} ExcCause deriving (Bits, Eq, FShow);

// Map the internal cause enum onto the architectural mcause exception code
// (the low 31 bits; the interrupt bit is always 0 for these synchronous
// exceptions).
function Bit#(31) excCode(ExcCause c);
  return case (c)
    EXC_INSTR_MISALIGN: 31'd0;
    EXC_ILLEGAL:        31'd2;
    EXC_BREAKPOINT:     31'd3;
    EXC_LOAD_MISALIGN:  31'd4;
    EXC_STORE_MISALIGN: 31'd6;
    EXC_ECALL_M:        31'd11;
  endcase;
endfunction

// ----------------------------------------------------------------------------
// TrapInfo -- rides through the pipeline latches alongside each instruction.
// A trap is *detected* in whichever stage discovers it (illegal in ID, load
// misalign in MEM, ...) but is *taken* precisely in WB so that all older
// instructions have already retired and all younger ones can be squashed.
// Once `valid` is set the pipeline never overwrites it, so the earliest cause
// wins.
// ----------------------------------------------------------------------------
typedef struct {
  Bool     valid;   // this instruction faulted
  ExcCause cause;   // why
  Word     epc;     // PC of the faulting instruction (goes to mepc)
  Word     tval;    // trap value (bad address, or the instruction bits)
} TrapInfo deriving (Bits, Eq, FShow);

// A convenient "no trap" constant.
TrapInfo noTrap = TrapInfo { valid: False, cause: EXC_ILLEGAL, epc: 0, tval: 0 };

// ----------------------------------------------------------------------------
// DecodedInst -- the raw decode of one instruction.  Produced by Decoder.bsv,
// consumed by ControlUnit.bsv (and carried onward for its register indices).
// ----------------------------------------------------------------------------
typedef struct {
  Bit#(7)  opcode;
  RegIdx   rd;
  RegIdx   rs1;
  RegIdx   rs2;
  Bit#(3)  funct3;
  Bit#(7)  funct7;
  Bit#(12) csrAddr;   // inst[31:20] -- CSR index or funct12 for PRIV
  Word     imm;       // fully sign/zero-extended immediate (from ImmGen)
} DecodedInst deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// CtrlSignals -- the fully-decoded control word.  Produced by ControlUnit,
// flows ID -> EX and beyond in the ID/EX latch.  All datapath muxes and
// write-enables are driven from here.  A "bubble" is simply a CtrlSignals with
// every enable false (see nopCtrl below).
// ----------------------------------------------------------------------------
typedef struct {
  // EX-stage controls
  AluOp    aluOp;
  AluSrcA  srcA;
  AluSrcB  srcB;
  BranchOp branchOp;   // BR_NONE if not a branch
  Bool     isJump;     // JAL/JALR (unconditional redirect, link in rd)
  Bool     isJalr;     // JALR specifically (target = rs1+imm, not PC+imm)
  Bool     isMulDiv;   // routes EX operands to the multiply/divide unit
  MdOp     mdOp;

  // MEM-stage controls
  Bool     memRead;
  Bool     memWrite;
  MemSize  memSize;
  Bool     memUnsigned; // zero-extend loaded value (LBU/LHU)

  // WB-stage controls
  Bool     regWrite;    // write rd at write-back
  WbSel    wbSel;

  // CSR / system
  CsrCmd   csrCmd;
  Bool     csrUseImm;   // CSRRWI/SI/CI: operand is zero-extended uimm[4:0]
  SysOp    sysOp;

  // Decode-time exception (illegal instruction).  Detected in ID; the actual
  // trap plumbing lives in TrapInfo, this flag just tells ID to raise it.
  Bool     illegal;
} CtrlSignals deriving (Bits, Eq, FShow);

// A control word that does nothing: used to inject bubbles on stall/flush and
// as the reset value of pipeline latches.
CtrlSignals nopCtrl = CtrlSignals {
  aluOp:      ALU_ADD,  srcA: A_RS1, srcB: B_RS2,
  branchOp:   BR_NONE,  isJump: False, isJalr: False,
  isMulDiv:   False,    mdOp: MD_MUL,
  memRead:    False,    memWrite: False, memSize: SZ_W, memUnsigned: False,
  regWrite:   False,    wbSel: WB_ALU,
  csrCmd:     CSR_NONE, csrUseImm: False, sysOp: SYS_NONE,
  illegal:    False
};

// ----------------------------------------------------------------------------
// Forwarding selects (produced by ForwardingUnit, consumed in EX).
//   FWD_NONE  -- use the value read from the register file.
//   FWD_EXMEM -- forward the EX/MEM stage result (most recent producer).
//   FWD_MEMWB -- forward the MEM/WB stage result (older producer).
// ----------------------------------------------------------------------------
typedef enum { FWD_NONE, FWD_EXMEM, FWD_MEMWB } FwdSel deriving (Bits, Eq, FShow);
typedef struct { FwdSel a; FwdSel b; } FwdCtrl deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// HazardCtrl -- output of HazardUnit for load-use interlocks.
//   stallPC     : freeze the PC (re-fetch same instruction).
//   stallIFID   : freeze the IF/ID latch.
//   bubbleIDEX  : inject a NOP into ID/EX (kill the dependent instruction's
//                 first EX attempt) while the load completes.
// ----------------------------------------------------------------------------
typedef struct {
  Bool stallPC;
  Bool stallIFID;
  Bool bubbleIDEX;
} HazardCtrl deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Pipeline latch payloads.  Each carries a `valid` bit (False == bubble) and a
// TrapInfo.  Reg-based latches of these structs implement the 5-stage pipe.
// ----------------------------------------------------------------------------
typedef struct {
  Bool     valid;
  Addr     pc;
  Bit#(32) instr;
  TrapInfo trap;
} IF_ID deriving (Bits, Eq, FShow);

typedef struct {
  Bool        valid;
  Addr        pc;
  DecodedInst di;
  CtrlSignals ctrl;
  Word        rs1v;    // register file read value for rs1
  Word        rs2v;    // register file read value for rs2
  TrapInfo    trap;
} ID_EX deriving (Bits, Eq, FShow);

typedef struct {
  Bool        valid;
  Addr        pc;
  CtrlSignals ctrl;
  Word        aluOut;   // ALU / CSR-old / MD result already selected for non-mem
  Word        rs2v;     // store data
  Word        csrOld;   // old CSR value (for WB_CSR)
  RegIdx      rd;
  TrapInfo    trap;
} EX_MEM deriving (Bits, Eq, FShow);

typedef struct {
  Bool        valid;
  Addr        pc;
  CtrlSignals ctrl;
  Word        wbData;   // final value to write to rd
  RegIdx      rd;
  TrapInfo    trap;
} MEM_WB deriving (Bits, Eq, FShow);

// Reset/bubble values for the latches (valid = False everywhere).
IF_ID  bubbleIFID  = IF_ID  { valid: False, pc: 0, instr: 0, trap: noTrap };
ID_EX  bubbleIDEX  = ID_EX  { valid: False, pc: 0,
                              di: unpack(0), ctrl: nopCtrl,
                              rs1v: 0, rs2v: 0, trap: noTrap };
EX_MEM bubbleEXMEM = EX_MEM { valid: False, pc: 0, ctrl: nopCtrl,
                              aluOut: 0, rs2v: 0, csrOld: 0, rd: 0, trap: noTrap };
MEM_WB bubbleMEMWB = MEM_WB { valid: False, pc: 0, ctrl: nopCtrl,
                              wbData: 0, rd: 0, trap: noTrap };

// ----------------------------------------------------------------------------
// Simple memory request/response used between the core stages and the memory
// interface adapters (which then translate to AXI4-Lite).  Kept minimal: the
// core only ever issues aligned word/half/byte accesses.
// ----------------------------------------------------------------------------
typedef struct {
  Addr     addr;      // byte address
  Bool     write;     // True = store, False = load
  Word     data;      // store data (right-justified)
  Bit#(4)  strb;      // byte lane enables for stores
} MemReq deriving (Bits, Eq, FShow);

// ----------------------------------------------------------------------------
// Debug abstract command interface (host side, on the debug clock).  These
// mirror a minimal subset of the RISC-V Debug spec's abstract commands.
// ----------------------------------------------------------------------------
typedef enum {
  DBG_NOP,
  DBG_HALT,     // request the core to halt
  DBG_RESUME,   // resume from halt
  DBG_STEP,     // execute exactly one instruction then re-halt
  DBG_GPR_RD,   // read  a general-purpose register (regno)
  DBG_GPR_WR,   // write a general-purpose register (regno <- wdata)
  DBG_MEM_RD,   // read  a memory word (addr)
  DBG_MEM_WR    // write a memory word (addr <- wdata)
} DbgCmd deriving (Bits, Eq, FShow);

typedef struct {
  DbgCmd cmd;
  RegIdx regno;   // for GPR access
  Addr   addr;    // for memory access
  Word   wdata;   // for writes
} DbgReq deriving (Bits, Eq, FShow);

typedef struct {
  Bool halted;    // current halt state of the core
  Word rdata;     // result of a read command
} DbgResp deriving (Bits, Eq, FShow);

endpackage : Types
