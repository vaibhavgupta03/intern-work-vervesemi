`default_nettype none

module axil_hub #(
  parameter int unsigned NM = 2,
  parameter int unsigned NC = 4,
  localparam int unsigned MW = (NM > 1) ? $clog2(NM) : 1,
  localparam int unsigned TW = (NC > 1) ? $clog2(NC) : 1
) (
  input  wire         clk,
  input  wire         rst_n,

  // ---- slave ports (one per master) ----
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
  input  wire         s_rready  [NM],

  // ---- master ports (one per concentrator) ----
  output logic [9:0]  m_awaddr  [NC],
  output logic [2:0]  m_awprot  [NC],
  output logic        m_awvalid [NC],
  input  wire         m_awready [NC],
  output logic [31:0] m_wdata   [NC],
  output logic [3:0]  m_wstrb   [NC],
  output logic        m_wvalid  [NC],
  input  wire         m_wready  [NC],
  input  wire  [1:0]  m_bresp   [NC],
  input  wire         m_bvalid  [NC],
  output logic        m_bready  [NC],
  output logic [9:0]  m_araddr  [NC],
  output logic [2:0]  m_arprot  [NC],
  output logic        m_arvalid [NC],
  input  wire         m_arready [NC],
  input  wire  [31:0] m_rdata   [NC],
  input  wire  [1:0]  m_rresp   [NC],
  input  wire         m_rvalid  [NC],
  output logic        m_rready  [NC]
);

  localparam logic [1:0] RESP_DECERR = 2'b11;

  // Round-robin pick: first requester after `last` (crossbar single stage)

  function automatic logic [MW-1:0] rr_pick(input logic [NM-1:0] req,
                                            input logic [MW-1:0] last);
    logic found;
    
    int unsigned idx;   
    
    rr_pick = '0;
    found   = 1'b0;
    for (int unsigned i = 1; i <= NM; i++) begin
      idx = (32'(last) + i) % NM;
      if (!found && req[idx[MW-1:0]]) begin
        rr_pick = idx[MW-1:0];
        found   = 1'b1;
      end
    end
  endfunction

  
  // Per-master decode
  
  logic          aw_inr [NM];   
  logic [TW-1:0] aw_tgt [NM];
  logic          ar_inr [NM];
  logic [TW-1:0] ar_tgt [NM];

  always_comb begin
    for (int m = 0; m < NM; m++) begin
      aw_inr[m] = (s_awaddr[m][31:12] == 20'd0);
      aw_tgt[m] = s_awaddr[m][11:10];
      ar_inr[m] = (s_araddr[m][31:12] == 20'd0);
      ar_tgt[m] = s_araddr[m][11:10];
    end
  end

  
  // WRITE path: per-target request/grant matrix, transaction-locked
  
  logic [NM-1:0] wreq  [NC];    // request matrix
  logic [NM-1:0] wgnt  [NC];    // grant matrix (comb, includes lock)
  logic          wlock [NC];
  logic [MW-1:0] wown  [NC];    // locked owner
  logic [MW-1:0] wlast [NC];    // RR pointer
  logic [MW-1:0] wsel  [NC];    // effective owner for payload muxes

  always_comb begin
    for (int t = 0; t < NC; t++) begin
      for (int m = 0; m < NM; m++)
        wreq[t][m] = s_awvalid[m] & aw_inr[m] & (aw_tgt[m] == TW'(t));

      wsel[t] = wlock[t] ? wown[t] : rr_pick(wreq[t], wlast[t]);

      for (int m = 0; m < NM; m++)
        wgnt[t][m] = wlock[t] ? (wown[t] == MW'(m))
                              : (wreq[t][m] & (wsel[t] == MW'(m)));
    end
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      for (int t = 0; t < NC; t++) begin
        wlock[t] <= 1'b0;
        wown[t]  <= '0;
        wlast[t] <= '0;
      end
    end else begin
      for (int t = 0; t < NC; t++) begin
        if (!wlock[t] && (wreq[t] != '0)) begin
          wlock[t] <= 1'b1;
          wown[t]  <= wsel[t];
        end
        if (wlock[t] && m_bvalid[t] && m_bready[t]) begin   // txn complete
          wlock[t] <= 1'b0;
          wlast[t] <= wown[t];
        end
      end
    end
  end

  // Forward channels toward concentrators
  always_comb begin
    for (int t = 0; t < NC; t++) begin
      m_awaddr[t]  = s_awaddr[wsel[t]][9:0];
      m_awprot[t]  = s_awprot[wsel[t]];
      m_awvalid[t] = |(wgnt[t] & wreq[t]);
      m_wdata[t]   = s_wdata[wsel[t]];
      m_wstrb[t]   = s_wstrb[wsel[t]];
      m_wvalid[t]  = |(wgnt[t]) & s_wvalid[wsel[t]] & (wlock[t] | (wreq[t] != '0));
      m_bready[t]  = wlock[t] & s_bready[wown[t]];
    end
  end

  
  // READ path (mirrors the write path)
  
  logic [NM-1:0] rreq  [NC];
  logic [NM-1:0] rgnt  [NC];
  logic          rlock [NC];
  logic [MW-1:0] rown  [NC];
  logic [MW-1:0] rlast [NC];
  logic [MW-1:0] rsel  [NC];

  always_comb begin
    for (int t = 0; t < NC; t++) begin
      for (int m = 0; m < NM; m++)
        rreq[t][m] = s_arvalid[m] & ar_inr[m] & (ar_tgt[m] == TW'(t));

      rsel[t] = rlock[t] ? rown[t] : rr_pick(rreq[t], rlast[t]);

      for (int m = 0; m < NM; m++)
        rgnt[t][m] = rlock[t] ? (rown[t] == MW'(m))
                              : (rreq[t][m] & (rsel[t] == MW'(m)));
    end
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      for (int t = 0; t < NC; t++) begin
        rlock[t] <= 1'b0;
        rown[t]  <= '0;
        rlast[t] <= '0;
      end
    end else begin
      for (int t = 0; t < NC; t++) begin
        if (!rlock[t] && (rreq[t] != '0)) begin
          rlock[t] <= 1'b1;
          rown[t]  <= rsel[t];
        end
        if (rlock[t] && m_rvalid[t] && m_rready[t]) begin
          rlock[t] <= 1'b0;
          rlast[t] <= rown[t];
        end
      end
    end
  end

  always_comb begin
    for (int t = 0; t < NC; t++) begin
      m_araddr[t]  = s_araddr[rsel[t]][9:0];
      m_arprot[t]  = s_arprot[rsel[t]];
      m_arvalid[t] = |(rgnt[t] & rreq[t]);
      m_rready[t]  = rlock[t] & s_rready[rown[t]];
    end
  end

  
  // Per-master DECERR responders (out-of-range addresses never enter fabric)
  
  typedef enum logic [1:0] {WE_IDLE, WE_WDATA, WE_RESP} we_state_e;
  we_state_e we_st [NM];

  logic err_awready [NM];
  logic err_wready  [NM];
  logic err_bvalid  [NM];

  typedef enum logic {RE_IDLE, RE_RESP} re_state_e;
  re_state_e re_st [NM];

  logic err_arready [NM];
  logic err_rvalid  [NM];

  always_comb begin
    for (int m = 0; m < NM; m++) begin
      err_awready[m] = (we_st[m] == WE_IDLE) & s_awvalid[m] & ~aw_inr[m];
      err_wready[m]  = ((we_st[m] == WE_IDLE) & s_awvalid[m] & ~aw_inr[m])
                     | (we_st[m] == WE_WDATA);
      err_bvalid[m]  = (we_st[m] == WE_RESP);
      err_arready[m] = (re_st[m] == RE_IDLE) & s_arvalid[m] & ~ar_inr[m];
      err_rvalid[m]  = (re_st[m] == RE_RESP);
    end
  end

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      for (int m = 0; m < NM; m++) begin
        we_st[m] <= WE_IDLE;
        re_st[m] <= RE_IDLE;
      end
    end else begin
      for (int m = 0; m < NM; m++) begin
        // write DECERR FSM
        case (we_st[m])
          WE_IDLE:  if (s_awvalid[m] && !aw_inr[m])
                      we_st[m] <= (s_wvalid[m]) ? WE_RESP : WE_WDATA;
          WE_WDATA: if (s_wvalid[m])
                      we_st[m] <= WE_RESP;
          default:  if (s_bready[m])            
                      we_st[m] <= WE_IDLE;
        endcase
        // read DECERR FSM
        case (re_st[m])
          RE_IDLE: if (s_arvalid[m] && !ar_inr[m])
                     re_st[m] <= RE_RESP;
          default: if (s_rready[m])              
                     re_st[m] <= RE_IDLE;
        endcase
      end
    end
  end

  
  // Master-side response muxes (fabric path OR error path)
  
  always_comb begin
    for (int m = 0; m < NM; m++) begin
      
      s_awready[m] = err_awready[m];
      s_wready[m]  = err_wready[m];
      s_bvalid[m]  = err_bvalid[m];
      s_bresp[m]   = err_bvalid[m] ? RESP_DECERR : 2'b00;
      s_arready[m] = err_arready[m];
      s_rvalid[m]  = err_rvalid[m];
      s_rresp[m]   = err_rvalid[m] ? RESP_DECERR : 2'b00;
      s_rdata[m]   = err_rvalid[m] ? 32'hDEAD_DEAD : 32'h0;

      for (int t = 0; t < NC; t++) begin
        
        if (wgnt[t][MW'(m)] != 1'b0 && wsel[t] == MW'(m)) begin
          if (wreq[t][MW'(m)]) s_awready[m] = m_awready[t];
          s_wready[m] = m_wready[t] & (wlock[t] | (wreq[t] != '0));
          if (wlock[t]) begin
            s_bvalid[m] = m_bvalid[t];
            s_bresp[m]  = m_bresp[t];
          end
        end
        
        if (rgnt[t][MW'(m)] != 1'b0 && rsel[t] == MW'(m)) begin
          if (rreq[t][MW'(m)]) s_arready[m] = m_arready[t];
          if (rlock[t]) begin
            s_rvalid[m] = m_rvalid[t];
            s_rresp[m]  = m_rresp[t];
            s_rdata[m]  = m_rdata[t];
          end
        end
      end
    end
  end

endmodule

`default_nettype wire
