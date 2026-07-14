// axi_spec_checker.v
// Verifies AXI4-Lite handshake rules per ARM IHI0022E spec

module axi_spec_checker (
    input wire clk,
    input wire rst,

    // write address channel
    input wire [31:0] awaddr,
    input wire        awvalid,
    input wire        awready,

    // write data channel
    input wire [31:0] wdata,
    input wire [3:0]  wstrb,
    input wire        wvalid,
    input wire        wready,

    // write response channel
    input wire [1:0]  bresp,
    input wire        bvalid,
    input wire        bready,

    // read address channel
    input wire [31:0] araddr,
    input wire        arvalid,
    input wire        arready,

    // read data channel
    input wire [31:0] rdata,
    input wire [1:0]  rresp,
    input wire        rvalid,
    input wire        rready,

    // spec results
    output reg spec_awvalid_stable_ok,       // AWVALID must not drop until AWREADY
    output reg spec_wvalid_stable_ok,        // WVALID must not drop until WREADY
    output reg spec_arvalid_stable_ok,       // ARVALID must not drop until ARREADY
    output reg spec_bresp_ok_ok,             // BRESP must be 2'b00 (OKAY)
    output reg spec_rresp_ok_ok,             // RRESP must be 2'b00 (OKAY)
    output reg spec_no_x_on_rdata_ok,        // RDATA must not be X when RVALID

    output reg spec_awvalid_stable_FAIL,
    output reg spec_wvalid_stable_FAIL,
    output reg spec_arvalid_stable_FAIL,
    output reg spec_bresp_FAIL,
    output reg spec_rresp_FAIL,
    output reg spec_x_on_rdata_FAIL
);

    reg awvalid_prev, wvalid_prev, arvalid_prev;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            awvalid_prev <= 0; wvalid_prev <= 0; arvalid_prev <= 0;
            spec_awvalid_stable_ok   <= 0; spec_awvalid_stable_FAIL <= 0;
            spec_wvalid_stable_ok    <= 0; spec_wvalid_stable_FAIL  <= 0;
            spec_arvalid_stable_ok   <= 0; spec_arvalid_stable_FAIL <= 0;
            spec_bresp_ok_ok         <= 0; spec_bresp_FAIL          <= 0;
            spec_rresp_ok_ok         <= 0; spec_rresp_FAIL          <= 0;
            spec_no_x_on_rdata_ok    <= 0; spec_x_on_rdata_FAIL     <= 0;
        end
        else begin
            spec_awvalid_stable_ok   <= 0; spec_awvalid_stable_FAIL <= 0;
            spec_wvalid_stable_ok    <= 0; spec_wvalid_stable_FAIL  <= 0;
            spec_arvalid_stable_ok   <= 0; spec_arvalid_stable_FAIL <= 0;
            spec_bresp_ok_ok         <= 0; spec_bresp_FAIL          <= 0;
            spec_rresp_ok_ok         <= 0; spec_rresp_FAIL          <= 0;
            spec_no_x_on_rdata_ok    <= 0; spec_x_on_rdata_FAIL     <= 0;

            // AXI RULE: once AWVALID is asserted, it must NOT deassert
            // until AWREADY is seen. Dropping AWVALID early = violation.
            if (awvalid_prev && !awvalid && !awready) begin
                spec_awvalid_stable_FAIL <= 1'b1;
            end
            else if (awvalid && awready) begin
                spec_awvalid_stable_ok <= 1'b1;  // clean handshake
            end

            // same rule for WVALID
            if (wvalid_prev && !wvalid && !wready) begin
                spec_wvalid_stable_FAIL <= 1'b1;
            end
            else if (wvalid && wready) begin
                spec_wvalid_stable_ok <= 1'b1;
            end

            // same rule for ARVALID
            if (arvalid_prev && !arvalid && !arready) begin
                spec_arvalid_stable_FAIL <= 1'b1;
            end
            else if (arvalid && arready) begin
                spec_arvalid_stable_ok <= 1'b1;
            end

            // AXI RULE: BRESP must be OKAY (2'b00) for normal transactions
            if (bvalid) begin
                if (bresp == 2'b00)
                    spec_bresp_ok_ok <= 1'b1;
                else
                    spec_bresp_FAIL  <= 1'b1;
            end

            // AXI RULE: RRESP must be OKAY
            if (rvalid) begin
                if (rresp == 2'b00)
                    spec_rresp_ok_ok <= 1'b1;
                else
                    spec_rresp_FAIL  <= 1'b1;
            end

            // AXI RULE: RDATA must not be X when RVALID is asserted
            if (rvalid) begin
                if (^rdata === 1'bx) begin
                    spec_x_on_rdata_FAIL <= 1'b1;
                end
                else begin
                    spec_no_x_on_rdata_ok <= 1'b1;
                end
            end

            awvalid_prev <= awvalid;
            wvalid_prev  <= wvalid;
            arvalid_prev <= arvalid;
        end
    end

endmodule