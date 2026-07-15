// MulDiv.bsv -- RV32M multiply/divide, multi-cycle iterative.
// Handshake: start(op,a,b) when !busy; poll busy; result valid when done().
// Multiply: 32-cycle shift-add. Divide: 32-cycle restoring division.
// Handles RISC-V div-by-zero and signed overflow (-2^31 / -1) specially.
package MulDiv;

import Types :: *;

interface MulDivIfc;
  method Action start(MdOp op, Word a, Word b);
  method Bool   busy;
  method Bool   done;
  method Word   result;
endinterface

typedef enum { IDLE, RUN, FINISH } State deriving (Bits, Eq);

(* synthesize *)
module mkMulDiv(MulDivIfc);
  Reg#(State)     st    <- mkReg(IDLE);
  Reg#(Bit#(6))   cnt   <- mkReg(0);          // iteration counter (0..32)
  Reg#(MdOp)      opR   <- mkRegU;
  Reg#(Bool)      isDiv <- mkRegU;

  // Multiply: operate on unsigned magnitudes for 32 shift-add iterations, then
  // negate the 64-bit product if the true signs differ. Correct for all four
  // MUL variants (signedness of each factor set at start).
  Reg#(Bit#(64))  acc    <- mkRegU;           // running unsigned product
  Reg#(Bit#(64))  mcand  <- mkRegU;           // magnitude of a, shifted left
  Reg#(Bit#(32))  mplier <- mkRegU;           // magnitude of b, shifted right
  Reg#(Bool)      pNeg   <- mkRegU;           // final product should be negated

  // Divide working regs (unsigned magnitudes).
  Reg#(Bit#(32))  divisor  <- mkRegU;
  Reg#(Bit#(32))  quotient <- mkRegU;
  Reg#(Bit#(32))  remainder<- mkRegU;
  Reg#(Bool)      qNeg   <- mkRegU;           // quotient sign for signed div
  Reg#(Bool)      rNeg   <- mkRegU;           // remainder sign
  Reg#(Word)      resR   <- mkRegU;           // latched final result

  // sign helpers
  function Bit#(32) absv(Word x) = (x[31]==1) ? ((~x)+1) : x;

  // ---- MULTIPLY step: unsigned shift-add, 32 iterations ----
  rule mulStep (st == RUN && !isDiv);
    if (mplier[0] == 1) acc <= acc + mcand;
    mcand  <= mcand << 1;
    mplier <= mplier >> 1;
    cnt <= cnt + 1;
    if (cnt == 31) st <= FINISH;
  endrule

  // ---- DIVIDE step: restoring division ----
  rule divStep (st == RUN && isDiv);
    // shift remainder:quotient left by 1, bring in next dividend bit
    Bit#(33) r = {remainder[31:0], quotient[31]};   // 33-bit trial
    Bit#(33) sub = r - {1'b0, divisor};
    if (sub[32] == 0) begin  // divisor <= r : subtract, quotient bit 1
      remainder <= sub[31:0];
      quotient  <= {quotient[30:0], 1'b1};
    end else begin
      remainder <= r[31:0];
      quotient  <= {quotient[30:0], 1'b0};
    end
    cnt <= cnt + 1;
    if (cnt == 31) st <= FINISH;
  endrule

  // ---- FINISH: assemble result for the requested op ----
  rule finish (st == FINISH);
    Word out = 0;
    if (!isDiv) begin
      Bit#(64) prod = pNeg ? ((~acc) + 1) : acc;   // apply product sign
      out = case (opR)
        MD_MUL:    prod[31:0];
        default:   prod[63:32];   // MULH/MULHSU/MULHU high word
      endcase;
    end else begin
      Word q = qNeg ? ((~quotient)+1) : quotient;
      Word rem = rNeg ? ((~remainder)+1) : remainder;
      out = case (opR)
        MD_DIV, MD_DIVU: q;
        default:         rem;    // REM/REMU
      endcase;
    end
    resR <= out;
    st <= IDLE;
  endrule

  method Action start(MdOp op, Word a, Word b) if (st == IDLE);
    opR <= op;
    cnt <= 0;
    Bool div = (op == MD_DIV || op == MD_DIVU || op == MD_REM || op == MD_REMU);
    isDiv <= div;

    if (!div) begin
      // Signedness of each factor. a signed for MUL/MULH/MULHSU; b for MUL/MULH.
      Bool aSigned = (op == MD_MUL || op == MD_MULH || op == MD_MULHSU);
      Bool bSigned = (op == MD_MUL || op == MD_MULH);
      Bool aNeg = aSigned && (a[31] == 1);
      Bool bNeg = bSigned && (b[31] == 1);
      acc    <= 0;
      mcand  <= zeroExtend(aNeg ? ((~a)+1) : a);   // |a|
      mplier <= bNeg ? ((~b)+1) : b;               // |b|
      pNeg   <= aNeg != bNeg;                      // negate product if signs differ
      st <= RUN;
    end else begin
      // Divide: compute unsigned magnitudes and result signs.
      Bool sgn = (op == MD_DIV || op == MD_REM);
      Bit#(32) ua = sgn ? absv(a) : a;
      Bit#(32) ub = sgn ? absv(b) : b;
      // Special cases: div by zero, signed overflow.
      if (b == 0) begin
        // quotient = all-ones, remainder = dividend
        resR <= (op==MD_DIV||op==MD_DIVU) ? 32'hFFFF_FFFF : a;
        st <= IDLE;              // 1-op path: result ready immediately
      end else if (sgn && a == 32'h8000_0000 && b == 32'hFFFF_FFFF) begin
        resR <= (op==MD_DIV) ? 32'h8000_0000 : 0;   // overflow: q=a, r=0
        st <= IDLE;
      end else begin
        divisor   <= ub;
        quotient  <= ua;         // dividend loaded into quotient reg
        remainder <= 0;
        qNeg <= sgn && (a[31] != b[31]);
        rNeg <= sgn && (a[31] == 1);
        st <= RUN;
      end
    end
  endmethod

  method Bool busy = (st != IDLE);
  method Bool done = (st == IDLE);
  method Word result = resR;
endmodule

endpackage : MulDiv
