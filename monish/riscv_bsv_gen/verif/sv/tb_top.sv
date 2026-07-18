// tb_top.sv -- SystemVerilog verification top.
// Brings up the AXI4-Lite verification IP (BFM driver + SVA protocol checker +
// self-checking scoreboard) against the reference memory model. Runs a set of
// PASS/FAIL directed tests exercising write/read, byte strobes, and back-to-back
// transactions with protocol checking active throughout.
//
// To verify the bsc-generated RTL instead of the reference model:
//   * replace axi4lite_mem with the mkSoC_wrapper (verif/wrappers), which maps
//     the generated method ports onto axi4lite_if.slave, and remove the BFM
//     write path (the core drives its own memory port). See README.
`timescale 1ns/1ps

module tb_top;
  logic aclk = 0;
  logic aresetn = 0;
  always #5 aclk = ~aclk;   // 100 MHz

  axi4lite_if #(32,32) bus (aclk, aresetn);

  // DUT: reference memory model (swap for generated mkBramMem wrapper).
  axi4lite_mem #(.WORDS(16384), .MEMFILE("")) u_mem (bus.slave);

  // Verification IP.
  driver_axi        u_drv (bus.master);
  axi4lite_checker  u_chk (bus.mon);
  scoreboard #(.WORDS(16384)) u_scb ();

  logic [31:0] rd;

  // Reset then run the directed test list.
  initial begin
    aresetn = 0;
    repeat (5) @(posedge aclk);
    aresetn = 1;
    @(posedge aclk);

    // ---- Test 1: single word write/read ----
    u_drv.write(32'h0000_0000, 32'hCAFEBABE, 4'hF);
    u_scb.obs_write(32'h0000_0000, 32'hCAFEBABE, 4'hF);
    u_drv.read(32'h0000_0000, rd);
    u_scb.obs_read(32'h0000_0000, rd);
    u_scb.expect_eq("word rw", rd, 32'hCAFEBABE);

    // ---- Test 2: byte-strobe partial write ----
    u_drv.write(32'h0000_0010, 32'hFFFFFFFF, 4'hF);
    u_scb.obs_write(32'h0000_0010, 32'hFFFFFFFF, 4'hF);
    u_drv.write(32'h0000_0010, 32'h000000AA, 4'h1);   // low byte only
    u_scb.obs_write(32'h0000_0010, 32'h000000AA, 4'h1);
    u_drv.read(32'h0000_0010, rd);
    u_scb.obs_read(32'h0000_0010, rd);
    u_scb.expect_eq("byte strobe", rd, 32'hFFFFFFAA);

    // ---- Test 3: back-to-back writes then reads ----
    for (int i = 0; i < 8; i++) begin
      u_drv.write(32'h0000_0100 + i*4, 32'h1000 + i, 4'hF);
      u_scb.obs_write(32'h0000_0100 + i*4, 32'h1000 + i, 4'hF);
    end
    for (int i = 0; i < 8; i++) begin
      u_drv.read(32'h0000_0100 + i*4, rd);
      u_scb.obs_read(32'h0000_0100 + i*4, rd);
    end

    // ---- Test 4: address wrap (masking) ----
    u_drv.write(32'h0000_0020, 32'h5A5A5A5A, 4'hF);
    u_scb.obs_write(32'h0000_0020, 32'h5A5A5A5A, 4'hF);
    u_drv.read(32'h0000_0020, rd);
    u_scb.expect_eq("wrap rw", rd, 32'h5A5A5A5A);

    repeat (10) @(posedge aclk);

    // ---- Final verdict (fold in protocol-checker errors) ----
    if (u_chk.err_count != 0)
      $display("FAIL[axi]: %0d protocol errors", u_chk.err_count);
    u_scb.report("axi");
    if (u_scb.fails == 0 && u_chk.err_count == 0) $display("PASS[axi-env]");
    else $display("FAIL[axi-env]");
    $finish;
  end

  // Global watchdog.
  initial begin #100000; $display("FAIL[axi]: watchdog"); $finish; end
endmodule
