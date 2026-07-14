`timescale 1ns/1ps

// 1. Core design module components
`include "word_len_decoder.v"
`include "stop_bits_decoder.v"
`include "parity_decoder.v"
`include "uart_transmitter.v"
`include "uart_receiver.v"
`include "uart_top.v"

// 2. Verification checkers component structures
`include "uart_protocol_checker.v"
`include "uart_regfile_spec_checker.v"
`include "axi_spec_checker.v"

// 3. Verification suite top wrapper
`include "uart_spec_top.v"

module tx_rx_tb (
    // Clean Public I/O Boundary driven entirely by the host C++ runtime engine
    input  wire        clk,
    input  wire        rst,
    input  wire        rx,
    output wire        tx,
    
    // AXI Write Address Channel Ports
    input  wire [31:0] s_awaddr,
    input  wire        s_awvalid,
    output wire        s_awready,
    
    // AXI Write Data Channel Ports
    input  wire [31:0] s_wdata,
    input  wire        s_wvalid,
    output wire        s_wready,
    input  wire [3:0]  s_wstrb,
    
    // AXI Write Response Channel Ports
    output wire        s_bvalid,
    input  wire        s_bready,
    
    // AXI Read Address Channel Ports
    input  wire [31:0] s_araddr,
    input  wire        s_arvalid,
    output wire        s_arready,
    
    // AXI Read Data Channel Ports
    output wire [31:0] s_rdata,
    output wire        s_rvalid,
    input  wire        s_rready
);

   // ── 1. Instance: Complete Design Under Test (DUT) ──────
    uart_top #(
        .AXI_ADDR_WIDTH(32),
        .AXI_DATA_WIDTH(32),
        .CLOCK_FREQUENCY(100_000_000)
    ) dut (
        .clk(clk),
        .rst(rst),
        .rx(rx),
        .tx(tx),
        .s_awaddr(s_awaddr),   .s_awvalid(s_awvalid), .s_awready(s_awready),
        .s_wdata(s_wdata),     .s_wstrb(s_wstrb),     .s_wvalid(s_wvalid),   .s_wready(s_wready),
        .s_bvalid(s_bvalid),   .s_bready(s_bready),   .s_bresp(), 
        .s_araddr(s_araddr),   .s_arvalid(s_arvalid), .s_arready(s_arready), // Fixed: changed arready to s_arready
        .s_rdata(s_rdata),     .s_rvalid(s_rvalid),   .s_rready(s_rready),   .s_rresp()  
    );

    // ── 2. Instance: Specification Verification Suite ─────
    uart_spec_top spec_suite (
        .clk(clk),
        .rst(rst),
        .tx_pin(dut.tx),
        .rx_pin(dut.rx),
        .oversample_tick(dut.oversample_tick),
        .oversample_factor(dut.oversample_factor),
        .word_len_sel(dut.lcr_val[2:0]),
        .stop_bits_sel(dut.lcr_val[4:3]),
        .parity_sel(dut.lcr_val[7:5]),
        .wr_en(dut.regfile_wr_en),
        .addr(dut.regfile_wr_addr),
        .wr_data(dut.regfile_wr_data),
        .rd_data(dut.regfile_rd_data),
        .rd_addr(dut.regfile_rd_addr),
        
        // Exposed directly at top level of uart_top:
        .lcr_val(dut.lcr_val),
        .dll_val(dut.dll_val),
        .dlh_val(dut.dlh_val),
        .clk_val(dut.clk_val),
        
        // Hierarchical paths pointing into the register file child module:
        .fcr_val(dut.u_regfile.fcr_val),
        .rxthr_val(dut.u_regfile.rxthr_val),
        .txthr_val(dut.u_regfile.txthr_val),
        .timeout_val(dut.u_regfile.timeout_val),
        .mode_val(dut.u_regfile.mode_val),
        
        // AXI interface loopback tap maps
        .awaddr(s_awaddr),     .awvalid(s_awvalid),   .awready(s_awready),
        .wdata(s_wdata),       .wstrb(s_wstrb),       .wvalid(s_wvalid),     .wready(s_wready),
        .bresp(2'b00),         .bvalid(s_bvalid),     .bready(s_bready),
        .araddr(s_araddr),     .arvalid(s_arvalid),   .arready(s_arready),
        .rdata(s_rdata),       .rresp(2'b00),         .rvalid(s_rvalid),     .rready(s_rready),
        
        // Hooked up to internal verification metrics
        .all_pass(),
        .total_pass_count(),
        .total_fail_count()
    );

endmodule