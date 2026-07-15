// AXI4LiteXbar.bsv -- simple 3-master -> 1-slave AXI4-Lite arbiter.
// Masters: 0=imem (fetch), 1=dmem (core data), 2=debug. Fixed priority (lowest
// index wins) with per-transaction locking so a read's AR and its R response,
// and a write's AW+W and its B response, always route to the same master.
// Single outstanding transaction downstream (matches BramMem).
package AXI4LiteXbar;

import Types      :: *;
import AXI4Lite   :: *;
import GetPut     :: *;
import FIFOF      :: *;
import Vector     :: *;

// Route tag: which master owns the in-flight transaction.
typedef enum { M_NONE, M_IMEM, M_DMEM, M_DBG } Owner deriving (Bits, Eq);

module mkAXI4LiteXbar#(Vector#(3, AXI4Lite_Master) m, AXI4Lite_Slave s)(Empty);
  // Track owner of the outstanding read and write separately.
  Reg#(Owner) rdOwner <- mkReg(M_NONE);
  Reg#(Owner) wrOwner <- mkReg(M_NONE);

  // Get/Put don't expose "available" without consuming, so we arbitrate with
  // one rule per (master,channel); the rule's implicit condition (the master's
  // get is ready AND downstream is free) plus fixed-priority descending_urgency
  // selects the winner. Owner reg locks the response back to the same master.

  // ---- Reads ----
  (* descending_urgency = "ar_imem, ar_dmem, ar_dbg" *)
  rule ar_imem (rdOwner == M_NONE);
    let a <- m[0].ar.get; s.ar.put(a); rdOwner <= M_IMEM;
  endrule
  rule ar_dmem (rdOwner == M_NONE);
    let a <- m[1].ar.get; s.ar.put(a); rdOwner <= M_DMEM;
  endrule
  rule ar_dbg (rdOwner == M_NONE);
    let a <- m[2].ar.get; s.ar.put(a); rdOwner <= M_DBG;
  endrule

  rule r_resp (rdOwner != M_NONE);
    let d <- s.r.get;
    case (rdOwner)
      M_IMEM: m[0].r.put(d);
      M_DMEM: m[1].r.put(d);
      M_DBG:  m[2].r.put(d);
    endcase
    rdOwner <= M_NONE;
  endrule

  // ---- Writes: AW and W must both come from the owning master ----
  (* descending_urgency = "aw_imem, aw_dmem, aw_dbg" *)
  rule aw_imem (wrOwner == M_NONE);
    let a <- m[0].aw.get; s.aw.put(a); wrOwner <= M_IMEM;
  endrule
  rule aw_dmem (wrOwner == M_NONE);
    let a <- m[1].aw.get; s.aw.put(a); wrOwner <= M_DMEM;
  endrule
  rule aw_dbg (wrOwner == M_NONE);
    let a <- m[2].aw.get; s.aw.put(a); wrOwner <= M_DBG;
  endrule

  // Forward the W beat from the current write owner.
  rule w_imem (wrOwner == M_IMEM); let d <- m[0].w.get; s.w.put(d); endrule
  rule w_dmem (wrOwner == M_DMEM); let d <- m[1].w.get; s.w.put(d); endrule
  rule w_dbg  (wrOwner == M_DBG ); let d <- m[2].w.get; s.w.put(d); endrule

  rule b_resp (wrOwner != M_NONE);
    let resp <- s.b.get;
    case (wrOwner)
      M_IMEM: m[0].b.put(resp);
      M_DMEM: m[1].b.put(resp);
      M_DBG:  m[2].b.put(resp);
    endcase
    wrOwner <= M_NONE;
  endrule
endmodule

endpackage : AXI4LiteXbar
