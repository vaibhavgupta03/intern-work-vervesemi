// DebugModule.bsv -- simplified RISC-V-Debug abstract command engine.
// Runs in the CPU clock domain. Pulls DbgReq commands from the CDC, drives the
// core's debug methods (halt/resume/step, GPR R/W, memory R/W), and returns a
// DbgResp. Memory R/W while halted goes through a dedicated AXI master port so
// it does not disturb the (halted) pipeline's own data port.
package DebugModule;

import Types      :: *;
import Core       :: *;
import DebugCDC   :: *;
import DataMemIfc :: *;
import AXI4Lite   :: *;
import FIFOF      :: *;

interface DebugModuleIfc;
  interface AXI4Lite_Master memAxi;   // debug's own memory access port
endinterface

typedef enum { D_IDLE, D_MEM_WAIT } DState deriving (Bits, Eq);

// core : the CPU (cpu domain). cdc.core methods are cpu-domain.
module mkDebugModule#(CoreIfc core, DbgCoreIfc cdc)(DebugModuleIfc);
  MemPortIfc dmem <- mkMemPort;          // debug memory port (cpu domain)
  Reg#(DState) st <- mkReg(D_IDLE);
  Reg#(DbgReq) cur <- mkRegU;

  // Continuously publish the core's halt state to the debug domain.
  rule pubHalt;
    cdc.setHalted(core.isHalted);
  endrule

  // Accept and execute a command when idle.
  rule doCmd (st == D_IDLE && cdc.coreReqAvail);
    let r <- cdc.coreReq;
    cur <= r;
    case (r.cmd)
      DBG_HALT:   begin core.reqHalt(True);  cdc.coreResp(DbgResp{halted:True,  rdata:0}); end
      DBG_RESUME: begin core.reqHalt(False); cdc.coreResp(DbgResp{halted:False, rdata:0}); end
      DBG_STEP:   begin core.reqStep;        cdc.coreResp(DbgResp{halted:True,  rdata:0}); end
      DBG_GPR_RD: cdc.coreResp(DbgResp{halted:core.isHalted, rdata: core.dbgGprRead(r.regno)});
      DBG_GPR_WR: begin core.dbgGprWrite(r.regno, r.wdata);
                        cdc.coreResp(DbgResp{halted:core.isHalted, rdata:0}); end
      DBG_MEM_RD: begin dmem.req(MemReq{addr:r.addr, write:False, data:0, strb:0}); st <= D_MEM_WAIT; end
      DBG_MEM_WR: begin dmem.req(MemReq{addr:r.addr, write:True, data:r.wdata, strb:4'b1111}); st <= D_MEM_WAIT; end
      default:    cdc.coreResp(DbgResp{halted:core.isHalted, rdata:0});
    endcase
  endrule

  // Await a debug memory access completion, then respond.
  rule memDone (st == D_MEM_WAIT);
    let w <- dmem.resp;
    cdc.coreResp(DbgResp{halted:core.isHalted, rdata: (cur.cmd == DBG_MEM_RD) ? w : 0});
    st <= D_IDLE;
  endrule

  interface memAxi = dmem.axi;
endmodule

endpackage : DebugModule
