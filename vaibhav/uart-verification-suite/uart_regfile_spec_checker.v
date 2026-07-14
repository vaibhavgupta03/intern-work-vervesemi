// uart_regfile_spec_checker.v
// Verifies register behavior against datasheet spec

module uart_regfile_spec_checker (
    input wire        clk,
    input wire        rst,

    // observe the regfile write interface
    input wire        wr_en,
    input wire [4:0]  addr,
    input wire [15:0] wr_data,
    input wire [15:0] rd_data,
    input wire [4:0]  rd_addr,

    // observe all register values
    input wire [15:0] lcr_val,
    input wire [15:0] fcr_val,
    input wire [15:0] dll_val,
    input wire [15:0] dlh_val,
    input wire [15:0] rxthr_val,
    input wire [15:0] txthr_val,
    input wire [15:0] timeout_val,
    input wire [15:0] mode_val,
    input wire [15:0] clk_val,

    // results — one bit per spec requirement
    output reg spec_lcr_reset_value_ok,
    output reg spec_fcr_reset_value_ok,
    output reg spec_rxthr_reset_value_ok,
    output reg spec_timeout_reset_value_ok,
    output reg spec_fcr_self_clear_ok,
    output reg spec_dlab_dll_access_ok,
    output reg spec_dlab_ier_access_ok,
    output reg spec_reserved_bits_ok,

    // failures
    output reg spec_lcr_reset_value_FAIL,
    output reg spec_fcr_reset_value_FAIL,
    output reg spec_fcr_self_clear_FAIL,
    output reg spec_dlab_dll_access_FAIL,
    output reg spec_reserved_bits_FAIL
);

    // ── SPEC: Reset values must match datasheet ────────────
    // checked one cycle after rst falls
    reg rst_prev;
    always @(posedge clk) begin
        rst_prev <= rst;

        // fire checks on the first cycle AFTER reset deasserts
        if (rst_prev && !rst) begin
            // LCR reset = 0x0018 (8 data bits, 1 stop, no parity)
            if (lcr_val == 16'h0018)
                spec_lcr_reset_value_ok   <= 1'b1;
            else
                spec_lcr_reset_value_FAIL <= 1'b1;

            // FCR reset = 0x00E0 (FIFO enabled, depth=4096)
            if (fcr_val == 16'h00E0)
                spec_fcr_reset_value_ok   <= 1'b1;
            else
                spec_fcr_reset_value_FAIL <= 1'b1;

            // RXTHR reset = 0x0001
            if (rxthr_val == 16'h0001)
                spec_rxthr_reset_value_ok <= 1'b1;

            // TIMEOUT reset = 0x0004
            if (timeout_val == 16'h0004)
                spec_timeout_reset_value_ok <= 1'b1;
        end
    end

    // ── SPEC: FCR bits 1 and 2 must self-clear ────────────
    // watch: write FCR with bit1 or bit2 set, check they clear next cycle
    reg        fcr_written_with_reset_bits;
    reg [15:0] fcr_prev;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            fcr_written_with_reset_bits <= 0;
            fcr_prev <= 0;
        end
        else begin
            fcr_prev <= fcr_val;

            // detect write to FCR with self-clear bits set
            if (wr_en && addr == 5'h04 && (wr_data & 16'h0006)) begin
                fcr_written_with_reset_bits <= 1'b1;
            end

            // one cycle later: bits 1,2 must be back to 0
            if (fcr_written_with_reset_bits) begin
                fcr_written_with_reset_bits <= 1'b0;

                if ((fcr_val & 16'h0006) == 16'h0000) begin
                    spec_fcr_self_clear_ok   <= 1'b1;
                end
                else begin
                    spec_fcr_self_clear_FAIL <= 1'b1;
                end
            end
        end
    end

    // ── SPEC: DLAB=1 must redirect addr 0x00 to DLL ───────
    reg dlab_was_set;
    reg [15:0] dll_before;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            dlab_was_set <= 0;
            dll_before   <= 0;
        end
        else begin
            // track when DLAB gets set
            if (wr_en && addr == 5'h06 && wr_data[9]) begin
                dlab_was_set <= 1'b1;
                dll_before   <= dll_val;
            end

            // when someone writes to addr 0x00 while DLAB=1,
            // it should change DLL, not THR
            if (dlab_was_set && wr_en && addr == 5'h00) begin
                // DLL should change to match wr_data next cycle
                // (we check one cycle after the write)
            end

            // check: one cycle after write to 0x00 with DLAB=1,
            // dll_val should equal what was written
            if (dlab_was_set && $past(wr_en) &&
                $past(addr) == 5'h00 && lcr_val[9]) begin
                if (dll_val == $past(wr_data[15:0])) begin
                    spec_dlab_dll_access_ok   <= 1'b1;
                end
                else begin
                    spec_dlab_dll_access_FAIL <= 1'b1;
                end
            end
        end
    end

    // ── SPEC: Reserved bits in FCR [4:3] must always be 0 ─
    always @(posedge clk) begin
        if (!rst) begin
            if ((fcr_val & 16'h0018) == 16'h0000) begin
                spec_reserved_bits_ok   <= 1'b1;
            end
            else begin
                spec_reserved_bits_FAIL <= 1'b1;
            end
        end
    end

endmodule