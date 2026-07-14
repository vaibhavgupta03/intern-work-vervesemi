`timescale 1ns/1ps
`include "generic_mux.v"

module mux_tb2;

    reg  [2:0]  sel;
    reg  [63:0] data_in;
    wire [7:0]  data_out;

    generic_mux #(
        .SEL_WIDTH(3),
        .DATA_WIDTH(8),
        .NUM_INPUTS(8)
    ) uut (
        .sel      (sel),
        .data_in  (data_in),
        .data_out (data_out)
    );

    initial begin

        data_in = {8'h88, 8'h77, 8'h66, 8'h55, 8'h44, 8'h33, 8'h22, 8'h11};

        sel = 3'd0; #10; $display("sel=0  data_out=%h (expect 11)", data_out);
        sel = 3'd3; #10; $display("sel=3  data_out=%h (expect 44)", data_out);
        sel = 3'd7; #10; $display("sel=7  data_out=%h (expect 88)", data_out);

        #20 $finish;
    end

endmodule