`timescale 1ns/1ps
module word_len_decoder (
    input  wire [2:0] word_len_sel,    // LCR[2:0]
    output reg  [3:0] data_bits        // actual bit count: 5,6,7,8,9
);

    always @(*) begin
        case (word_len_sel)
            3'b000: data_bits = 4'd5;
            3'b001: data_bits = 4'd6;
            3'b010: data_bits = 4'd7;
            3'b011: data_bits = 4'd8;
            3'b100: data_bits = 4'd9;
            default: data_bits = 4'd8;   // safe fallback
        endcase
    end

endmodule