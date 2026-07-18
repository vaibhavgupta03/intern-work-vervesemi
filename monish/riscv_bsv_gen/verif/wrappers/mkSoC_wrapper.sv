// mkSoC_wrapper.sv -- hand-written SystemVerilog wrapper around the bsc-generated
// `mkSoC` Verilog. bsc emits method ports using its naming convention:
//   * value method  m       -> output  m
//   * Action method m(x)    -> input   m_x ; input EN_m ; output RDY_m
//   * ActionValue    m(x)   -> input m_x, EN_m ; output m, RDY_m
//   * sub-interface  s.meth  -> s_meth (prefixed)
//   * clocks/resets: CLK, RST_N, plus the extra debug clock/reset ports created
//     for mkSoC#(Clock dClk, Reset dRst) (typically CLK_dClk / RST_N_dRst).
//
// The EXACT generated names must be read from verilog/mkSoC.v after `make verilog`
// (the top of that file lists the module port list). Fill the connections below
// once those names are known; this wrapper then presents clean AXI4-Lite +
// debug-bus signals to the SV verification environment.
//
// This file is intentionally a documented skeleton: it cannot be finalized until
// bsc has produced mkSoC.v (bsc is not installed in this environment).
`ifndef MKSOC_WRAPPER_SV
`define MKSOC_WRAPPER_SV

module mkSoC_wrapper (
  input  logic clk,          // CPU clock  (bsc CLK)
  input  logic rst_n,        // CPU reset  (bsc RST_N, active low)
  input  logic dbg_clk,      // Debug clock
  input  logic dbg_rst_n,    // Debug reset
  axi4lite_if.slave mem      // exposed memory port (see note below)
  // NOTE: mkSoC currently exposes AXI as MASTER ports (imem/dmem) that are
  // internally connected to the on-chip BRAM via the crossbar, so the SoC has
  // no external AXI slave. For SV-level AXI verification either:
  //   (a) verify the generated mkBramMem in isolation (it IS an AXI slave), or
  //   (b) add an external AXI slave port to SoC.bsv and regenerate.
  // The connections below assume (a): wrap mkBramMem, not mkSoC.
);

  // Example port map for the generated `mkBramMem` (an AXI4-Lite SLAVE):
  //
  //   mkBramMem u_dut (
  //     .CLK   (clk),
  //     .RST_N (rst_n),
  //     // slave.aw : Put#(AxiAW)  -> put method
  //     .slave_aw_put      ({mem.awaddr, mem.awprot}),
  //     .EN_slave_aw_put   (mem.awvalid),
  //     .RDY_slave_aw_put  (mem.awready),
  //     // slave.w
  //     .slave_w_put       ({mem.wdata, mem.wstrb}),
  //     .EN_slave_w_put    (mem.wvalid),
  //     .RDY_slave_w_put   (mem.wready),
  //     // slave.b : Get#(AxiB) -> get ActionValue
  //     .EN_slave_b_get    (mem.bready),
  //     .slave_b_get       (mem.bresp),
  //     .RDY_slave_b_get   (mem.bvalid),
  //     // slave.ar
  //     .slave_ar_put      ({mem.araddr, mem.arprot}),
  //     .EN_slave_ar_put   (mem.arvalid),
  //     .RDY_slave_ar_put  (mem.arready),
  //     // slave.r : Get#(AxiR)
  //     .EN_slave_r_get    (mem.rready),
  //     .slave_r_get       ({mem.rdata, mem.rresp}),
  //     .RDY_slave_r_get   (mem.rvalid)
  //   );
  //
  // Field bit-slicing (e.g. splitting slave_r_get into rdata/rresp) follows the
  // struct field order in Types.bsv / AXI4Lite.bsv. Verify against mkBramMem.v.

endmodule

`endif
