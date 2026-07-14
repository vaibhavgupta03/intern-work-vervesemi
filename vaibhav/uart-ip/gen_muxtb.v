`timescale 1ns/1ps
`include "generic_mux.v"

module mux_tb;

    reg  [1:0]  sel;
    reg  [3:0]  data_in;
    wire        data_out;


    generic_mux #(
        .SEL_WIDTH(2),
        .DATA_WIDTH(1),
        .NUM_INPUTS(4)
    ) uut (
        .sel      (sel),
        .data_in  (data_in),
        .data_out (data_out)
    );

    initial begin
        $dumpfile("mux_wave.vcd");
        $dumpvars(0, mux_tb);

        
        data_in = 4'b1010;

        sel = 2'b00;  #10;
        $display("sel=00 (sys)      data_out=%b (expect 0)", data_out);

        sel = 2'b01;  #10;
        $display("sel=01 (pll)      data_out=%b (expect 1)", data_out);

        sel = 2'b10;  #10;
        $display("sel=10 (xtal)     data_out=%b (expect 0)", data_out);

        sel = 2'b11;  #10;
        $display("sel=11 (reserved) data_out=%b (expect 1)", data_out);

        #20 $finish;
    end

endmodule