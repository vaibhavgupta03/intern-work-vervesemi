`timescale 1ns/1ps
`include "depth_decoder.v"

module depth_decoder_tb;

    reg  [2:0]  depth_sel;
    wire [11:0] wrap_mask;

    depth_decoder uut (
        .depth_sel (depth_sel),
        .wrap_mask (wrap_mask)
    );

    initial begin
        depth_sel = 3'b000; #10; $display("sel=000 mask=%h (expect 007)", wrap_mask);
        depth_sel = 3'b001; #10; $display("sel=001 mask=%h (expect 00f)", wrap_mask);
        depth_sel = 3'b010; #10; $display("sel=010 mask=%h (expect 01f)", wrap_mask);
        depth_sel = 3'b011; #10; $display("sel=011 mask=%h (expect 03f)", wrap_mask);
        depth_sel = 3'b100; #10; $display("sel=100 mask=%h (expect 07f)", wrap_mask);
        depth_sel = 3'b101; #10; $display("sel=101 mask=%h (expect 0ff)", wrap_mask);
        depth_sel = 3'b110; #10; $display("sel=110 mask=%h (expect 1ff)", wrap_mask);
        depth_sel = 3'b111; #10; $display("sel=111 mask=%h (expect fff)", wrap_mask);

        #10 $finish;
    end

endmodule