`timescale 1ns/1ps
`include "prio_width_decoder.v"

module prio_width_decoder_tb;
    reg  [1:0] sel;
    wire [7:0] mask;

    prio_width_decoder uut (.prio_width_sel(sel), .prio_mask(mask));

    initial begin
        sel = 2'b00; #10; $display("sel=00 mask=%h (expect 07)", mask);
        sel = 2'b01; #10; $display("sel=01 mask=%h (expect 0f)", mask);
        sel = 2'b10; #10; $display("sel=10 mask=%h (expect 3f)", mask);
        sel = 2'b11; #10; $display("sel=11 mask=%h (expect ff)", mask);
        #10 $finish;
    end
endmodule