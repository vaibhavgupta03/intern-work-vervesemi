`timescale 1ns/1ps

module generic_register #(
    parameter int WIDTH = 16,
    parameter [WIDTH-1:0] RESET_VAL = 0,
    parameter [WIDTH-1:0] SELF_CLEAR_MASK = 0
)(
    input  wire               clk,
    input  wire               rst,
    input  wire               wr_en,
    input  wire [WIDTH-1:0]   wr_data,
    output reg  [WIDTH-1:0]   reg_val
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            reg_val <= RESET_VAL;
        end else begin
            if (wr_en) begin
                // FIX: Force self-clearing bits to clear on the next cycle, 
                // even if the AXI bus holds wr_en high for multiple clocks.
                reg_val <= (wr_data & ~SELF_CLEAR_MASK);
            end else begin
                reg_val <= reg_val & ~SELF_CLEAR_MASK;
            end
        end
    end

endmodule