`timescale 1ns/1ps
`include "depth_decoder.v"
`include "fifo.v"

module fifo_tb;

    reg         clk, rst, wr_en, rd_en;
    reg  [15:0] din;
    reg  [2:0]  depth_sel;
    wire [15:0] dout;
    wire        full, empty, half_full, overflow;
    wire [12:0] fill_level;

    fifo #(.WIDTH(16), .DEPTH(4096), .POINTER_BIT(13)) uut (
        .clk(clk), .rst(rst),
        .wr_en(wr_en), .din(din),
        .rd_en(rd_en), .depth_sel(depth_sel),
        .dout(dout), .full(full), .empty(empty),
        .fill_level(fill_level), .half_full(half_full),
        .overflow(overflow)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    integer i;

    initial begin
        rst = 1; wr_en = 0; rd_en = 0; din = 0; depth_sel = 3'b000; // 8 bytes
        #20 rst = 0;

        // ── TEST 1: 8-byte mode — fill completely, check full ──
        $display("--- TEST 1: depth_sel=000 (8 bytes) ---");

        for (i = 0; i < 8; i = i + 1) begin
            @(posedge clk);
            wr_en = 1; din = 16'h1000 + i;
        end
        @(posedge clk); wr_en = 0;

        #1;
        $display("after 8 writes: full=%b (expect 1), fill_level=%0d (expect 8)",
                   full, fill_level);

        // try a 9th write — should overflow, not actually store
        @(posedge clk); wr_en = 1; din = 16'hDEAD;
        @(posedge clk); wr_en = 0;
        #1;
        $display("9th write attempt: overflow=%b (expect 1)", overflow);

        // drain completely
        for (i = 0; i < 8; i = i + 1) begin
            @(posedge clk);
            rd_en = 1;
        end
        @(posedge clk); rd_en = 0;
        #1;
        $display("after draining 8: empty=%b (expect 1)", empty);

        // ── TEST 2: switch to 16-byte mode, repeat ──────────────
        $display("--- TEST 2: depth_sel=001 (16 bytes) ---");
        depth_sel = 3'b001;

        for (i = 0; i < 16; i = i + 1) begin
            @(posedge clk);
            wr_en = 1; din = 16'h2000 + i;
        end
        @(posedge clk); wr_en = 0;
        #1;
        $display("after 16 writes: full=%b (expect 1), fill_level=%0d (expect 16)",
                   full, fill_level);

        for (i = 0; i < 16; i = i + 1) begin
            @(posedge clk);
            rd_en = 1;
        end
        @(posedge clk); rd_en = 0;
        #1;
        $display("after draining 16: empty=%b (expect 1)", empty);

        // ── TEST 3: full 4096-byte mode, spot check ─────────────
        $display("--- TEST 3: depth_sel=111 (4096 bytes) ---");
        depth_sel = 3'b111;

        for (i = 0; i < 100; i = i + 1) begin
            @(posedge clk);
            wr_en = 1; din = i;
        end
        @(posedge clk); wr_en = 0;
        #1;
        $display("after 100 writes: fill_level=%0d (expect 100), full=%b (expect 0)",
                   fill_level, full);

        // half_full check — 4096/2 = 2048, we only wrote 100, should be 0
        $display("half_full=%b (expect 0, far from 2048)", half_full);

        #20 $finish;
    end

endmodule