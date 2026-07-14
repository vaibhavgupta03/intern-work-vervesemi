`timescale 1ns/1ps

module stop_bits_decoder (
    input  wire [1:0] stop_bits_sel,     // LCR[4:3]
    input  wire [4:0] oversample_factor, // from baud generator
    output reg  [5:0] stop_ticks         // total oversample_ticks for stop period
);

    always @(*) begin
        case (stop_bits_sel)
            // FIX: Explicitly zero-extend the 5-bit input to 6-bit math boundaries
            2'b00: stop_ticks = {1'b0, oversample_factor};              // 1 stop bit
            2'b01: stop_ticks = {1'b0, oversample_factor} + ({1'b0, oversample_factor} >> 1); // 1.5
            2'b10: stop_ticks = {1'b0, oversample_factor} * 6'd2;          // 2 stop bits
            default: stop_ticks = {1'b0, oversample_factor};            // safe fallback
        endcase
    end

endmodule