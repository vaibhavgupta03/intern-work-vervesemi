//      // verilator_coverage annotation
        `timescale 1ns/1ps
        module baudrategenerator #(
            parameter CLOCK_FREQUENCY = 100_000_000
        )(
 748703     input  wire        clk,
 000003     input  wire        rst,
~000002     input  wire [15:0] dll_val,
~000002     input  wire [15:0] dlh_val,
~000002     input  wire [15:0] dlf_val,
 000004     input  wire [1:0]  os_sel,
        
 011384     output reg          oversample_tick,
 000005     output wire [4:0]    oversample_factor   // NEW — Tx/Rx need this
        );
        
            // ── combine DLL/DLH into one 16-bit integer divider ───────
~000002     wire [15:0] divider_int = {dlh_val[7:0], dll_val[7:0]};
        
            // ── pull out the fractional divider piece ─────────────────
~000002     wire [3:0] divider_frac = dlf_val[3:0];
        
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
~005692     reg [4:0] frac_accum;
 002846     wire      frac_carry = (frac_accum + divider_frac) >= 16;
        
            // ── main tick counter ──────────────────────────────────────
 372916     reg [15:0] count;
        
            // effective divider for THIS cycle (either divider_int or +1)
~002848     wire [15:0] effective_divider = divider_int + (frac_carry ? 1 : 0);
        
 374351     always @(posedge clk) begin
 000012         if (rst) begin
 000012             count           <= 0;
 000012             frac_accum      <= 0;
 000012             oversample_tick <= 0;
                end
 368647         else if (count == (effective_divider - 1)) begin
 005692             count           <= 0;
 005692             oversample_tick <= 1;
                    // update the fractional accumulator for next time
 005692             frac_accum      <= frac_carry ? (frac_accum + divider_frac - 16)
 005692                                             : (frac_accum + divider_frac);
                end
 368647         else begin
 368647             count           <= count + 1;
 368647             oversample_tick <= 0;
                end
            end
        
        endmodule
