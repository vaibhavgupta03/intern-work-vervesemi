`timescale 1ns/1ps
`include "prio_width_decoder.v"
`include "priority_encoder.v"

module priority_encoder_tb;

    reg  [127:0]  active;
    reg  [7:0]    prio_in [0:127];
    reg  [1:0]    prio_width_sel;
    wire [7:0]    prio_mask;
    wire [6:0]    winner_id;
    wire [7:0]    winner_prio;
    wire          irq_pending;

    prio_width_decoder u_pwd (
        .prio_width_sel(prio_width_sel),
        .prio_mask(prio_mask)
    );

    priority_encoder #(.NUM_SOURCES(128), .PRIO_WIDTH(8)) uut (
        .active(active),
        .prio_in(prio_in),
        .prio_mask(prio_mask),
        .winner_id(winner_id),
        .winner_prio(winner_prio),
        .irq_pending(irq_pending)
    );

    integer i;

    initial begin
        // set all priorities to worst (0xFF) first
        for (i = 0; i < 128; i = i + 1) prio_in[i] = 8'hFF;
        active = 0; prio_width_sel = 2'b11;   // full 8-bit priority

        // TEST 1: single active IRQ
        prio_in[5] = 8'h10; active = 128'h20;   // only IRQ5
        #10;
        $display("TEST1: winner_id=%0d (exp 5) prio=%h (exp 10) pending=%b",
                   winner_id, winner_prio, irq_pending);

        // TEST 2: two active IRQs — lower value wins
        prio_in[3] = 8'h20; prio_in[7] = 8'h05;
        active = 128'h88;   // IRQ3 and IRQ7 active
        #10;
        $display("TEST2: winner_id=%0d (exp 7, prio=5) prio=%h pending=%b",
                   winner_id, winner_prio, irq_pending);

        // TEST 3: prio_mask limits resolution
        prio_width_sel = 2'b00;   // 8 levels, mask=0x07 (only 3 bits matter)
        prio_in[2] = 8'hF0; prio_in[9] = 8'hF8;   // both look same after masking
        active = 128'h204;   // IRQ2 and IRQ9
        #10;
        // masked: F0 & 07 = 00, F8 & 07 = 00 — equal priority, lower index wins
        $display("TEST3: winner_id=%0d (exp 2, same masked prio) pending=%b",
                   winner_id, irq_pending);

        // TEST 4: no active IRQs
        active = 0;
        #10;
        $display("TEST4: irq_pending=%b (expect 0)", irq_pending);

        #20 $finish;
    end
endmodule