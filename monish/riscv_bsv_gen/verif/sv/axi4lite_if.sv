// axi4lite_if.sv -- AXI4-Lite interface bundle (32-bit addr/data).
// Shared by the BFM driver, protocol checker, and DUT wrapper.
`ifndef AXI4LITE_IF_SV
`define AXI4LITE_IF_SV

interface axi4lite_if #(parameter AW = 32, parameter DW = 32) (input logic aclk, input logic aresetn);
  // Write address channel
  logic [AW-1:0] awaddr;
  logic [2:0]    awprot;
  logic          awvalid;
  logic          awready;
  // Write data channel
  logic [DW-1:0] wdata;
  logic [DW/8-1:0] wstrb;
  logic          wvalid;
  logic          wready;
  // Write response channel
  logic [1:0]    bresp;
  logic          bvalid;
  logic          bready;
  // Read address channel
  logic [AW-1:0] araddr;
  logic [2:0]    arprot;
  logic          arvalid;
  logic          arready;
  // Read data channel
  logic [DW-1:0] rdata;
  logic [1:0]    rresp;
  logic          rvalid;
  logic          rready;

  // Master (driver) modport
  modport master (
    input  aclk, aresetn,
    output awaddr, awprot, awvalid, wdata, wstrb, wvalid, bready,
           araddr, arprot, arvalid, rready,
    input  awready, wready, bresp, bvalid, arready, rdata, rresp, rvalid
  );
  // Slave (DUT memory) modport
  modport slave (
    input  aclk, aresetn,
    input  awaddr, awprot, awvalid, wdata, wstrb, wvalid, bready,
           araddr, arprot, arvalid, rready,
    output awready, wready, bresp, bvalid, arready, rdata, rresp, rvalid
  );
  // Monitor modport (all inputs) for the protocol checker.
  modport mon (
    input aclk, aresetn,
          awaddr, awprot, awvalid, awready, wdata, wstrb, wvalid, wready,
          bresp, bvalid, bready, araddr, arprot, arvalid, arready,
          rdata, rresp, rvalid, rready
  );
endinterface

`endif
