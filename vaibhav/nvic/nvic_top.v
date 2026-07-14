module nvic_top #(
    parameter NUM_SOURCES = 128,
    parameter PRIO_WIDTH  = 8
)(
    input  wire        clk,
    input  wire        rst,

    // hardware interrupt inputs from peripherals
    input  wire [NUM_SOURCES-1:0] irq_in,

    // CPU interface
    input  wire        cpu_claim,
    input  wire        cpu_complete,
    input  wire [6:0]  cpu_complete_id,

    // AXI4-Lite register interface
    input  wire        wr_en,
    input  wire [7:0]  addr,
    input  wire [31:0] wr_data,
    input  wire [7:0]  rd_addr,
    output wire [31:0] rd_data,

    // output to CPU
    output wire        irq_to_cpu,
    output wire [6:0]  irq_id_to_cpu,
    output wire [7:0]  irq_prio_to_cpu
);

    // ── internal wires ────────────────────────────────────
    wire [127:0]  enable_out;
    wire [127:0]  pend_out;
    wire [127:0]  pend_sw_set, pend_sw_clear;
    wire           pend_sw_set_en, pend_sw_clear_en;
    wire           pend_clear_en;
    wire [127:0]   pend_clear_mask;
    wire [6:0]     prio_wr_idx;
    wire [7:0]     prio_wr_data;
    wire           prio_wr_en;
    wire [2:0]     irq_count_sel;
    wire [1:0]     prio_width_sel;
    wire [127:0]   irq_active_mask;
    wire [7:0]     prio_mask;
    wire [127:0]   active;
    wire [6:0]     winner_id;
    wire [7:0]     winner_prio;
    wire           irq_pending;
    wire [7:0]     prio_out [0:127];
    wire [7:0]     current_prio;

    // ── decoders ─────────────────────────────────────────
    irq_count_decoder u_irq_cnt_dec (
        .irq_count_sel  (irq_count_sel),
        .irq_active_mask(irq_active_mask)
    );

    prio_width_decoder u_prio_w_dec (
        .prio_width_sel(prio_width_sel),
        .prio_mask     (prio_mask)
    );

    // ── arrays ────────────────────────────────────────────
    pend_array u_pend (
        .clk           (clk),
        .rst           (rst),
        .irq_in        (irq_in | (pend_sw_set_en ? pend_sw_set : 128'h0)),
        .sw_wr_en      (pend_sw_clear_en | pend_clear_en),
        .sw_clear_mask (pend_sw_clear | pend_clear_mask),
        .pend_out      (pend_out)
    );

    enable_array u_enable (
        .clk       (clk),
        .rst       (rst),
        .wr_en     (1'b0),    // enable written via regfile
        .wr_data   (enable_out),
        .enable_out()         // unused — enable_out feeds directly from regfile
    );

    prio_array u_prio (
        .clk      (clk),
        .rst      (rst),
        .wr_en    (prio_wr_en),
        .wr_idx   (prio_wr_idx),
        .wr_data  (prio_wr_data),
        .prio_mask(prio_mask),
        .prio_out (prio_out)
    );

    // ── priority encoder ─────────────────────────────────
    assign active = pend_out & enable_out & irq_active_mask;

    priority_encoder u_penc (
        .active     (active),
        .prio_in    (prio_out),
        .prio_mask  (prio_mask),
        .winner_id  (winner_id),
        .winner_prio(winner_prio),
        .irq_pending(irq_pending)
    );

    // ── controller ───────────────────────────────────────
    nvic_controller u_ctrl (
        .clk            (clk),
        .rst            (rst),
        .winner_id      (winner_id),
        .winner_prio    (winner_prio),
        .irq_pending    (irq_pending),
        .cpu_claim      (cpu_claim),
        .cpu_complete   (cpu_complete),
        .cpu_complete_id(cpu_complete_id),
        .irq_to_cpu     (irq_to_cpu),
        .irq_id_to_cpu  (irq_id_to_cpu),
        .irq_prio_to_cpu(irq_prio_to_cpu),
        .pend_clear_en  (pend_clear_en),
        .pend_clear_mask(pend_clear_mask),
        .current_prio   (current_prio)
    );

    // ── register file ────────────────────────────────────
    nvic_regfile u_regfile (
        .clk             (clk),
        .rst             (rst),
        .wr_en           (wr_en),
        .addr            (addr),
        .wr_data         (wr_data),
        .rd_addr         (rd_addr),
        .rd_data         (rd_data),
        .enable_out      (enable_out),
        .pend_sw_set     (pend_sw_set),
        .pend_sw_clear   (pend_sw_clear),
        .pend_sw_set_en  (pend_sw_set_en),
        .pend_sw_clear_en(pend_sw_clear_en),
        .prio_wr_idx     (prio_wr_idx),
        .prio_wr_data    (prio_wr_data),
        .prio_wr_en      (prio_wr_en),
        .irq_count_sel   (irq_count_sel),
        .prio_width_sel  (prio_width_sel),
        .pend_in         (pend_out),
        .winner_id       (winner_id),
        .winner_prio     (winner_prio),
        .irq_pending     (irq_pending)
    );

endmodule