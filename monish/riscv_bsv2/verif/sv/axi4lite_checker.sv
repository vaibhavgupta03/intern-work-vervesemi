// axi4lite_checker.sv -- SVA protocol checker for AXI4-Lite. Bind to any
// axi4lite_if.mon. Flags stable-until-ready violations, response-without-request,
// and X on valid control signals. Counts errors in `err_count`.
`ifndef AXI4LITE_CHECKER_SV
`define AXI4LITE_CHECKER_SV

module axi4lite_checker (axi4lite_if.mon bus);
  int err_count = 0;

  // synthesis-off verification helper
  task automatic flag(string msg);
    err_count++;
    $error("[AXI-CHECK] %s @%0t", msg, $time);
  endtask

  // ---- Handshake stability: VALID payload must hold until READY ----
  // Implemented as clocked shadow-register checks (equivalent to the classic
  // "stable until ready" SVA, but robust to combinational-READY sampling across
  // simulators). Each cycle we remember whether a channel was VALID-but-not-
  // accepted, and its payload; next cycle we verify persistence.
  logic        pv_aw, pv_w, pv_ar;      // "held pending" last cycle
  logic [31:0] pd_aw, pd_ar, pd_wd;
  logic [3:0]  pd_ws;

  always @(posedge bus.aclk or negedge bus.aresetn) begin
    if (!bus.aresetn) begin
      pv_aw <= 0; pv_w <= 0; pv_ar <= 0;
    end else begin
      // AW
      if (pv_aw && !(bus.awvalid && (bus.awaddr == pd_aw)))
        flag("AWVALID/AWADDR not stable until AWREADY");
      pv_aw <= bus.awvalid && !bus.awready;
      pd_aw <= bus.awaddr;
      // W
      if (pv_w && !(bus.wvalid && (bus.wdata == pd_wd) && (bus.wstrb == pd_ws)))
        flag("WVALID/WDATA not stable until WREADY");
      pv_w  <= bus.wvalid && !bus.wready;
      pd_wd <= bus.wdata; pd_ws <= bus.wstrb;
      // AR
      if (pv_ar && !(bus.arvalid && (bus.araddr == pd_ar)))
        flag("ARVALID/ARADDR not stable until ARREADY");
      pv_ar <= bus.arvalid && !bus.arready;
      pd_ar <= bus.araddr;
    end
  end

  // ---- No response without an accepted request (simple counting model) ----
  int outstanding_rd = 0, outstanding_wr = 0;
  always @(posedge bus.aclk or negedge bus.aresetn) begin
    if (!bus.aresetn) begin outstanding_rd <= 0; outstanding_wr <= 0; end
    else begin
      if (bus.arvalid && bus.arready) outstanding_rd <= outstanding_rd + 1;
      if (bus.rvalid  && bus.rready ) begin
        if (outstanding_rd == 0) flag("R response with no outstanding read");
        else outstanding_rd <= outstanding_rd - 1;
      end
      if (bus.awvalid && bus.awready) outstanding_wr <= outstanding_wr + 1;
      if (bus.bvalid  && bus.bready ) begin
        if (outstanding_wr == 0) flag("B response with no outstanding write");
        else outstanding_wr <= outstanding_wr - 1;
      end
    end
  end

  // ---- No X on control signals while out of reset ----
  always @(posedge bus.aclk) if (bus.aresetn)
    if ($isunknown({bus.awvalid,bus.wvalid,bus.arvalid,bus.bvalid,bus.rvalid,
                    bus.awready,bus.wready,bus.arready,bus.bready,bus.rready}))
      flag("X/Z on an AXI control signal");
endmodule

`endif
