`default_nettype none

module axil_periph_reg #(
  parameter logic [31:0] ID_VAL = 32'hA5A5_0000
) (
  input  wire         clk,
  input  wire         rst_n,

  // ---- AXI4-Lite slave port (from concentrator) ----
 
  input  wire  [7:0]  s_awaddr,    
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

  
  input  wire  [7:0]  s_araddr,     
  input  wire  [2:0]  s_arprot,     
  
  input  wire         s_arvalid,
  output logic        s_arready,

  output logic [31:0] s_rdata,
  output logic [1:0]  s_rresp,
  output logic        s_rvalid,
  input  wire         s_rready
);

  localparam logic [1:0] RESP_OKAY   = 2'b00;
  localparam logic [1:0] RESP_SLVERR = 2'b10;
  localparam logic [1:0] RESP_DECERR = 2'b11;

  
  logic [31:0] regs [1:15];

 
  logic        aw_pend;
  logic [7:2]  awoff_q;

  assign s_awready = ~aw_pend;
  assign s_wready  = aw_pend | s_awvalid;   

  wire aw_hs = s_awvalid & s_awready;
  wire w_hs  = s_wvalid  & s_wready;
  wire b_hs  = s_bvalid  & s_bready;

  
  wire [7:2]  eff_off   = aw_pend ? awoff_q : s_awaddr[7:2];
  wire [31:0] eff_wdata = s_wdata;
  wire [3:0]  eff_wstrb = s_wstrb;

  wire        do_write  = w_hs;            

  wire        wr_unmap  = (eff_off[7] == 1'b1);          
  wire        wr_prot   = (eff_off[7:6] == 2'b01);       
  wire        wr_ro     = (eff_off[7:6] == 2'b00) && (eff_off[5:2] == 4'd0); 
  wire        wr_ok     = ~wr_unmap & ~wr_prot & ~wr_ro;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      aw_pend  <= 1'b0;
      s_bvalid <= 1'b0;
      s_bresp  <= RESP_OKAY;
      awoff_q  <= '0;
      for (int i = 1; i < 16; i++) regs[i] <= '0;
    end else begin
      if (aw_hs) begin
        aw_pend <= 1'b1;
        awoff_q <= s_awaddr[7:2];
      end
      if (do_write) begin
        s_bvalid <= 1'b1;
        if (wr_unmap)     s_bresp <= RESP_DECERR;
        else if (wr_prot) s_bresp <= RESP_SLVERR;
        else if (wr_ro)   s_bresp <= RESP_SLVERR;
        else              s_bresp <= RESP_OKAY;
        if (wr_ok) begin
          for (int b = 0; b < 4; b++) begin
            if (eff_wstrb[b]) regs[eff_off[5:2]][8*b +: 8] <= eff_wdata[8*b +: 8];
          end
        end
        aw_pend <= 1'b0;   
      end
      if (b_hs) s_bvalid <= 1'b0;
    end
  end

  
  // Read channel: 1-cycle registered response.
  
  assign s_arready = ~s_rvalid;
  wire ar_hs = s_arvalid & s_arready;
  wire r_hs  = s_rvalid  & s_rready;

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      s_rvalid <= 1'b0;
      s_rresp  <= RESP_OKAY;
      s_rdata  <= '0;
    end else begin
      if (ar_hs) begin
        s_rvalid <= 1'b1;
        if (s_araddr[7] == 1'b1) begin              
          s_rresp <= RESP_DECERR;
          s_rdata <= 32'hDEC0_DE00;
        end else if (s_araddr[7:6] == 2'b01) begin  
          s_rresp <= RESP_SLVERR;
          s_rdata <= 32'hBAD0_BAD0;
        end else if (s_araddr[5:2] == 4'd0) begin   
          s_rresp <= RESP_OKAY;
          s_rdata <= ID_VAL;
        end else begin
          s_rresp <= RESP_OKAY;
          s_rdata <= regs[s_araddr[5:2]];
        end
      end
      if (r_hs) s_rvalid <= 1'b0;
    end
  end

endmodule

`default_nettype wire
