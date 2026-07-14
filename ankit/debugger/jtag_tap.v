`timescale 1ns / 1ps

module jtag_tap (
    input  wire tck,
    input  wire tms,
    input  wire trst_n, // Active low reset
    
    // Control signals for next modules (DTM)
    output wire shift_ir,
    output wire update_ir,
    output wire shift_dr,
    output wire update_dr,
    output reg [3:0] tap_state
);

    // JTAG 16 States (IEEE 1149.1 Standard)
    parameter TEST_LOGIC_RESET = 4'hF;
    parameter RUN_TEST_IDLE    = 4'hC;
    parameter SELECT_DR_SCAN   = 4'h7;
    parameter CAPTURE_DR       = 4'h6;
    parameter SHIFT_DR         = 4'h2;
    parameter EXIT1_DR         = 4'h1;
    parameter PAUSE_DR         = 4'h3;
    parameter EXIT2_DR         = 4'h0;
    parameter UPDATE_DR        = 4'h5;
    
    parameter SELECT_IR_SCAN   = 4'h4;
    parameter CAPTURE_IR       = 4'hE;
    parameter SHIFT_IR         = 4'hA;
    parameter EXIT1_IR         = 4'h9;
    parameter PAUSE_IR         = 4'hB;
    parameter EXIT2_IR         = 4'h8;
    parameter UPDATE_IR        = 4'hD;

    reg [3:0] next_state;

    // State Register (Sequential)
    always @(posedge tck or negedge trst_n) begin
        if (!trst_n) begin
            tap_state <= TEST_LOGIC_RESET;
        end else begin
            tap_state <= next_state;
        end
    end

    // Next State Logic (Combinational)
    always @(*) begin
        case (tap_state)
            TEST_LOGIC_RESET: next_state = tms ? TEST_LOGIC_RESET : RUN_TEST_IDLE;
            RUN_TEST_IDLE:    next_state = tms ? SELECT_DR_SCAN   : RUN_TEST_IDLE;
            
            // DR Branch
            SELECT_DR_SCAN:   next_state = tms ? SELECT_IR_SCAN   : CAPTURE_DR;
            CAPTURE_DR:       next_state = tms ? EXIT1_DR         : SHIFT_DR;
            SHIFT_DR:         next_state = tms ? EXIT1_DR         : SHIFT_DR;
            EXIT1_DR:         next_state = tms ? UPDATE_DR        : PAUSE_DR;
            PAUSE_DR:         next_state = tms ? EXIT2_DR         : PAUSE_DR;
            EXIT2_DR:         next_state = tms ? UPDATE_DR        : SHIFT_DR;
            UPDATE_DR:        next_state = tms ? SELECT_DR_SCAN   : RUN_TEST_IDLE;

            // IR Branch
            SELECT_IR_SCAN:   next_state = tms ? TEST_LOGIC_RESET : CAPTURE_IR;
            CAPTURE_IR:       next_state = tms ? EXIT1_IR         : SHIFT_IR;
            SHIFT_IR:         next_state = tms ? EXIT1_IR         : SHIFT_IR;
            EXIT1_IR:         next_state = tms ? UPDATE_IR        : PAUSE_IR;
            PAUSE_IR:         next_state = tms ? EXIT2_IR         : PAUSE_IR;
            EXIT2_IR:         next_state = tms ? UPDATE_IR        : SHIFT_IR;
            UPDATE_IR:        next_state = tms ? SELECT_DR_SCAN   : RUN_TEST_IDLE;
            
            default:          next_state = TEST_LOGIC_RESET;
        endcase
    end

    // Output assignments
    assign shift_ir  = (tap_state == SHIFT_IR);
    assign update_ir = (tap_state == UPDATE_IR);
    assign shift_dr  = (tap_state == SHIFT_DR);
    assign update_dr = (tap_state == UPDATE_DR);

endmodule