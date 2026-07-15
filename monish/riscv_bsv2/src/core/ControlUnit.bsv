// ============================================================================
// ControlUnit.bsv  --  Main decode: DecodedInst -> CtrlSignals (combinational)
// ----------------------------------------------------------------------------
// This is the heart of RV32IM decode.  Given the decoded fields it produces a
// fully-populated CtrlSignals word that drives every datapath mux and enable
// downstream.  It also flags illegal instructions (unsupported opcode/funct
// combination, or a CSR/SYSTEM encoding we do not implement) so that the
// pipeline can raise an illegal-instruction exception in ID.
//
// The structure is one big `case` on the opcode.  Within each opcode we pick
// the ALU op / branch condition / memory size from funct3 (and funct7 for the
// R-type SUB/SRA/M-extension split).  Anything that falls through is illegal.
//
// Key correctness points:
//   * x0 as a destination is *not* special-cased here; the register file
//     ignores writes to x0, so regWrite may be true with rd==0 harmlessly.
//   * LUI uses ALU_COPY_B with srcB=IMM (a=don't care) to pass the immediate.
//   * AUIPC uses ALU_ADD with srcA=PC, srcB=IMM.
//   * JAL/JALR set isJump and wbSel=WB_PC4 (link).  The *target* is computed in
//     the Branch/Jump unit, not here.
//   * SYSTEM splits into CSR ops (funct3 != 0) and PRIV ops (funct3 == 0,
//     selected by the 12-bit funct field): ECALL/EBREAK/MRET.  WFI/FENCE are
//     accepted as NOPs so real toolchain output does not trap spuriously.
// ============================================================================
package ControlUnit;

import Types   :: *;
import ISADefs :: *;

