`timescale 1ns/1ps
`include "irq_count_decoder.v"

module irq_count_decoder_tb;
    reg  [2:0]   sel;
    wire [127:0] mask;

    irq_count_decoder uut (.irq_count_sel(sel), .irq_active_mask(mask));

    initial begin
        sel = 3'b000; #10;
        $display("sel=000 mask[7:0]=%h (expect ff)",  mask[7:0]);
        $display("sel=000 mask[15:8]=%h (expect 00)", mask[15:8]);

        sel = 3'b001; #10;
        $display("sel=001 mask[15:0]=%h (expect ffff)", mask[15:0]);
        $display("sel=001 mask[31:16]=%h (expect 0000)", mask[31:16]);

        sel = 3'b010; #10;
        $display("sel=010 mask[31:0]=%h (expect ffffffff)", mask[31:0]);
        $display("sel=010 mask[63:32]=%h (expect 00000000)", mask[63:32]);

        sel = 3'b011; #10;
        $display("sel=011 mask[63:0]=%h (expect all ff)", mask[63:0]);
        $display("sel=011 mask[127:64]=%h (expect 0)", mask[127:64]);

        sel = 3'b100; #10;
        $display("sel=100 mask=%h (expect all ff)", mask);

        #10 $finish;
    end
endmodule