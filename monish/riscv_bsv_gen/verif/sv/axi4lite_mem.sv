// axi4lite_mem.sv -- reference AXI4-Lite slave memory (behavioural).
// Mirrors src/mem/BramMem.bsv semantics: word-addressed, byte-strobed writes,
// 1-cycle read latency, OKAY responses. Supports $readmemh init via MEMFILE.
// Used to bring up and self-check the SV verification env; the bsc-generated
// mkBramMem Verilog can be substituted behind the same axi4lite_if.slave.
`ifndef AXI4LITE_MEM_SV
`define AXI4LITE_MEM_SV

module axi4lite_mem #(parameter WORDS = 16384, parameter string MEMFILE = "")
                     (axi4lite_if.slave bus);
  logic [31:0] mem [0:WORDS-1];

  initial if (MEMFILE != "") $readmemh(MEMFILE, mem);

  localparam int unsigned AWBITS = $clog2(WORDS);   // word-index width
  function automatic int unsigned widx(input logic [31:0] a);
    // byte addr -> word index, masked into the memory span.
    return (a >> 2) & ((1 << AWBITS) - 1);
  endfunction

  // Combinational-READY handshake (AXI4-Lite permits combinational READY). The
  // master (BFM) holds VALID+payload stable until it samples READY high, so
  // VALID&READY are coincident and stable -- clean for the SVA checker. Readys
  // are declared as continuous assigns on the interface signals.
  initial begin
    bus.bvalid = 0; bus.bresp = 2'b00;
    bus.rvalid = 0; bus.rresp = 2'b00; bus.rdata = 0;
  end

  // ---- Write path ----
  wire wr_fire = bus.awvalid && bus.wvalid && !bus.bvalid;
  assign bus.awready = wr_fire;
  assign bus.wready  = wr_fire;

  always @(posedge bus.aclk or negedge bus.aresetn) begin
    if (!bus.aresetn) bus.bvalid <= 0;
    else begin
      if (wr_fire) begin
        int unsigned i;
        logic [31:0] cur;
        i   = widx(bus.awaddr);           // separate decl from assign: the block
        cur = mem[i];                     // re-evaluates each activation (a decl
        for (int b=0;b<4;b++)             // initializer is static, runs once).
          if (bus.wstrb[b]) cur[b*8+:8]=bus.wdata[b*8+:8];
        mem[i] <= cur;
        bus.bvalid <= 1; bus.bresp <= 2'b00;
      end else if (bus.bvalid && bus.bready) bus.bvalid <= 0;
    end
  end

  // ---- Read path (1-cycle latency) ----
  wire rd_fire = bus.arvalid && !bus.rvalid;
  assign bus.arready = rd_fire;

  always @(posedge bus.aclk or negedge bus.aresetn) begin
    if (!bus.aresetn) bus.rvalid <= 0;
    else begin
      if (rd_fire) begin
        bus.rdata  <= mem[widx(bus.araddr)];
        bus.rresp  <= 2'b00; bus.rvalid <= 1;
      end else if (bus.rvalid && bus.rready) bus.rvalid <= 0;
    end
  end

  // Backdoor for the scoreboard init.
  task automatic poke(input int unsigned i, input logic [31:0] v); mem[i] = v; endtask
  function automatic logic [31:0] peek(input int unsigned i); return mem[i]; endfunction
endmodule

`endif