(* noinline *)
function CtrlSignals control(DecodedInst d);
  // Start from a NOP and fill in the fields that matter for this opcode.
  CtrlSignals c = nopCtrl;
  let f3 = d.funct3;
  let f7 = d.funct7;

  // Helper: is this an R/I ALU shift-immediate with a legal funct7?  For
  // OP-IMM, only SLLI/SRLI/SRAI constrain funct7; other imm ops ignore it.
  Bool isMExt = (d.opcode == op_OP) && (f7 == f7_MULDIV);

  case (d.opcode)

    // ---- LUI : rd = imm (upper 20 bits already positioned by ImmGen) -------
    op_LUI: begin
      c.aluOp = ALU_COPY_B; c.srcA = A_ZERO; c.srcB = B_IMM;
      c.regWrite = True;    c.wbSel = WB_ALU;
    end

    // ---- AUIPC : rd = PC + imm ---------------------------------------------
    op_AUIPC: begin
      c.aluOp = ALU_ADD; c.srcA = A_PC; c.srcB = B_IMM;
      c.regWrite = True; c.wbSel = WB_ALU;
    end

    // ---- JAL : rd = PC+4 ; PC += imm ---------------------------------------
    op_JAL: begin
      c.isJump = True; c.isJalr = False;
      c.regWrite = True; c.wbSel = WB_PC4;
    end

    // ---- JALR : rd = PC+4 ; PC = (rs1 + imm) & ~1 --------------------------
    op_JALR: begin
      if (f3 == 3'b000) begin
        c.isJump = True; c.isJalr = True;
        c.regWrite = True; c.wbSel = WB_PC4;
      end else c.illegal = True;
    end

    // ---- BRANCH : conditional, no rd ---------------------------------------
    op_BRANCH: begin
      c.srcA = A_RS1; c.srcB = B_RS2;   // operands compared by Branch unit
      case (f3)
        f3_BEQ:  c.branchOp = BR_EQ;
        f3_BNE:  c.branchOp = BR_NE;
        f3_BLT:  c.branchOp = BR_LT;
        f3_BGE:  c.branchOp = BR_GE;
        f3_BLTU: c.branchOp = BR_LTU;
        f3_BGEU: c.branchOp = BR_GEU;
        default: c.illegal  = True;
      endcase
    end

    // ---- LOAD : rd = mem[rs1+imm] ------------------------------------------
    op_LOAD: begin
      c.aluOp = ALU_ADD; c.srcA = A_RS1; c.srcB = B_IMM;   // address = rs1+imm
      c.memRead = True;  c.regWrite = True; c.wbSel = WB_MEM;
      case (f3)
        f3_LB:  begin c.memSize = SZ_B; c.memUnsigned = False; end
        f3_LH:  begin c.memSize = SZ_H; c.memUnsigned = False; end
        f3_LW:  begin c.memSize = SZ_W; c.memUnsigned = False; end
        f3_LBU: begin c.memSize = SZ_B; c.memUnsigned = True;  end
        f3_LHU: begin c.memSize = SZ_H; c.memUnsigned = True;  end
        default: c.illegal = True;
      endcase
    end

    // ---- STORE : mem[rs1+imm] = rs2 ----------------------------------------
    op_STORE: begin
      c.aluOp = ALU_ADD; c.srcA = A_RS1; c.srcB = B_IMM;   // address = rs1+imm
      c.memWrite = True; c.regWrite = False;
      case (f3)
        f3_SB: c.memSize = SZ_B;
        f3_SH: c.memSize = SZ_H;
        f3_SW: c.memSize = SZ_W;
        default: c.illegal = True;
      endcase
    end

    // ---- OP-IMM : rd = rs1 op imm ------------------------------------------
    op_OPIMM: begin
      c.srcA = A_RS1; c.srcB = B_IMM;
      c.regWrite = True; c.wbSel = WB_ALU;
      case (f3)
        f3_ADD_SUB: c.aluOp = ALU_ADD;                 // ADDI (no SUBI)
        f3_SLT:     c.aluOp = ALU_SLT;
        f3_SLTU:    c.aluOp = ALU_SLTU;
        f3_XOR:     c.aluOp = ALU_XOR;
        f3_OR:      c.aluOp = ALU_OR;
        f3_AND:     c.aluOp = ALU_AND;
        f3_SLL:     if (f7 == f7_BASE) c.aluOp = ALU_SLL; else c.illegal = True;
        f3_SRL_SRA:                                     // SRLI / SRAI
          if      (f7 == f7_BASE) c.aluOp = ALU_SRL;
          else if (f7 == f7_ALT)  c.aluOp = ALU_SRA;
          else                    c.illegal = True;
        default:    c.illegal = True;
      endcase
    end

    // ---- OP : rd = rs1 op rs2  (R-type, plus the M extension) --------------
    op_OP: begin
      c.srcA = A_RS1; c.srcB = B_RS2;
      c.regWrite = True;
      if (isMExt) begin
        // Multiply / divide: route to the multi-cycle unit; result via WB_MD.
        c.isMulDiv = True; c.wbSel = WB_MD;
        case (f3)
          f3_MUL:    c.mdOp = MD_MUL;
          f3_MULH:   c.mdOp = MD_MULH;
          f3_MULHSU: c.mdOp = MD_MULHSU;
          f3_MULHU:  c.mdOp = MD_MULHU;
          f3_DIV:    c.mdOp = MD_DIV;
          f3_DIVU:   c.mdOp = MD_DIVU;
          f3_REM:    c.mdOp = MD_REM;
          f3_REMU:   c.mdOp = MD_REMU;
          // (all eight funct3 are legal for the M extension)
        endcase
      end else begin
        c.wbSel = WB_ALU;
        case (f3)
          f3_ADD_SUB:
            if      (f7 == f7_BASE) c.aluOp = ALU_ADD;
            else if (f7 == f7_ALT)  c.aluOp = ALU_SUB;
            else                    c.illegal = True;
          f3_SLL:  if (f7 == f7_BASE) c.aluOp = ALU_SLL;  else c.illegal = True;
          f3_SLT:  if (f7 == f7_BASE) c.aluOp = ALU_SLT;  else c.illegal = True;
          f3_SLTU: if (f7 == f7_BASE) c.aluOp = ALU_SLTU; else c.illegal = True;
          f3_XOR:  if (f7 == f7_BASE) c.aluOp = ALU_XOR;  else c.illegal = True;
          f3_SRL_SRA:
            if      (f7 == f7_BASE) c.aluOp = ALU_SRL;
            else if (f7 == f7_ALT)  c.aluOp = ALU_SRA;
            else                    c.illegal = True;
          f3_OR:   if (f7 == f7_BASE) c.aluOp = ALU_OR;   else c.illegal = True;
          f3_AND:  if (f7 == f7_BASE) c.aluOp = ALU_AND;  else c.illegal = True;
        endcase
      end
    end

    // ---- SYSTEM : CSR ops, ECALL/EBREAK/MRET -------------------------------
    op_SYSTEM: begin
      case (f3)
        f3_PRIV: begin   // funct3 == 000 : privileged / environment
          case (d.csrAddr)
            priv_ECALL:  c.sysOp = SYS_ECALL;
            priv_EBREAK: c.sysOp = SYS_EBREAK;
            priv_MRET:   c.sysOp = SYS_MRET;
            priv_WFI:    c.sysOp = SYS_NONE;  // treat WFI as NOP
            default:     c.illegal = True;
          endcase
        end
        f3_CSRRW:  begin c.csrCmd = CSR_RW; c.csrUseImm = False; c.regWrite = True; c.wbSel = WB_CSR; end
        f3_CSRRS:  begin c.csrCmd = CSR_RS; c.csrUseImm = False; c.regWrite = True; c.wbSel = WB_CSR; end
        f3_CSRRC:  begin c.csrCmd = CSR_RC; c.csrUseImm = False; c.regWrite = True; c.wbSel = WB_CSR; end
        f3_CSRRWI: begin c.csrCmd = CSR_RW; c.csrUseImm = True;  c.regWrite = True; c.wbSel = WB_CSR; end
        f3_CSRRSI: begin c.csrCmd = CSR_RS; c.csrUseImm = True;  c.regWrite = True; c.wbSel = WB_CSR; end
        f3_CSRRCI: begin c.csrCmd = CSR_RC; c.csrUseImm = True;  c.regWrite = True; c.wbSel = WB_CSR; end
        default:   c.illegal = True;
      endcase
    end

    // ---- FENCE / FENCE.I : accepted as NOPs (single hart, no caches) -------
    op_FENCE: begin
      c = nopCtrl;   // do nothing, do not write a register
    end

    // ---- Anything else is illegal ------------------------------------------
    default: c.illegal = True;

  endcase

  return c;
endfunction

endpackage : ControlUnit
