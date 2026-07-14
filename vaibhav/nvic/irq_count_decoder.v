module irq_count_decoder (
    input  wire [2:0]   irq_count_sel,
    output reg  [127:0] irq_active_mask
);

    always @(*) begin
        case (irq_count_sel)
            3'b000: irq_active_mask = 128'hFF;
            3'b001: irq_active_mask = 128'hFFFF;
            3'b010: irq_active_mask = 128'hFFFF_FFFF;
            3'b011: irq_active_mask = {64'h0, {64{1'b1}}};
            3'b100: irq_active_mask = {128{1'b1}};
            default: irq_active_mask = {128{1'b1}};   // safe: allow all
        endcase
    end

endmodule