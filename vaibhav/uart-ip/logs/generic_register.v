//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module generic_register #(
            parameter int WIDTH = 16,
            parameter [WIDTH-1:0] RESET_VAL = 0,
            parameter [WIDTH-1:0] SELF_CLEAR_MASK = 0
        )(
 6738327     input  wire               clk,
 000027     input  wire               rst,
 000372     input  wire               wr_en,
~001782     input  wire [WIDTH-1:0]   wr_data,
~000102     output reg  [WIDTH-1:0]   reg_val
        );
        
 3369159     always @(posedge clk or posedge rst) begin
 3369051         if (rst) begin
 000108             reg_val <= RESET_VAL;
 3369051         end else begin
 3368865             if (wr_en) begin
                        // FIX: Force self-clearing bits to clear on the next cycle, 
                        // even if the AXI bus holds wr_en high for multiple clocks.
 000186                 reg_val <= (wr_data & ~SELF_CLEAR_MASK);
 3368865             end else begin
 3368865                 reg_val <= reg_val & ~SELF_CLEAR_MASK;
                    end
                end
            end
        
        endmodule
