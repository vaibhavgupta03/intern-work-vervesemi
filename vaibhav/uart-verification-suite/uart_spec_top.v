// uart_spec_top.v
// Ties all three checkers together and provides a single PASS/FAIL
module uart_spec_top (
    input wire clk,
    input wire rst,

    // connect to your DUT (uart_top) ports
    input wire        tx_pin,
    input wire        rx_pin,
    input wire        oversample_tick,
    input wire [4:0]  oversample_factor,

    // LCR fields (from uart_top's lcr_val)
    input wire [2:0]  word_len_sel,
    input wire [1:0]  stop_bits_sel,
    input wire [2:0]  parity_sel,

    // regfile observe interface (tap from uart_top)
    input wire        wr_en,
    input wire [4:0]  addr,
    input wire [15:0] wr_data,
    input wire [15:0] rd_data,
    input wire [4:0]  rd_addr,
    input wire [15:0] lcr_val,
    input wire [15:0] fcr_val,
    input wire [15:0] dll_val,
    input wire [15:0] dlh_val,
    input wire [15:0] rxthr_val,
    input wire [15:0] txthr_val,
    input wire [15:0] timeout_val,
    input wire [15:0] mode_val,
    input wire [15:0] clk_val,

    // AXI channels
    input wire [31:0] awaddr, input wire awvalid, input wire awready,
    input wire [31:0] wdata,  input wire wvalid,  input wire wready,
    input wire [3:0]  wstrb,
    input wire [1:0]  bresp,  input wire bvalid,  input wire bready,
    input wire [31:0] araddr, input wire arvalid, input wire arready,
    input wire [31:0] rdata,
    input wire [1:0]  rresp,  input wire rvalid,  input wire rready,

    // summary outputs
    output wire all_pass,
    output reg  [31:0] total_pass_count,
    output reg  [31:0] total_fail_count
);

    // ── instantiate all three checkers ───────────────────
    wire pc_start_ok,  pc_data_ok,  pc_par_ok,  pc_stop_ok,  pc_idle_ok;
    wire pc_start_FAIL, pc_data_FAIL, pc_par_FAIL, pc_stop_FAIL, pc_idle_FAIL;

    uart_protocol_checker #(.CHECK_ID("TX")) u_proto_chk (
        .clk(clk), .rst(rst),
        .uart_pin(tx_pin),
        .oversample_tick(oversample_tick),
        .expected_word_len(word_len_sel),
        .expected_stop_bits(stop_bits_sel),
        .expected_parity(parity_sel),
        .oversample_factor(oversample_factor),
        .spec_start_bit_ok(pc_start_ok),
        .spec_data_bits_ok(pc_data_ok),
        .spec_parity_ok(pc_par_ok),
        .spec_stop_bit_ok(pc_stop_ok),
        .spec_idle_line_ok(pc_idle_ok),
        .spec_start_bit_FAIL(pc_start_FAIL),
        .spec_data_bits_FAIL(pc_data_FAIL),
        .spec_parity_FAIL(pc_par_FAIL),
        .spec_stop_bit_FAIL(pc_stop_FAIL),
        .spec_idle_line_FAIL(pc_idle_FAIL)
    );

    wire rc_lcr_rst_ok, rc_fcr_rst_ok, rc_rxthr_rst_ok, rc_timeout_rst_ok;
    wire rc_fcr_sc_ok,  rc_dlab_ok,    rc_rsv_ok;
    wire rc_lcr_rst_FAIL, rc_fcr_rst_FAIL, rc_fcr_sc_FAIL;
    wire rc_dlab_FAIL, rc_rsv_FAIL;

    uart_regfile_spec_checker u_reg_chk (
        .clk(clk), .rst(rst),
        .wr_en(wr_en), .addr(addr), .wr_data(wr_data),
        .rd_data(rd_data), .rd_addr(rd_addr),
        .lcr_val(lcr_val), .fcr_val(fcr_val),
        .dll_val(dll_val), .dlh_val(dlh_val),
        .rxthr_val(rxthr_val), .txthr_val(txthr_val),
        .timeout_val(timeout_val), .mode_val(mode_val), .clk_val(clk_val),
        .spec_lcr_reset_value_ok(rc_lcr_rst_ok),
        .spec_fcr_reset_value_ok(rc_fcr_rst_ok),
        .spec_rxthr_reset_value_ok(rc_rxthr_rst_ok),
        .spec_timeout_reset_value_ok(rc_timeout_rst_ok),
        .spec_fcr_self_clear_ok(rc_fcr_sc_ok),
        .spec_dlab_dll_access_ok(rc_dlab_ok),
        .spec_dlab_ier_access_ok(),            // <--- Add this line here to satisfy the pin mapping
        .spec_reserved_bits_ok(rc_rsv_ok),
        .spec_lcr_reset_value_FAIL(rc_lcr_rst_FAIL),
        .spec_fcr_reset_value_FAIL(rc_fcr_rst_FAIL),
        .spec_fcr_self_clear_FAIL(rc_fcr_sc_FAIL),
        .spec_dlab_dll_access_FAIL(rc_dlab_FAIL),
        .spec_reserved_bits_FAIL(rc_rsv_FAIL)
    );

    wire ac_aw_ok, ac_w_ok, ac_ar_ok, ac_br_ok, ac_rr_ok, ac_rx_ok;
    wire ac_aw_FAIL, ac_w_FAIL, ac_ar_FAIL, ac_br_FAIL, ac_rr_FAIL, ac_rx_FAIL;

    axi_spec_checker u_axi_chk (
        .clk(clk), .rst(rst),
        .awaddr(awaddr), .awvalid(awvalid), .awready(awready),
        .wdata(wdata), .wstrb(wstrb), .wvalid(wvalid), .wready(wready),
        .bresp(bresp), .bvalid(bvalid), .bready(bready),
        .araddr(araddr), .arvalid(arvalid), .arready(arready),
        .rdata(rdata), .rresp(rresp), .rvalid(rvalid), .rready(rready),
        .spec_awvalid_stable_ok(ac_aw_ok),
        .spec_wvalid_stable_ok(ac_w_ok),
        .spec_arvalid_stable_ok(ac_ar_ok),
        .spec_bresp_ok_ok(ac_br_ok),
        .spec_rresp_ok_ok(ac_rr_ok),
        .spec_no_x_on_rdata_ok(ac_rx_ok),
        .spec_awvalid_stable_FAIL(ac_aw_FAIL),
        .spec_wvalid_stable_FAIL(ac_w_FAIL),
        .spec_arvalid_stable_FAIL(ac_ar_FAIL),
        .spec_bresp_FAIL(ac_br_FAIL),
        .spec_rresp_FAIL(ac_rr_FAIL),
        .spec_x_on_rdata_FAIL(ac_rx_FAIL)
    );

    // ── aggregate all FAIL signals ────────────────────────
    wire any_fail = pc_start_FAIL | pc_data_FAIL | pc_par_FAIL |
                    pc_stop_FAIL   | pc_idle_FAIL  |
                    rc_lcr_rst_FAIL | rc_fcr_rst_FAIL |
                    rc_fcr_sc_FAIL  | rc_dlab_FAIL  | rc_rsv_FAIL |
                    ac_aw_FAIL | ac_w_FAIL | ac_ar_FAIL |
                    ac_br_FAIL | ac_rr_FAIL | ac_rx_FAIL;

    wire any_pass = pc_start_ok | pc_data_ok | pc_par_ok |
                    pc_stop_ok  | pc_idle_ok  |
                    rc_lcr_rst_ok | rc_fcr_rst_ok |
                    rc_rxthr_rst_ok | rc_timeout_rst_ok |
                    rc_fcr_sc_ok | rc_dlab_ok | rc_rsv_ok |
                    ac_aw_ok | ac_w_ok | ac_ar_ok |
                    ac_br_ok | ac_rr_ok | ac_rx_ok;

    assign all_pass = !any_fail;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            total_pass_count <= 0;
            total_fail_count <= 0;
        end
        else begin
            if (any_pass) total_pass_count <= total_pass_count + 1;
            if (any_fail) total_fail_count <= total_fail_count + 1;
        end
    end

    // ── $display report every 10000 cycles ────────────────
    always @(posedge clk) begin
        if (!rst && (total_pass_count + total_fail_count) % 10000 == 0
            && (total_pass_count + total_fail_count) > 0) begin
            $display("[SPEC SUITE] PASS=%0d FAIL=%0d ALL_PASS=%b",
                      total_pass_count, total_fail_count, all_pass);
        end

        // immediately report any failure with its source
        if (!rst) begin
            if (pc_start_FAIL)  $display("[FAIL] SPEC: Start bit was not LOW at midpoint");
            if (pc_data_FAIL)   $display("[FAIL] SPEC: Wrong number of data bits on wire");
            if (pc_par_FAIL)    $display("[FAIL] SPEC: Parity bit on wire does not match expected");
            if (pc_stop_FAIL)   $display("[FAIL] SPEC: Stop bit was not HIGH");
            if (pc_idle_FAIL)   $display("[FAIL] SPEC: Idle line went LOW unexpectedly");
            if (rc_lcr_rst_FAIL) $display("[FAIL] SPEC: LCR reset value wrong (expected 0x0018)");
            if (rc_fcr_rst_FAIL) $display("[FAIL] SPEC: FCR reset value wrong (expected 0x00E0)");
            if (rc_fcr_sc_FAIL)  $display("[FAIL] SPEC: FCR bits 1/2 did not self-clear");
            if (rc_dlab_FAIL)    $display("[FAIL] SPEC: DLAB=1 did not redirect addr 0x00 to DLL");
            if (rc_rsv_FAIL)     $display("[FAIL] SPEC: Reserved bits in FCR are not zero");
            if (ac_aw_FAIL)  $display("[FAIL] AXI: AWVALID dropped before AWREADY");
            if (ac_w_FAIL)   $display("[FAIL] AXI: WVALID dropped before WREADY");
            if (ac_ar_FAIL)  $display("[FAIL] AXI: ARVALID dropped before ARREADY");
            if (ac_br_FAIL)  $display("[FAIL] AXI: BRESP was not OKAY (2'b00)");
            if (ac_rr_FAIL)  $display("[FAIL] AXI: RRESP was not OKAY (2'b00)");
            if (ac_rx_FAIL)  $display("[FAIL] AXI: RDATA was X when RVALID asserted");

            if (any_pass && !any_fail)
                $display("[PASS] All active spec checks passed this cycle");
        end
    end

endmodule