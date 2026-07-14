module prio_array #(
    parameter NUM_SOURCES  = 128,
    parameter PRIO_WIDTH   = 8
)(
    input  wire                              clk,
    input  wire                              rst,

    // software write port (one IRQ's priority at a time)
    input  wire                              wr_en,
    input  wire [$clog2(NUM_SOURCES)-1:0]    wr_idx,     // which IRQ
    input  wire [PRIO_WIDTH-1:0]             wr_data,    // priority value
    input  wire [PRIO_WIDTH-1:0]             prio_mask,  // from prio_width_decoder

    // read port (used by priority encoder — reads ALL at once)
    output reg  [PRIO_WIDTH-1:0]  prio_out [0:NUM_SOURCES-1]
);

    integer i;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < NUM_SOURCES; i = i + 1)
                prio_out[i] <= 8'hFF;   // all reset to lowest priority (highest value)
        end
        else if (wr_en) begin
            // mask off unused priority bits before storing
            prio_out[wr_idx] <= wr_data & prio_mask;
        end
    end

endmodule