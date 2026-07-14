//      // verilator_coverage annotation
        // uart_regfile_spec_checker.v
        // Verifies register behavior against datasheet spec
        
        module uart_regfile_spec_checker (
 748703     input wire        clk,
 000003     input wire        rst,
        
            // observe the regfile write interface
 000734     input wire        wr_en,
~000356     input wire [4:0]  addr,
 000198     input wire [15:0] wr_data,
~000012     input wire [15:0] rd_data,
~000018     input wire [4:0]  rd_addr,
        
            // observe all register values
~000086     input wire [15:0] lcr_val,
~000003     input wire [15:0] fcr_val,
~000002     input wire [15:0] dll_val,
~000002     input wire [15:0] dlh_val,
~000003     input wire [15:0] rxthr_val,
~000002     input wire [15:0] txthr_val,
~000003     input wire [15:0] timeout_val,
~000002     input wire [15:0] mode_val,
~000004     input wire [15:0] clk_val,
        
            // results — one bit per spec requirement
 000001     output reg spec_lcr_reset_value_ok,
 000001     output reg spec_fcr_reset_value_ok,
 000001     output reg spec_rxthr_reset_value_ok,
 000001     output reg spec_timeout_reset_value_ok,
 000001     output reg spec_fcr_self_clear_ok,
 000001     output reg spec_dlab_dll_access_ok,
%000000     output reg spec_dlab_ier_access_ok,
 000001     output reg spec_reserved_bits_ok,
        
            // failures
%000000     output reg spec_lcr_reset_value_FAIL,
%000000     output reg spec_fcr_reset_value_FAIL,
%000000     output reg spec_fcr_self_clear_FAIL,
%000000     output reg spec_dlab_dll_access_FAIL,
%000000     output reg spec_reserved_bits_FAIL
        );
        
            // ── SPEC: Reset values must match datasheet ────────────
            // checked one cycle after rst falls
 000003     reg rst_prev;
 374351     always @(posedge clk) begin
 374351         rst_prev <= rst;
        
                // fire checks on the first cycle AFTER reset deasserts
 374350         if (rst_prev && !rst) begin
                    // LCR reset = 0x0018 (8 data bits, 1 stop, no parity)
~000001             if (lcr_val == 16'h0018)
 000001                 spec_lcr_reset_value_ok   <= 1'b1;
                    else
%000000                 spec_lcr_reset_value_FAIL <= 1'b1;
        
                    // FCR reset = 0x00E0 (FIFO enabled, depth=4096)
~000001             if (fcr_val == 16'h00E0)
 000001                 spec_fcr_reset_value_ok   <= 1'b1;
                    else
%000000                 spec_fcr_reset_value_FAIL <= 1'b1;
        
                    // RXTHR reset = 0x0001
~000001             if (rxthr_val == 16'h0001)
 000001                 spec_rxthr_reset_value_ok <= 1'b1;
        
                    // TIMEOUT reset = 0x0004
~000001             if (timeout_val == 16'h0004)
 000001                 spec_timeout_reset_value_ok <= 1'b1;
                end
            end
        
            // ── SPEC: FCR bits 1 and 2 must self-clear ────────────
            // watch: write FCR with bit1 or bit2 set, check they clear next cycle
 000002     reg        fcr_written_with_reset_bits;
~000002     reg [15:0] fcr_prev;
        
 374351     always @(posedge clk or posedge rst) begin
 374339         if (rst) begin
 000012             fcr_written_with_reset_bits <= 0;
 000012             fcr_prev <= 0;
                end
 374339         else begin
 374339             fcr_prev <= fcr_val;
        
                    // detect write to FCR with self-clear bits set
 374338             if (wr_en && addr == 5'h04 && (wr_data & 16'h0006)) begin
 000001                 fcr_written_with_reset_bits <= 1'b1;
                    end
        
                    // one cycle later: bits 1,2 must be back to 0
 374338             if (fcr_written_with_reset_bits) begin
 000001                 fcr_written_with_reset_bits <= 1'b0;
        
~000001                 if ((fcr_val & 16'h0006) == 16'h0000) begin
 000001                     spec_fcr_self_clear_ok   <= 1'b1;
                        end
%000000                 else begin
%000000                     spec_fcr_self_clear_FAIL <= 1'b1;
                        end
                    end
                end
            end
        
            // ── SPEC: DLAB=1 must redirect addr 0x00 to DLL ───────
 000002     reg dlab_was_set;
~000002     reg [15:0] dll_before;
        
 374351     always @(posedge clk or posedge rst) begin
 374339         if (rst) begin
 000012             dlab_was_set <= 0;
 000012             dll_before   <= 0;
                end
 374339         else begin
                    // track when DLAB gets set
 374335             if (wr_en && addr == 5'h06 && wr_data[9]) begin
 000004                 dlab_was_set <= 1'b1;
 000004                 dll_before   <= dll_val;
                    end
        
                    // when someone writes to addr 0x00 while DLAB=1,
                    // it should change DLL, not THR
 374166             if (dlab_was_set && wr_en && addr == 5'h00) begin
                        // DLL should change to match wr_data next cycle
                        // (we check one cycle after the write)
                    end
        
                    // check: one cycle after write to 0x00 with DLAB=1,
                    // dll_val should equal what was written
 374337             if (dlab_was_set && $past(wr_en) &&
 000002                 $past(addr) == 5'h00 && lcr_val[9]) begin
~000002                 if (dll_val == $past(wr_data[15:0])) begin
 000002                     spec_dlab_dll_access_ok   <= 1'b1;
                        end
%000000                 else begin
%000000                     spec_dlab_dll_access_FAIL <= 1'b1;
                        end
                    end
                end
            end
        
            // ── SPEC: Reserved bits in FCR [4:3] must always be 0 ─
 374351     always @(posedge clk) begin
 374339         if (!rst) begin
~374339             if ((fcr_val & 16'h0018) == 16'h0000) begin
 374339                 spec_reserved_bits_ok   <= 1'b1;
                    end
%000000             else begin
%000000                 spec_reserved_bits_FAIL <= 1'b1;
                    end
                end
            end
        
        endmodule
