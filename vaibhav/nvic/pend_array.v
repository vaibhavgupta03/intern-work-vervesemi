module pend_array #(
    parameter NUM_SOURCES = 128
)(
    input  wire                   clk,
    input  wire                   rst,

    // hardware sets these bits (interrupt lines from peripherals)
    input  wire [NUM_SOURCES-1:0] irq_in,

    // software writes these to clear pending bits (write 1 to clear)
    input  wire                   sw_wr_en,
    input  wire [NUM_SOURCES-1:0] sw_clear_mask,

    output reg  [NUM_SOURCES-1:0] pend_out
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pend_out <= 0;
        end
        else begin
            // hardware sets bits OR software clears them
            // set wins over clear if both happen same cycle
            pend_out <= (pend_out | irq_in) & ~(sw_wr_en ? sw_clear_mask : 0);
        end
    end

endmodule