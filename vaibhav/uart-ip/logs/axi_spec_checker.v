//      // verilator_coverage annotation
        // axi_spec_checker.v
        // Verifies AXI4-Lite handshake rules per ARM IHI0022E spec
        
        module axi_spec_checker (
 748703     input wire clk,
 000003     input wire rst,
        
            // write address channel
~000357     input wire [31:0] awaddr,
 000734     input wire        awvalid,
 000734     input wire        awready,
        
            // write data channel
~000198     input wire [31:0] wdata,
 000001     input wire [3:0]  wstrb,
 000734     input wire        wvalid,
 000734     input wire        wready,
        
            // write response channel
%000000     input wire [1:0]  bresp,
 000734     input wire        bvalid,
 000376     input wire        bready,
        
            // read address channel
~000019     input wire [31:0] araddr,
 000040     input wire        arvalid,
 000040     input wire        arready,
        
            // read data channel
~000012     input wire [31:0] rdata,
%000000     input wire [1:0]  rresp,
 000040     input wire        rvalid,
 000036     input wire        rready,
        
            // spec results
 000002     output reg spec_awvalid_stable_ok,       // AWVALID must not drop until AWREADY
 000002     output reg spec_wvalid_stable_ok,        // WVALID must not drop until WREADY
%000000     output reg spec_arvalid_stable_ok,       // ARVALID must not drop until ARREADY
 000734     output reg spec_bresp_ok_ok,             // BRESP must be 2'b00 (OKAY)
 000038     output reg spec_rresp_ok_ok,             // RRESP must be 2'b00 (OKAY)
 000038     output reg spec_no_x_on_rdata_ok,        // RDATA must not be X when RVALID
        
 000002     output reg spec_awvalid_stable_FAIL,
%000000     output reg spec_wvalid_stable_FAIL,
%000000     output reg spec_arvalid_stable_FAIL,
%000000     output reg spec_bresp_FAIL,
%000000     output reg spec_rresp_FAIL,
%000000     output reg spec_x_on_rdata_FAIL
        );
        
 000734     reg awvalid_prev, wvalid_prev, arvalid_prev;
        
 374351     always @(posedge clk or posedge rst) begin
 374339         if (rst) begin
 000012             awvalid_prev <= 0; wvalid_prev <= 0; arvalid_prev <= 0;
 000012             spec_awvalid_stable_ok   <= 0; spec_awvalid_stable_FAIL <= 0;
 000012             spec_wvalid_stable_ok    <= 0; spec_wvalid_stable_FAIL  <= 0;
 000012             spec_arvalid_stable_ok   <= 0; spec_arvalid_stable_FAIL <= 0;
 000012             spec_bresp_ok_ok         <= 0; spec_bresp_FAIL          <= 0;
 000012             spec_rresp_ok_ok         <= 0; spec_rresp_FAIL          <= 0;
 000012             spec_no_x_on_rdata_ok    <= 0; spec_x_on_rdata_FAIL     <= 0;
                end
 374339         else begin
 374339             spec_awvalid_stable_ok   <= 0; spec_awvalid_stable_FAIL <= 0;
 374339             spec_wvalid_stable_ok    <= 0; spec_wvalid_stable_FAIL  <= 0;
 374339             spec_arvalid_stable_ok   <= 0; spec_arvalid_stable_FAIL <= 0;
 374339             spec_bresp_ok_ok         <= 0; spec_bresp_FAIL          <= 0;
 374339             spec_rresp_ok_ok         <= 0; spec_rresp_FAIL          <= 0;
 374339             spec_no_x_on_rdata_ok    <= 0; spec_x_on_rdata_FAIL     <= 0;
        
                    // AXI RULE: once AWVALID is asserted, it must NOT deassert
                    // until AWREADY is seen. Dropping AWVALID early = violation.
 000001             if (awvalid_prev && !awvalid && !awready) begin
 000001                 spec_awvalid_stable_FAIL <= 1'b1;
                    end
 374337             else if (awvalid && awready) begin
 000001                 spec_awvalid_stable_ok <= 1'b1;  // clean handshake
                    end
        
                    // same rule for WVALID
%000000             if (wvalid_prev && !wvalid && !wready) begin
%000000                 spec_wvalid_stable_FAIL <= 1'b1;
                    end
 374338             else if (wvalid && wready) begin
 000001                 spec_wvalid_stable_ok <= 1'b1;
                    end
        
                    // same rule for ARVALID
%000000             if (arvalid_prev && !arvalid && !arready) begin
%000000                 spec_arvalid_stable_FAIL <= 1'b1;
                    end
~374339             else if (arvalid && arready) begin
%000000                 spec_arvalid_stable_ok <= 1'b1;
                    end
        
                    // AXI RULE: BRESP must be OKAY (2'b00) for normal transactions
 373573             if (bvalid) begin
~373573                 if (bresp == 2'b00)
 373573                     spec_bresp_ok_ok <= 1'b1;
                        else
%000000                     spec_bresp_FAIL  <= 1'b1;
                    end
        
                    // AXI RULE: RRESP must be OKAY
 374270             if (rvalid) begin
~374270                 if (rresp == 2'b00)
 374270                     spec_rresp_ok_ok <= 1'b1;
                        else
%000000                     spec_rresp_FAIL  <= 1'b1;
                    end
        
                    // AXI RULE: RDATA must not be X when RVALID is asserted
 374270             if (rvalid) begin
~374270                 if (^rdata === 1'bx) begin
%000000                     spec_x_on_rdata_FAIL <= 1'b1;
                        end
 374270                 else begin
 374270                     spec_no_x_on_rdata_ok <= 1'b1;
                        end
                    end
        
 374339             awvalid_prev <= awvalid;
 374339             wvalid_prev  <= wvalid;
 374339             arvalid_prev <= arvalid;
                end
            end
        
        endmodule
