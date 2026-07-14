`timescale 1ns/1ps
module generic_mux #(
    parameter SEL_WIDTH  = 2,   
    parameter DATA_WIDTH = 16, 
    parameter NUM_INPUTS = 4 
)(
    input  wire [SEL_WIDTH-1:0]               sel,
    input  wire [(NUM_INPUTS*DATA_WIDTH)-1:0] data_in,
    output reg  [DATA_WIDTH-1:0]              data_out
);

    always @(*) begin
        data_out = data_in[(sel*DATA_WIDTH) +: DATA_WIDTH];
    end

endmodule