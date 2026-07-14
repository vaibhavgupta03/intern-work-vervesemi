`timescale 1ns/1ps
module fifo #(
    parameter WIDTH       = 16,
    parameter DEPTH       = 4096,
    parameter POINTER_BIT = 13
)(
    input  wire                   clk,
    input  wire                   rst,

    input  wire                   wr_en,
    input  wire [WIDTH-1:0]       din,
    input  wire                   rd_en,
    input  wire [2:0]             depth_sel,

    output wire [WIDTH-1:0]       dout,
    output wire                   full,
    output wire                   empty,
    output wire [POINTER_BIT-1:0] fill_level,
    output wire                   half_full,
    output reg                    overflow
);

    reg [WIDTH-1:0] memory [0:DEPTH-1];

    reg [POINTER_BIT-1:0] wr_ptr;
    reg [POINTER_BIT-1:0] rd_ptr;

    wire [11:0] wrap_mask;
    depth_decoder u_depth_decoder (
        .depth_sel (depth_sel),
        .wrap_mask (wrap_mask)
    );

    wire [11:0] wr_idx = wr_ptr[11:0] & wrap_mask;
    wire [11:0] rd_idx = rd_ptr[11:0] & wrap_mask;

    assign empty = (wr_ptr == rd_ptr);
    assign full  = (wr_idx == rd_idx) && (wr_ptr[12] != rd_ptr[12]);


    assign fill_level = full ? (wrap_mask + 1) :
                         (wr_idx >= rd_idx) ?
                         (wr_idx - rd_idx) :
                         (wrap_mask + 1 - rd_idx + wr_idx);

    assign half_full = (fill_level >= ((wrap_mask + 1) >> 1));

    assign dout = memory[rd_idx];

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wr_ptr   <= 0;
            overflow <= 0;
        end
        else if (wr_en) begin
            if (!full) begin
                memory[wr_idx] <= din;

                if (wr_idx == wrap_mask) begin
                    wr_ptr <= {~wr_ptr[12], 12'b0};
                end
                else begin
                    wr_ptr <= wr_ptr + 1;
                end

                overflow <= 0;
            end
            else begin
                overflow <= 1;
            end
        end
    end

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            rd_ptr <= 0;
        end
        else if (rd_en) begin
            if (!empty) begin
                if (rd_idx == wrap_mask) begin
                    rd_ptr <= {~rd_ptr[12], 12'b0};
                end
                else begin
                    rd_ptr <= rd_ptr + 1;
                end
            end
        end
    end

endmodule