module priority_encoder #(
    parameter NUM_SOURCES = 128,
    parameter PRIO_WIDTH  = 8
)(
    input  wire [NUM_SOURCES-1:0]             active,      // PEND & ENABLE & mask
    input  wire [PRIO_WIDTH-1:0]              prio_in [0:NUM_SOURCES-1],
    input  wire [PRIO_WIDTH-1:0]              prio_mask,   // effective bits

    output reg  [$clog2(NUM_SOURCES)-1:0]     winner_id,
    output reg  [PRIO_WIDTH-1:0]              winner_prio,
    output reg                                irq_pending  // 1 = at least one active
);

    integer i;
    reg [PRIO_WIDTH-1:0] best_prio;
    reg [$clog2(NUM_SOURCES)-1:0] best_id;
    reg found;

    always @(*) begin
        best_prio  = 8'hFF;     // start with worst priority
        best_id    = 0;
        found      = 1'b0;

        for (i = 0; i < NUM_SOURCES; i = i + 1) begin
            if (active[i]) begin
                // compare masked priority values
                // lower masked value = higher priority
                if (!found || (prio_in[i] & prio_mask) < (best_prio & prio_mask)) begin
                    best_prio = prio_in[i];
                    best_id   = i[$clog2(NUM_SOURCES)-1:0];
                    found     = 1'b1;
                end
            end
        end

        winner_id    = best_id;
        winner_prio  = best_prio & prio_mask;
        irq_pending  = found;
    end

endmodule