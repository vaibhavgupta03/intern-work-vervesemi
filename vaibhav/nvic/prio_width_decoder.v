module prio_width_decoder (
    input  wire [1:0] prio_width_sel,
    output reg  [7:0] prio_mask          // AND this with stored priority
);

    always @(*) begin
        case (prio_width_sel)
            2'b00: prio_mask = 8'h07;    //   8 levels → 3 bits
            2'b01: prio_mask = 8'h0F;    //  16 levels → 4 bits
            2'b10: prio_mask = 8'h3F;    //  64 levels → 6 bits
            2'b11: prio_mask = 8'hFF;    // 256 levels → 8 bits (full)
            default: prio_mask = 8'hFF;
        endcase
    end

endmodule