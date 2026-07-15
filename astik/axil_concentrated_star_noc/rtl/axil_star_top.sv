`default_nettype none

module axil_star_top #(
  parameter int unsigned NM = 2,
  parameter int unsigned NC = 4,
  parameter int unsigned NP = 4
) (
  input  wire         clk,
  input  wire         rst_n,

  // ---- AXI4-Lite master-facing ports ----
  input  wire  [31:0] s_awaddr  [NM],
  input  wire  [2:0]  s_awprot  [NM],
  input  wire         s_awvalid [NM],
  output logic        s_awready [NM],
  input  wire  [31:0] s_wdata   [NM],
  input  wire  [3:0]  s_wstrb   [NM],
  input  wire         s_wvalid  [NM],
  output logic        s_wready  [NM],
  output logic [1:0]  s_bresp   [NM],
  output logic        s_bvalid  [NM],
  input  wire         s_bready  [NM],
  input  wire  [31:0] s_araddr  [NM],
  input  wire  [2:0]  s_arprot  [NM],
  input  wire         s_arvalid [NM],
  output logic        s_arready [NM],
  output logic [31:0] s_rdata   [NM],
  output logic [1:0]  s_rresp   [NM],
  output logic        s_rvalid  [NM],
  input  wire         s_rready  [NM]
);

  // ---- hub <-> concentrator wiring ----
  logic [9:0]  c_awaddr  [NC];
  logic [2:0]  c_awprot  [NC];
  logic        c_awvalid [NC];
  logic        c_awready [NC];
  logic [31:0] c_wdata   [NC];
  logic [3:0]  c_wstrb   [NC];
  logic        c_wvalid  [NC];
  logic        c_wready  [NC];
  logic [1:0]  c_bresp   [NC];
  logic        c_bvalid  [NC];
  logic        c_bready  [NC];
  logic [9:0]  c_araddr  [NC];
  logic [2:0]  c_arprot  [NC];
  logic        c_arvalid [NC];
  logic        c_arready [NC];
  logic [31:0] c_rdata   [NC];
  logic [1:0]  c_rresp   [NC];
  logic        c_rvalid  [NC];
  logic        c_rready  [NC];

  axil_hub #(.NM(NM), .NC(NC)) u_hub (
    .clk, .rst_n,
    .s_awaddr, .s_awprot, .s_awvalid, .s_awready,
    .s_wdata, .s_wstrb, .s_wvalid, .s_wready,
    .s_bresp, .s_bvalid, .s_bready,
    .s_araddr, .s_arprot, .s_arvalid, .s_arready,
    .s_rdata, .s_rresp, .s_rvalid, .s_rready,
    .m_awaddr(c_awaddr), .m_awprot(c_awprot), .m_awvalid(c_awvalid), .m_awready(c_awready),
    .m_wdata(c_wdata), .m_wstrb(c_wstrb), .m_wvalid(c_wvalid), .m_wready(c_wready),
    .m_bresp(c_bresp), .m_bvalid(c_bvalid), .m_bready(c_bready),
    .m_araddr(c_araddr), .m_arprot(c_arprot), .m_arvalid(c_arvalid), .m_arready(c_arready),
    .m_rdata(c_rdata), .m_rresp(c_rresp), .m_rvalid(c_rvalid), .m_rready(c_rready)
  );

  // ---- concentrators + peripherals ----
  for (genvar c = 0; c < int'(NC); c++) begin : g_conc
    logic [7:0]  p_awaddr  [NP];
    logic [2:0]  p_awprot  [NP];
    logic        p_awvalid [NP];
    logic        p_awready [NP];
    logic [31:0] p_wdata   [NP];
    logic [3:0]  p_wstrb   [NP];
    logic        p_wvalid  [NP];
    logic        p_wready  [NP];
    logic [1:0]  p_bresp   [NP];
    logic        p_bvalid  [NP];
    logic        p_bready  [NP];
    logic [7:0]  p_araddr  [NP];
    logic [2:0]  p_arprot  [NP];
    logic        p_arvalid [NP];
    logic        p_arready [NP];
    logic [31:0] p_rdata   [NP];
    logic [1:0]  p_rresp   [NP];
    logic        p_rvalid  [NP];
    logic        p_rready  [NP];

    axil_concentrator #(.NP(NP)) u_conc (
      .clk, .rst_n,
      .s_awaddr(c_awaddr[c]), .s_awprot(c_awprot[c]), .s_awvalid(c_awvalid[c]), .s_awready(c_awready[c]),
      .s_wdata(c_wdata[c]), .s_wstrb(c_wstrb[c]), .s_wvalid(c_wvalid[c]), .s_wready(c_wready[c]),
      .s_bresp(c_bresp[c]), .s_bvalid(c_bvalid[c]), .s_bready(c_bready[c]),
      .s_araddr(c_araddr[c]), .s_arprot(c_arprot[c]), .s_arvalid(c_arvalid[c]), .s_arready(c_arready[c]),
      .s_rdata(c_rdata[c]), .s_rresp(c_rresp[c]), .s_rvalid(c_rvalid[c]), .s_rready(c_rready[c]),
      .p_awaddr, .p_awprot, .p_awvalid, .p_awready,
      .p_wdata, .p_wstrb, .p_wvalid, .p_wready,
      .p_bresp, .p_bvalid, .p_bready,
      .p_araddr, .p_arprot, .p_arvalid, .p_arready,
      .p_rdata, .p_rresp, .p_rvalid, .p_rready
    );

    for (genvar p = 0; p < int'(NP); p++) begin : g_periph
      axil_periph_reg #(
        .ID_VAL(32'hA5A5_0000 | 32'(c) << 4 | 32'(p))
      ) u_periph (
        .clk, .rst_n,
        .s_awaddr(p_awaddr[p]), .s_awprot(p_awprot[p]), .s_awvalid(p_awvalid[p]), .s_awready(p_awready[p]),
        .s_wdata(p_wdata[p]), .s_wstrb(p_wstrb[p]), .s_wvalid(p_wvalid[p]), .s_wready(p_wready[p]),
        .s_bresp(p_bresp[p]), .s_bvalid(p_bvalid[p]), .s_bready(p_bready[p]),
        .s_araddr(p_araddr[p]), .s_arprot(p_arprot[p]), .s_arvalid(p_arvalid[p]), .s_arready(p_arready[p]),
        .s_rdata(p_rdata[p]), .s_rresp(p_rresp[p]), .s_rvalid(p_rvalid[p]), .s_rready(p_rready[p])
      );
    end
  end

  // ---- functional coverage observer ----
  axil_star_cov #(.NM(NM), .NC(NC), .NP(NP)) u_cov (
    .clk, .rst_n,
    .s_awaddr, .s_awvalid, .s_awready,
    .s_wstrb, .s_wvalid, .s_wready,
    .s_bresp, .s_bvalid, .s_bready,
    .s_araddr, .s_arvalid, .s_arready,
    .s_rresp, .s_rvalid, .s_rready
  );

endmodule

`default_nettype wire
