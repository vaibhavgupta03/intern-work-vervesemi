`default_nettype none

module axil_star_cov #(
  parameter int unsigned NM = 2,
  parameter int unsigned NC = 4,
  parameter int unsigned NP = 4,
  localparam int unsigned NS = NC * NP
) (
  input wire        clk,
  input wire        rst_n,
  input wire [31:0] s_awaddr  [NM],
  input wire        s_awvalid [NM],
  input wire        s_awready [NM],
  input wire [3:0]  s_wstrb   [NM],
  input wire        s_wvalid  [NM],
  input wire        s_wready  [NM],
  input wire [1:0]  s_bresp   [NM],
  input wire        s_bvalid  [NM],
  input wire        s_bready  [NM],
  input wire [31:0] s_araddr  [NM],
  input wire        s_arvalid [NM],
  input wire        s_arready [NM],
  input wire [1:0]  s_rresp   [NM],
  input wire        s_rvalid  [NM],
  input wire        s_rready  [NM]
);

  localparam logic [1:0] OKAY   = 2'b00;
  localparam logic [1:0] SLVERR = 2'b10;
  localparam logic [1:0] DECERR = 2'b11;

  // helper nets (packed vectors, filled from the unpacked ports)
  logic [NM-1:0] aw_hs, w_hs, b_hs, ar_hs, r_hs, aw_inr, ar_inr;
  logic [NM-1:0] awv, arv, wv, bv, brdy, rv, rrdy;
  logic [3:0]    aw_slv [NM];
  logic [3:0]    ar_slv [NM];
  logic [1:0]    aw_conc [NM];
  logic [1:0]    ar_conc [NM];
  logic [1:0]    bresp_i [NM];
  logic [1:0]    rresp_i [NM];
  logic [3:0]    wstrb_i [NM];

  always_comb begin
    for (int m = 0; m < NM; m++) begin
      awv[m]     = s_awvalid[m];
      arv[m]     = s_arvalid[m];
      wv[m]      = s_wvalid[m];
      bv[m]      = s_bvalid[m];
      brdy[m]    = s_bready[m];
      rv[m]      = s_rvalid[m];
      rrdy[m]    = s_rready[m];
      aw_hs[m]   = s_awvalid[m] & s_awready[m];
      w_hs[m]    = s_wvalid[m]  & s_wready[m];
      b_hs[m]    = s_bvalid[m]  & s_bready[m];
      ar_hs[m]   = s_arvalid[m] & s_arready[m];
      r_hs[m]    = s_rvalid[m]  & s_rready[m];
      aw_inr[m]  = (s_awaddr[m][31:12] == 20'd0);
      ar_inr[m]  = (s_araddr[m][31:12] == 20'd0);
      aw_slv[m]  = s_awaddr[m][11:8];
      ar_slv[m]  = s_araddr[m][11:8];
      aw_conc[m] = s_awaddr[m][11:10];
      ar_conc[m] = s_araddr[m][11:10];
      bresp_i[m] = s_bresp[m];
      rresp_i[m] = s_rresp[m];
      wstrb_i[m] = s_wstrb[m];
    end
  end

  // ---- CP1/CP2: full route cross  (NM x NS x {wr, rd}) ----
  for (genvar m = 0; m < int'(NM); m++) begin : g_route_m
    for (genvar s = 0; s < int'(NS); s++) begin : g_route_s
      wire ev_wr = rst_n & aw_hs[m] & aw_inr[m] & (aw_slv[m] == 4'(s));
      wire ev_rd = rst_n & ar_hs[m] & ar_inr[m] & (ar_slv[m] == 4'(s));
      cp_route_wr: cover property (@(posedge clk) ev_wr);
      cp_route_rd: cover property (@(posedge clk) ev_rd);
    end
  end

  // ---- CP3/CP4: response types per master ----
  for (genvar m = 0; m < int'(NM); m++) begin : g_resp
    wire ev_b_okay   = rst_n & b_hs[m] & (bresp_i[m] == OKAY);
    wire ev_b_slverr = rst_n & b_hs[m] & (bresp_i[m] == SLVERR);
    wire ev_b_decerr = rst_n & b_hs[m] & (bresp_i[m] == DECERR);
    wire ev_r_okay   = rst_n & r_hs[m] & (rresp_i[m] == OKAY);
    wire ev_r_slverr = rst_n & r_hs[m] & (rresp_i[m] == SLVERR);
    wire ev_r_decerr = rst_n & r_hs[m] & (rresp_i[m] == DECERR);
    cp_b_okay:   cover property (@(posedge clk) ev_b_okay);
    cp_b_slverr: cover property (@(posedge clk) ev_b_slverr);
    cp_b_decerr: cover property (@(posedge clk) ev_b_decerr);
    cp_r_okay:   cover property (@(posedge clk) ev_r_okay);
    cp_r_slverr: cover property (@(posedge clk) ev_r_slverr);
    cp_r_decerr: cover property (@(posedge clk) ev_r_decerr);
  end

  // ---- CP5: same-target contention (arbitration exercised) ----
  wire ev_contend_wr = rst_n & awv[0] & awv[1] & aw_inr[0] & aw_inr[1] &
                       (aw_conc[0] == aw_conc[1]);
  wire ev_contend_rd = rst_n & arv[0] & arv[1] & ar_inr[0] & ar_inr[1] &
                       (ar_conc[0] == ar_conc[1]);
  cp_contend_wr: cover property (@(posedge clk) ev_contend_wr);
  cp_contend_rd: cover property (@(posedge clk) ev_contend_rd);

  // ---- CP6: parallel traffic through independent star ports ----
  wire ev_par_wr_wr = rst_n & aw_hs[0] & aw_hs[1];
  wire ev_par_rd_rd = rst_n & ar_hs[0] & ar_hs[1];
  cp_par_wr_wr: cover property (@(posedge clk) ev_par_wr_wr);
  cp_par_rd_rd: cover property (@(posedge clk) ev_par_rd_rd);
  for (genvar m = 0; m < int'(NM); m++) begin : g_par
    wire ev_par_same = rst_n & aw_hs[m] & ar_hs[m];
    cp_par_wr_rd_same: cover property (@(posedge clk) ev_par_same);
  end
  wire ev_par_wr_rd_x = rst_n & aw_hs[0] & ar_hs[1];
  wire ev_par_rd_wr_x = rst_n & ar_hs[0] & aw_hs[1];
  cp_par_wr_rd_cross: cover property (@(posedge clk) ev_par_wr_rd_x);
  cp_par_rd_wr_cross: cover property (@(posedge clk) ev_par_rd_wr_x);

  // ---- CP7: write-strobe bins (any master) ----
  logic       any_w_hs;
  logic [3:0] w_hs_strb;
  always_comb begin
    any_w_hs  = 1'b0;
    w_hs_strb = 4'h0;
    for (int m = 0; m < NM; m++) begin
      if (w_hs[m]) begin
        any_w_hs  = 1'b1;
        w_hs_strb = wstrb_i[m];
      end
    end
  end
  wire ev_strb_0 = rst_n & any_w_hs & (w_hs_strb == 4'h0);
  wire ev_strb_f = rst_n & any_w_hs & (w_hs_strb == 4'hF);
  cp_strb_0: cover property (@(posedge clk) ev_strb_0);
  cp_strb_f: cover property (@(posedge clk) ev_strb_f);
  for (genvar b = 0; b < 4; b++) begin : g_strb
    wire ev_strb_1h = rst_n & any_w_hs & (w_hs_strb == (4'h1 << b));
    cp_strb_1h: cover property (@(posedge clk) ev_strb_1h);
  end
  wire ev_strb_other = rst_n & any_w_hs &
                       (w_hs_strb != 4'h0) & (w_hs_strb != 4'hF) &
                       (w_hs_strb != 4'h1) & (w_hs_strb != 4'h2) &
                       (w_hs_strb != 4'h4) & (w_hs_strb != 4'h8);
  cp_strb_other: cover property (@(posedge clk) ev_strb_other);

  // ---- CP8: channel ordering ----
  for (genvar m = 0; m < int'(NM); m++) begin : g_order
    wire ev_w_no_aw   = rst_n & wv[m] & ~awv[m];
    wire ev_aw_w_same = rst_n & aw_hs[m] & w_hs[m];
    cp_w_without_aw:    cover property (@(posedge clk) ev_w_no_aw);
    cp_aw_w_same_cycle: cover property (@(posedge clk) ev_aw_w_same);
  end

  // ---- CP9: response backpressure ----
  for (genvar m = 0; m < int'(NM); m++) begin : g_bp
    wire ev_b_stall = rst_n & bv[m] & ~brdy[m];
    wire ev_r_stall = rst_n & rv[m] & ~rrdy[m];
    cp_b_stall: cover property (@(posedge clk) ev_b_stall);
    cp_r_stall: cover property (@(posedge clk) ev_r_stall);
  end

  // ---- CP10: back-to-back (new AW/AR presented the cycle after B/R) ----
  logic [NM-1:0] b_hs_q, r_hs_q;
  always_ff @(posedge clk) begin
    for (int m = 0; m < NM; m++) begin
      b_hs_q[m] <= rst_n & b_hs[m];
      r_hs_q[m] <= rst_n & r_hs[m];
    end
  end
  for (genvar m = 0; m < int'(NM); m++) begin : g_b2b
    wire ev_b2b_wr = rst_n & b_hs_q[m] & awv[m];
    wire ev_b2b_rd = rst_n & r_hs_q[m] & arv[m];
    cp_b2b_wr: cover property (@(posedge clk) ev_b2b_wr);
    cp_b2b_rd: cover property (@(posedge clk) ev_b2b_rd);
  end

endmodule

`default_nettype wire
