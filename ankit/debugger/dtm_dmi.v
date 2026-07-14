`timescale 1ns / 1ps

module dtm_dmi (
    input  wire tck,
    input  wire trst_n,
    input  wire tdi,
    
    // Control from TAP
    input  wire shift_dr,
    input  wire update_dr,
    input  wire [4:0] ir_out,
    
    output reg  tdo,
    
    // Parallel DMI Bus Output to Debug Module (DM)
    output reg        dmi_req_valid,
    output reg [6:0]  dmi_req_addr,
    output reg [31:0] dmi_req_data,
    output reg [1:0]  dmi_req_op
);

    // 41-bit shift register (7-bit addr + 32-bit data + 2-bit op)
    reg [40:0] dmi_shift_reg;
    
    // DMI Instruction code is 0x11
    wire is_dmi = (ir_out == 5'h11);

    // --- Shift Logic ---
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            dmi_shift_reg <= 41'b0;
            tdo <= 1'b0;
        end else begin
            if (shift_dr && is_dmi) begin
                // Shift in TDI from MSB, shift right towards LSB
                dmi_shift_reg <= {tdi, dmi_shift_reg[40:1]};
                tdo <= dmi_shift_reg[0];
            end
        end
    end

    // --- Update Logic (Generate Parallel Request) ---
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            dmi_req_valid <= 1'b0;
            dmi_req_addr  <= 7'b0;
            dmi_req_data  <= 32'b0;
            dmi_req_op    <= 2'b0;
        end else begin
            if (update_dr && is_dmi) begin
                // Extract bits based on RISC-V spec mapping
                // [40:34] -> Address, [33:2] -> Data, [1:0] -> Op
                dmi_req_valid <= 1'b1;
                dmi_req_addr  <= dmi_shift_reg[40:34];
                dmi_req_data  <= dmi_shift_reg[33:2];
                dmi_req_op    <= dmi_shift_reg[1:0];
            end else begin
                // Auto-clear request valid signal after 1 clock cycle
                dmi_req_valid <= 1'b0; 
            end
        end
    end

endmodule