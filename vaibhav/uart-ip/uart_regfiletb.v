`timescale 1ns/1ps
`include "generic_register.v"
`include "uart_regfile.v"

module dlab_tb;

    reg         clk, rst, wr_en;
    reg  [4:0]  addr, rd_addr;
    reg  [15:0] wr_data;
    wire [15:0] rd_data;

    wire [15:0] rbr_val, thr_val, dll_val, dlh_val, dlf_val;
    wire [15:0] ier_val, iir_val, fcr_val, lcr_val, mcr_val;
    wire [15:0] lsr_val, msr_val, mode_val, clk_val;
    wire [15:0] rxthr_val, txthr_val, timeout_val;

    uart_regfile uut (
        .clk(clk), .rst(rst),
        .wr_en(wr_en), .addr(addr), .wr_data(wr_data),
        .rd_addr(rd_addr), .rd_data(rd_data),
        .rbr_val(rbr_val), .thr_val(thr_val), .dll_val(dll_val),
        .dlh_val(dlh_val), .dlf_val(dlf_val), .ier_val(ier_val),
        .iir_val(iir_val), .fcr_val(fcr_val), .lcr_val(lcr_val),
        .mcr_val(mcr_val), .lsr_val(lsr_val), .msr_val(msr_val),
        .mode_val(mode_val), .clk_val(clk_val),
        .rxthr_val(rxthr_val), .txthr_val(txthr_val),
        .timeout_val(timeout_val)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    task write_reg(input [4:0] a, input [15:0] d);
        begin
            @(posedge clk);
            addr = a; wr_data = d; wr_en = 1;
            @(posedge clk);
            wr_en = 0;
        end
    endtask

    initial begin
        rst = 1; wr_en = 0; addr = 0; wr_data = 0; rd_addr = 0;
        #20 rst = 0;

        // ── TEST 1: DLAB=0 (default after reset) ──────────────
        $display("--- DLAB = 0 (default) ---");

        write_reg(5'h00, 16'hAA55);   // should land in THR
        #1;
        $display("THR = %h (expect aa55)", thr_val);
        $display("DLL = %h (expect 0000, untouched)", dll_val);

        write_reg(5'h02, 16'h00FF);   // should land in IER
        #1;
        $display("IER = %h (expect 00ff)", ier_val);
        $display("DLH = %h (expect 0000, untouched)", dlh_val);

        rd_addr = 5'h00; #1;
        $display("read addr 0x00 -> %h (expect aa55, reading THR)", rd_data);

        // ── TEST 2: set DLAB=1 by writing LCR bit 9 ────────────
        $display("--- Setting DLAB = 1 ---");
        write_reg(5'h06, 16'h0218);   // LCR = 0x0218 -> bit9=1, rest=0x18 (8N1)
        #1;
        $display("LCR = %h (bit 9 should be 1)", lcr_val);

        // ── TEST 3: DLAB=1, same addresses now hit DLL/DLH ────
        write_reg(5'h00, 16'h0036);   // should land in DLL now
        #1;
        $display("DLL = %h (expect 0036)", dll_val);
        $display("THR = %h (expect aa55, UNCHANGED — write went to DLL not THR)", thr_val);

        write_reg(5'h02, 16'h0000);   // should land in DLH now
        #1;
        $display("DLH = %h (expect 0000)", dlh_val);
        $display("IER = %h (expect 00ff, UNCHANGED — write went to DLH not IER)", ier_val);

        rd_addr = 5'h00; #1;
        $display("read addr 0x00 -> %h (expect 0036, reading DLL now)", rd_data);

        // ── TEST 4: clear DLAB=0, confirm THR/IER visible again ─
        $display("--- Clearing DLAB back to 0 ---");
        write_reg(5'h06, 16'h0018);   // LCR = 0x18, bit9=0
        #1;
        $display("LCR = %h (bit 9 should be 0)", lcr_val);

        rd_addr = 5'h00; #1;
        $display("read addr 0x00 -> %h (expect aa55, back to THR)", rd_data);

        #20 $finish;
    end

endmodule