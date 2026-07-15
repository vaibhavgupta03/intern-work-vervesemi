`default_nettype none

module axil_concentrator #(
  parameter int unsigned NP = 4,
  localparam int unsigned SW = (NP > 1) ? $clog2(NP) : 1
) (
  input  wire         clk,
  input  wire         rst_n,

  // ---- slave port (from hub), 10-bit local address ----
  input  wire  [9:0]  s_awaddr,
  input  wire  [2:0]  s_awprot,
  input  wire         s_awvalid,
  output logic        s_awready,
  input  wire  [31:0] s_wdata,
  input  wire  [3:0]  s_wstrb,
  input  wire         s_wvalid,
  output logic        s_wready,
  output logic [1:0]  s_bresp,
  output logic        s_bvalid,
  input  wire         s_bready,
  input  wire  [9:0]  s_araddr,
  input  wire  [2:0]  s_arprot,
  input  wire         s_arvalid,
  output logic        s_arready,
  output logic [31:0] s_rdata,
  output logic [1:0]  s_rresp,
  output logic        s_rvalid,
  input  wire         s_rready,

  // ---- master ports (to NP peripherals) ----
  output logic [7:0]  p_awaddr  [NP],
  output logic [2:0]  p_awprot  [NP],
  output logic        p_awvalid [NP],
  input  wire         p_awready [NP],
  output logic [31:0] p_wdata   [NP],
  output logic [3:0]  p_wstrb   [NP],
  output logic        p_wvalid  [NP],
  input  wire         p_wready  [NP],
  input  wire  [1:0]  p_bresp   [NP],
  input  wire         p_bvalid  [NP],
  output logic        p_bready  [NP],
  output logic [7:0]  p_araddr  [NP],
  output logic [2:0]  p_arprot  [NP],
  output logic        p_arvalid [NP],
  input  wire         p_arready [NP],
  input  wire  [31:0] p_rdata   [NP],
  input  wire  [1:0]  p_rresp   [NP],
  input  wire         p_rvalid  [NP],
  output logic        p_rready  [NP]
);

  // -------------------------- write path ------------------------------------
  wire [SW-1:0] aw_dec = s_awaddr[9:8];

  logic [SW-1:0] wsel_q;              
  wire  [SW-1:0] wsel = s_awvalid ? aw_dec : wsel_q;

  wire aw_hs = s_awvalid & s_awready;

  always_ff @(posedge clk) begin
    if (!rst_n)      wsel_q <= '0;
    else if (aw_hs)  wsel_q <= aw_dec;
  end

  always_comb begin
    for (int p = 0; p < NP; p++) begin
      p_awaddr[p]  = s_awaddr[7:0];
      p_awprot[p]  = s_awprot;
      p_awvalid[p] = s_awvalid & (aw_dec == SW'(p));
      p_wdata[p]   = s_wdata;
      p_wstrb[p]   = s_wstrb;
      p_wvalid[p]  = s_wvalid & (wsel == SW'(p));
      p_bready[p]  = s_bready & (wsel_q == SW'(p));
    end
    s_awready = p_awready[aw_dec] & s_awvalid;
    s_wready  = p_wready[wsel]    & s_wvalid;
    s_bvalid  = p_bvalid[wsel_q];
    s_bresp   = p_bresp[wsel_q];
  end

  // -------------------------- read path -------------------------------------
  wire [SW-1:0] ar_dec = s_araddr[9:8];

  logic [SW-1:0] rsel_q;             
  wire ar_hs = s_arvalid & s_arready;

  always_ff @(posedge clk) begin
    if (!rst_n)      rsel_q <= '0;
    else if (ar_hs)  rsel_q <= ar_dec;
  end

  always_comb begin
    for (int p = 0; p < NP; p++) begin
      p_araddr[p]  = s_araddr[7:0];
      p_arprot[p]  = s_arprot;
      p_arvalid[p] = s_arvalid & (ar_dec == SW'(p));
      p_rready[p]  = s_rready & (rsel_q == SW'(p));
    end
    s_arready = p_arready[ar_dec] & s_arvalid;
    s_rvalid  = p_rvalid[rsel_q];
    s_rdata   = p_rdata[rsel_q];
    s_rresp   = p_rresp[rsel_q];
  end

endmodule

`default_nettype wire
