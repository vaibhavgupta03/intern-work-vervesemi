`timescale 1ns/1ps
`include "generic_register.v"

module reg_tb;

    reg         clk, rst, wr_en;
    reg  [15:0] wr_data;
    wire [15:0] reg_val;


    generic_register #(
        .WIDTH(16),
        .RESET_VAL(16'h00E0),
        .SELF_CLEAR_MASK(16'h0006)
    ) uut (
        .clk(clk), .rst(rst),
        .wr_en(wr_en), .wr_data(wr_data),
        .reg_val(reg_val)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        rst = 1; wr_en = 0; wr_data = 0;
        #20 rst = 0;

        
        @(posedge clk); wr_en = 1; wr_data = 16'hE7;
        @(posedge clk); wr_en = 0;

        $display("after write:        reg_val = %h (expect E7)", reg_val);

        @(posedge clk);
        $display("1 cycle later:      reg_val = %h (expect E1, bits 1,2 cleared)", reg_val);

        @(posedge clk);
        $display("2 cycles later:     reg_val = %h (expect E1, still held)", reg_val);

        #50 $finish;
    end

endmodule