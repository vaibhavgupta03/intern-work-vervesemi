`timescale 1ns/1ps
`include "os_sel_decoder.v"
`include "baudrategenerator.v"

module baud_tb;

    reg         clk, rst;
    reg  [15:0] dll_val, dlh_val, dlf_val;
    reg  [1:0]  os_sel;
    wire        oversample_tick;
    wire [4:0]  oversample_factor;

    baudrategenerator uut (
        .clk(clk), .rst(rst),
        .dll_val(dll_val), .dlh_val(dlh_val), .dlf_val(dlf_val),
        .os_sel(os_sel),
        .oversample_tick(oversample_tick),
        .oversample_factor(oversample_factor)
    );

    initial clk = 0;
    always #5 clk = ~clk;   // 100MHz

    integer tick_count;
    integer start_time;

    initial begin
        rst = 1; dll_val = 0; dlh_val = 0; dlf_val = 0; os_sel = 0;
        #20 rst = 0;

        // 100MHz, 115200 baud, 16x oversample
        // DIVIDER = 100M / (115200*16) = 54.25
        // integer part = 54, fractional part = 0.25 * 16 = 4
        dll_val = 16'h0036;   // 54
        dlh_val = 16'h0000;
        dlf_val = 16'h0004;   // 4/16 = 0.25
        os_sel  = 2'b00;      // 16x

        $display("oversample_factor = %d (expect 16)", oversample_factor);

        // measure average tick period over many ticks
        tick_count = 0;
        start_time = 0;

        @(posedge oversample_tick);
        start_time = $time;

        repeat (100) @(posedge oversample_tick);

        $display("100 ticks took %0d ns, average = %0d ns/tick",
                   $time - start_time, ($time - start_time) / 100);
        $display("expected average ~540ns (54.25 cycles * 10ns/cycle = 542.5ns)");

        #1000 $finish;
    end

endmodule