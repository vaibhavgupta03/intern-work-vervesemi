`timescale 1ns/1ps
module parity_decoder (
    input  wire [2:0] parity_sel,    // LCR[7:5]
    input  wire [8:0] data_bits_in,  // the data bits being sent/checked
    input  wire [3:0] num_data_bits, // how many of the 9 bits are real (5-9)
    output reg         parity_enabled,
    output reg         parity_bit    // the bit to transmit, or expected bit to check
);

    // count how many 1s are in the actual data bits (masking unused ones)
    integer i;
    reg [3:0] ones_count;
    reg [8:0] masked_data;

    always @(*) begin
        // mask off any bits beyond num_data_bits
        masked_data = data_bits_in & ((9'd1 << num_data_bits) - 1);

        ones_count = 0;
        for (i = 0; i < 9; i = i + 1) begin
            if (masked_data[i]) ones_count = ones_count + 1;
        end

        case (parity_sel)
            3'b000: begin // none
                parity_enabled = 1'b0;
                parity_bit     = 1'b0;
            end
            3'b001: begin // odd
                parity_enabled = 1'b1;
                parity_bit     = ~ones_count[0];   // make total count odd
            end
            3'b011: begin // even
                parity_enabled = 1'b1;
                parity_bit     = ones_count[0];    // make total count even
            end
            3'b101: begin // mark (stick, always 1)
                parity_enabled = 1'b1;
                parity_bit     = 1'b1;
            end
            3'b111: begin // space (stick, always 0)
                parity_enabled = 1'b1;
                parity_bit     = 1'b0;
            end
            default: begin
                parity_enabled = 1'b0;
                parity_bit     = 1'b0;
            end
        endcase
    end

endmodule