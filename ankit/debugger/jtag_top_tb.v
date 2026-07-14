`timescale 1ns / 1ps

module tb_jtag_top();

    reg tck, tms, trst_n, tdi;
    wire tdo;
    wire [4:0] ir_out;
    wire [3:0] tap_state;

    // Instantiate Top Module
    jtag_top uut (
        .tck(tck), .tms(tms), .trst_n(trst_n), .tdi(tdi),
        .tdo(tdo), .ir_out(ir_out), .tap_state(tap_state)
    );

    // Clock Generation (10ns delay -> 20ns time period)
    always #10 tck = ~tck;

    // --- JTAG Navigation Tasks ---
    task reset_tap;
        begin
            tms = 1; #100; // 5 cycles
        end
    endtask

    task goto_shift_ir;
        begin
            tms = 0; #20; // Run-Test/Idle
            tms = 1; #20; // Select-DR
            tms = 1; #20; // Select-IR
            tms = 0; #20; // Capture-IR
            tms = 0; #20; // Shift-IR
        end
    endtask

    task goto_shift_dr;
        begin
            tms = 1; #20; // Exit1-IR or DR (depending on where we are)
            tms = 1; #20; // Update-IR or DR
            tms = 1; #20; // Select-DR
            tms = 0; #20; // Capture-DR
            tms = 0; #20; // Shift-DR
        end
    endtask

    initial begin
        // Initialize Inputs
        tck = 0; tms = 1; trst_n = 0; tdi = 0;
        
        // Reset System
        #15 trst_n = 1;
        reset_tap();

        // ---------------------------------------------------------
        // STEP 1: Load IDCODE Instruction (0x01) into IR
        // ---------------------------------------------------------
        goto_shift_ir();
        
        // Shift 5-bit instruction "00001" (LSB first)
        tms = 0; tdi = 1; #20; // Bit 0 (1)
        tms = 0; tdi = 0; #20; // Bit 1 (0)
        tms = 0; tdi = 0; #20; // Bit 2 (0)
        tms = 0; tdi = 0; #20; // Bit 3 (0)
        
        // Final bit shift + exit (TMS=1)
        tms = 1; tdi = 0; #20; // Bit 4 (0) & Exit1-IR
        
        // Update IR and go to Idle
        tms = 1; #20; // Update-IR
        tms = 0; #20; // Run-Test/Idle

        // ---------------------------------------------------------
        // STEP 2: Read 32-bit IDCODE from DR
        // ---------------------------------------------------------
        // Now that IR has 0x01, the DR connected is IDCODE
        tms = 1; #20; // Select-DR
        tms = 0; #20; // Capture-DR
        tms = 0; #20; // Shift-DR
        
        // Hold in Shift-DR for 32 clock cycles to read out TDO
        // Watch the 'tdo' waveform in Vivado to see the 32-bit value 
        // 0x10E31913 shift out sequentially.
        tms = 0;
        #640; 
        
        // Exit and go to Idle
        tms = 1; #20; // Exit1-DR
        tms = 1; #20; // Update-DR
        tms = 0; #20; // Run-Test/Idle
        
        #40;
        $finish;
    end

endmodule