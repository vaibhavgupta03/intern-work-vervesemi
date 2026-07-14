module enable_array #(
    parameter NUM_SOURCES = 128
)(
    input  wire                   clk,
    input  wire                   rst,

    // software write port
    input  wire                   wr_en,
    input  wire [NUM_SOURCES-1:0] wr_data,   // new enable bitmap

    output reg  [NUM_SOURCES-1:0] enable_out
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            enable_out <= 0;    // all disabled at reset — safe default
        end
        else if (wr_en) begin
            enable_out <= wr_data;
        end
    end

endmodule