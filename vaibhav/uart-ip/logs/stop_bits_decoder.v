//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module stop_bits_decoder (
 000154     input  wire [1:0] stop_bits_sel,     // LCR[4:3]
 000010     input  wire [4:0] oversample_factor, // from baud generator
~000176     output reg  [5:0] stop_ticks         // total oversample_ticks for stop period
        );
        
 748704     always @(*) begin
 748704         case (stop_bits_sel)
                    // FIX: Explicitly zero-extend the 5-bit input to 6-bit math boundaries
 194516             2'b00: stop_ticks = {1'b0, oversample_factor};              // 1 stop bit
 220708             2'b01: stop_ticks = {1'b0, oversample_factor} + ({1'b0, oversample_factor} >> 1); // 1.5
 157420             2'b10: stop_ticks = {1'b0, oversample_factor} * 6'd2;          // 2 stop bits
 176060             default: stop_ticks = {1'b0, oversample_factor};            // safe fallback
                endcase
            end
        
        endmodule
