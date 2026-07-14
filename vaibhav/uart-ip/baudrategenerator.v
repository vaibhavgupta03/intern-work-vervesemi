`timescale 1ns/1ps
module baudrategenerator #(
    parameter CLOCK_FREQUENCY = 100_000_000
)(
    input  wire        clk,
    input  wire        rst,
    input  wire [15:0] dll_val,
    input  wire [15:0] dlh_val,
    input  wire [15:0] dlf_val,
    input  wire [1:0]  os_sel,

    output reg          oversample_tick,
    output wire [4:0]    oversample_factor   // NEW — Tx/Rx need this
);

    // ── combine DLL/DLH into one 16-bit integer divider ───────
    wire [15:0] divider_int = {dlh_val[7:0], dll_val[7:0]};

    // ── pull out the fractional divider piece ─────────────────
    wire [3:0] divider_frac = dlf_val[3:0];

    // ── decode os_sel into the real oversample factor ─────────
    os_sel_decoder u_os_decoder (
        .os_sel(os_sel),
        .oversample_factor(oversample_factor)
    );

    // ── fractional accumulator ─────────────────────────────────
    // every cycle, add divider_frac to this accumulator
    // when it overflows past 15, steal 1 extra cycle this round
    // this is what "dithers" the average divider between
    // divider_int and divider_int+1
    reg [4:0] frac_accum;
    wire      frac_carry = (frac_accum + divider_frac) >= 16;

    // ── main tick counter ──────────────────────────────────────
    reg [15:0] count;

    // effective divider for THIS cycle (either divider_int or +1)
    wire [15:0] effective_divider = divider_int + (frac_carry ? 1 : 0);

    always @(posedge clk) begin
        if (rst) begin
            count           <= 0;
            frac_accum      <= 0;
            oversample_tick <= 0;
        end
        else if (count == (effective_divider - 1)) begin
            count           <= 0;
            oversample_tick <= 1;
            // update the fractional accumulator for next time
            frac_accum      <= frac_carry ? (frac_accum + divider_frac - 16)
                                            : (frac_accum + divider_frac);
        end
        else begin
            count           <= count + 1;
            oversample_tick <= 0;
        end
    end

endmodule