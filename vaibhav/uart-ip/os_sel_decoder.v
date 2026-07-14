`timescale 1ns/1ps
module os_sel_decoder (
    input  wire [1:0] os_sel,
    output reg  [4:0] oversample_factor
);

    always @(*) begin
        case (os_sel)
            2'b00: oversample_factor = 5'd16;
            2'b01: oversample_factor = 5'd8;
            2'b10: oversample_factor = 5'd4;
            2'b11: oversample_factor = 5'd3;
        endcase
    end

endmodule