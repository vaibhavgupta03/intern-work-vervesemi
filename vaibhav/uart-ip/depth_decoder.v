`timescale 1ns/1ps
module depth_decoder (
    input  wire [2:0]  depth_sel,
    output reg  [11:0] wrap_mask
);

    always @(*) begin
        case (depth_sel)
            3'b000: wrap_mask = 12'h007;
            3'b001: wrap_mask = 12'h00F;
            3'b010: wrap_mask = 12'h01F;
            3'b011: wrap_mask = 12'h03F;
            3'b100: wrap_mask = 12'h07F;
            3'b101: wrap_mask = 12'h0FF;
            3'b110: wrap_mask = 12'h1FF;
            3'b111: wrap_mask = 12'hFFF;
            default: wrap_mask = 12'hFFF;
        endcase
    end

endmodule