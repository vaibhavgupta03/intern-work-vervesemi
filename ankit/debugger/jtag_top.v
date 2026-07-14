`timescale 1ns / 1ps

module jtag_top (
    input  wire tck,
    input  wire tms,
    input  wire trst_n,
    input  wire tdi,
    
    output wire tdo,
    output wire [4:0] ir_out,
    output wire [3:0] tap_state // Waveform mein observe karne ke liye
);

    // Internal connecting wires
    wire shift_ir;
    wire update_ir;
    wire shift_dr;
    wire update_dr;

    // Instantiate TAP Controller (FSM)
    jtag_tap tap_fsm_inst (
        .tck(tck),
        .tms(tms),
        .trst_n(trst_n),
        .shift_ir(shift_ir),
        .update_ir(update_ir),
        .shift_dr(shift_dr),
        .update_dr(update_dr),
        .tap_state(tap_state)
    );

    // Instantiate Instruction & Data Registers
    jtag_registers regs_inst (
        .tck(tck),
        .trst_n(trst_n),
        .tdi(tdi),
        .shift_ir(shift_ir),
        .update_ir(update_ir),
        .shift_dr(shift_dr),
        .tdo(tdo),
        .ir_out(ir_out)
    );

endmodule