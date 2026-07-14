`timescale 1ns / 1ps

module tb_jtag_tap();

    // Inputs
    reg tck;
    reg tms;
    reg trst_n;

    // Outputs
    wire shift_ir;
    wire update_ir;
    wire shift_dr;
    wire update_dr;
    wire [3:0] tap_state;

    // Instantiate the Unit Under Test (UUT)
    jtag_tap uut (
        .tck(tck),
        .tms(tms),
        .trst_n(trst_n),
        .shift_ir(shift_ir),
        .update_ir(update_ir),
        .shift_dr(shift_dr),
        .update_dr(update_dr),
        .tap_state(tap_state)
    );

    // Clock Generation (10ns delay -> 20ns time period)
    always #10 tck = ~tck;

    // Task: Reset TAP Controller (TMS = 1 for 5 cycles)
    task reset_tap;
        begin
            tms = 1;
            #100; // 5 clock cycles
        end
    endtask

    // Task: Navigate to Shift-IR state from Test-Logic-Reset
    task move_to_shift_ir;
        begin
            // Go to Run-Test/Idle
            tms = 0; #20;
            // Go to Select-DR-Scan
            tms = 1; #20;
            // Go to Select-IR-Scan
            tms = 1; #20;
            // Go to Capture-IR
            tms = 0; #20;
            // Go to Shift-IR
            tms = 0; #20;
        end
    endtask

    initial begin
        // Initialize Inputs
        tck = 0;
        tms = 1;
        trst_n = 0;

        // Apply asynchronous reset
        #15 trst_n = 1;

        // 1. Force synchronous reset (Send to TEST_LOGIC_RESET)
        reset_tap();

        // 2. Navigate FSM to SHIFT_IR state
        move_to_shift_ir();
        
        // Hold in SHIFT_IR for a few cycles
        tms = 0;
        #60;

        // 3. Exit and return to RUN_TEST_IDLE
        tms = 1; // Exit1-IR
        #20;
        tms = 1; // Update-IR
        #20;
        tms = 0; // Run-Test/Idle
        #40;

        $finish;
    end

endmodule