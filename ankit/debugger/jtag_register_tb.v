`timescale 1ns / 1ps

module tb_jtag_registers();

    reg tck, trst_n, tdi;
    reg shift_ir, update_ir, shift_dr;
    
    wire tdo;
    wire [4:0] ir_out;

    // Instantiate UUT
    jtag_registers uut (
        .tck(tck), .trst_n(trst_n), .tdi(tdi),
        .shift_ir(shift_ir), .update_ir(update_ir), .shift_dr(shift_dr),
        .tdo(tdo), .ir_out(ir_out)
    );

    // Clock Generation (10ns delay)
    always #10 tck = ~tck;

    initial begin
        // Initialize Inputs
        tck = 0; trst_n = 0; tdi = 0;
        shift_ir = 0; update_ir = 0; shift_dr = 0;

        // Reset
        #15 trst_n = 1; #15;

        // --- Simulate Shift-IR (Sending 5-bit instruction: 11010) ---
        shift_ir = 1;
        tdi = 0; #20; // Bit 0
        tdi = 1; #20; // Bit 1
        tdi = 0; #20; // Bit 2
        tdi = 1; #20; // Bit 3
        tdi = 1; #20; // Bit 4
        shift_ir = 0;
        
        // Update IR
        update_ir = 1; #20;
        update_ir = 0; #20;

        // --- Simulate Shift-DR (Reading out the 32-bit IDCODE) ---
        // For reading IDCODE, we just watch the 'tdo' output line
        // First, set IR back to IDCODE instruction (00001)
        shift_ir = 1;
        tdi = 1; #20; tdi = 0; #20; tdi = 0; #20; tdi = 0; #20; tdi = 0; #20;
        shift_ir = 0; update_ir = 1; #20; update_ir = 0; #20;

        // Now shift out data
        shift_dr = 1;
        #640; // Wait for 32 clock cycles (32 * 20ns) to shift out 32 bits
        shift_dr = 0;

        $finish;
    end
endmodule