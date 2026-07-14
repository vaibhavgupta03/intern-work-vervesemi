`timescale 1ns / 1ps

module jtag_registers (
    input  wire tck,
    input  wire trst_n,
    input  wire tdi,           // Serial Data In
    
    // Control signals from TAP FSM
    input  wire shift_ir,
    input  wire update_ir,
    input  wire shift_dr,
    
    output reg  tdo,           // Serial Data Out
    output reg  [4:0] ir_out   // 5-bit Instruction Register
);

    // Internal Shift Registers
    reg [4:0]  ir_shift_reg;
    reg [31:0] idcode_shift_reg;
    
    // Hardcoded IDCODE value (example: 0x10E31913 for RISC-V)
    wire [31:0] IDCODE_VAL = 32'h10E31913; 

    // --- IR Logic ---
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            ir_shift_reg <= 5'h01; // Default IDCODE instruction
            ir_out       <= 5'h01;
        end else begin
            if (shift_ir) begin
                // Shift data in from TDI, shift out to the right
                ir_shift_reg <= {tdi, ir_shift_reg[4:1]};
            end
            if (update_ir) begin
                // Save the shifted data into the actual IR
                ir_out <= ir_shift_reg;
            end
        end
    end

    // --- DR (IDCODE) Logic ---
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            idcode_shift_reg <= IDCODE_VAL;
        end else begin
            // If IR holds IDCODE instruction (0x01) and we are in Shift-DR
            if (shift_dr && ir_out == 5'h01) begin
                idcode_shift_reg <= {tdi, idcode_shift_reg[31:1]};
            end else if (!shift_dr) begin
                // Reload IDCODE when not shifting
                idcode_shift_reg <= IDCODE_VAL;
            end
        end
    end

    // --- TDO Logic (Output) ---
    always @(*) begin
        if (shift_ir)
            tdo = ir_shift_reg[0];
        else if (shift_dr && ir_out == 5'h01)
            tdo = idcode_shift_reg[0];
        else
            tdo = 1'b0;
    end

endmodule