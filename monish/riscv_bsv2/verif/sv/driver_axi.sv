// driver_axi.sv -- AXI4-Lite master BFM. Blocking read/write tasks that drive
// the interface with correct handshakes. Used by the testbench to inject
// transactions and read back results for the scoreboard.
`ifndef DRIVER_AXI_SV
`define DRIVER_AXI_SV

module driver_axi (axi4lite_if.master bus);

  // Initialize outputs to idle.
  initial begin
    bus.awvalid = 0; bus.awaddr = 0; bus.awprot = 0;
    bus.wvalid  = 0; bus.wdata  = 0; bus.wstrb  = 0;
    bus.bready  = 0;
    bus.arvalid = 0; bus.araddr = 0; bus.arprot = 0;
    bus.rready  = 0;
  end

  // Single-beat write. Drive AW+W (blocking, right after an edge so the slave
  // samples the intended value), hold stable until READY is observed, then
  // deassert. Payload never changes while VALID is high and not accepted.
  task automatic write(input logic [31:0] addr, input logic [31:0] data,
                       input logic [3:0]  strb = 4'hF);
    @(posedge bus.aclk);
    bus.awaddr = addr; bus.awprot = 0; bus.awvalid = 1;
    bus.wdata  = data; bus.wstrb  = strb; bus.wvalid = 1;
    bus.bready = 1;
    // Hold AW/W stable until the write response (BVALID) confirms acceptance.
    // The slave accepts AW+W and asserts BVALID on the same edge, so waiting on
    // BVALID is the reliable completion signal.
    while (!bus.bvalid) @(posedge bus.aclk);
    bus.awvalid = 0; bus.wvalid = 0;
    @(posedge bus.aclk);          // complete the B handshake
    bus.bready = 0;
  endtask

  // Single-beat read.
  task automatic read(input logic [31:0] addr, output logic [31:0] data);
    @(posedge bus.aclk);
    bus.araddr = addr; bus.arprot = 0; bus.arvalid = 1; bus.rready = 1;
    while (!bus.rvalid) @(posedge bus.aclk);
    bus.arvalid = 0;
    data = bus.rdata;
    @(posedge bus.aclk); bus.rready = 0;
  endtask
endmodule

`endif
