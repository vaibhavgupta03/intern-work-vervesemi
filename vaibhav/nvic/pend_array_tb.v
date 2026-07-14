`timescale 1ns/1ps
`include "pend_array.v"

module pend_array_tb;
    reg        clk, rst, sw_wr_en;
    reg  [127:0] irq_in, sw_clear_mask;
    wire [127:0] pend_out;

    pend_array uut (
        .clk(clk), .rst(rst),
        .irq_in(irq_in),
        .sw_wr_en(sw_wr_en),
        .sw_clear_mask(sw_clear_mask),
        .pend_out(pend_out)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        rst = 1; irq_in = 0; sw_wr_en = 0; sw_clear_mask = 0;
        #20 rst = 0;

        // hardware fires IRQ 3 and IRQ 7
        @(posedge clk); irq_in = 128'h88;   // bits 3 and 7
        @(posedge clk); irq_in = 0;
        #1;
        $display("after irq_in: pend[7:0]=%h (expect 88)", pend_out[7:0]);

        // software clears IRQ 3 (bit 3 = 0x08)
        @(posedge clk); sw_wr_en = 1; sw_clear_mask = 128'h08;
        @(posedge clk); sw_wr_en = 0;
        #1;
        $display("after clear bit3: pend[7:0]=%h (expect 80)", pend_out[7:0]);

        // hardware fires and software clears SAME bit SAME cycle — set wins
        @(posedge clk);
        irq_in = 128'h80; sw_wr_en = 1; sw_clear_mask = 128'h80;
        @(posedge clk);
        irq_in = 0; sw_wr_en = 0;
        #1;
        $display("set+clear same cycle: pend[7:0]=%h (expect 80, set wins)", pend_out[7:0]);

        #20 $finish;
    end
endmodule