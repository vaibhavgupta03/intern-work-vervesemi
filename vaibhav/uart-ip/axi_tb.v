`timescale 1ns/1ps
`include "generic_register.v"
`include "uart_regfile.v"
`include "axi4lite_slave.v"

module axi_tb;

    reg         clk, rst;
    wire [15:0] regfile_rd_data_bus; // Connects real regfile read data to AXI slave

    // AXI write signals
    reg  [31:0] awaddr;
    reg         awvalid;
    wire        awready;
    reg  [31:0] wdata;
    reg  [3:0]  wstrb;
    reg         wvalid;
    wire        wready;
    wire [1:0]  bresp;
    wire        bvalid;
    reg         bready;

    // AXI read signals
    reg  [31:0] araddr;
    reg         arvalid;
    wire        arready;
    wire [31:0] rdata;
    wire [1:0]  rresp;
    wire        rvalid;
    reg         rready;

    // Interconnect wires between AXI Slave and Register File
    wire        regfile_wr_en;
    wire [4:0]  regfile_wr_addr;
    wire [15:0] regfile_wr_data;
    wire [4:0]  regfile_rd_addr_wire;

    // ── 1. INSTANTIATE AXI4-LITE SLAVE WRAPPER ────────────────────
    axi4lite_slave dut (
        .clk(clk), .rst(rst),
        .s_awaddr(awaddr), .s_awvalid(awvalid), .s_awready(awready),
        .s_wdata(wdata), .s_wvalid(wvalid), .s_wready(wready), .s_wstrb(wstrb),
        .s_bresp(bresp), .s_bvalid(bvalid), .s_bready(bready),
        .s_araddr(araddr), .s_arvalid(arvalid), .s_arready(arready),
        .s_rdata(rdata), .s_rresp(rresp), .s_rvalid(rvalid), .s_rready(rready),
        .regfile_wr_en(regfile_wr_en),
        .regfile_wr_addr(regfile_wr_addr),
        .regfile_wr_data(regfile_wr_data),
        .regfile_rd_addr(regfile_rd_addr_wire),
        .regfile_rd_data(regfile_rd_data_bus)
    );

    // ── 2. INSTANTIATE REAL REGISTER FILE CORE ────────────────────
    uart_regfile u_real_regfile (
        .clk(clk),
        .rst(rst),
        .wr_en(regfile_wr_en),
        .addr(regfile_wr_addr),
        .wr_data(regfile_wr_data),
        .rd_addr(regfile_rd_addr_wire),
        .rd_data(regfile_rd_data_bus),

        // Unused output monitor ports left floating for testbench isolation
        .rbr_val(), .thr_val(), .dll_val(), .dlh_val(), .dlf_val(),
        .ier_val(), .iir_val(), .fcr_val(), .lcr_val(), .mcr_val(),
        .lsr_val(), .msr_val(), .mode_val(), .clk_val(), .rxthr_val(),
        .txthr_val(), .timeout_val()
    );

    // Clock generation (100MHz)
    initial clk = 0;
    always #5 clk = ~clk;

    // ── AXI Write Operation Task ───────────────────────────────────
    task axi_write(input [31:0] addr, input [31:0] data);
        begin
            @(posedge clk);
            awaddr  = addr; awvalid = 1;
            wdata   = data; wvalid  = 1; wstrb = 4'hF;
            bready  = 1;

            fork
                begin
                    while (!awready) @(posedge clk);
                    #1 awvalid = 0;
                end
                begin
                    while (!wready) @(posedge clk);
                    #1 wvalid = 0;
                end
            join

            while (!bvalid) @(posedge clk);
            #1 bready = 0;

            $display("[%0t] AXI WRITE addr=0x%08h data=0x%08h bresp=%b",
                       $time, addr, data, bresp);
            @(posedge clk);
        end
    endtask

    // ── AXI Read Operation Task ────────────────────────────────────
    task axi_read(input [31:0] addr);
        begin
            @(posedge clk);
            araddr  = addr; arvalid = 1;
            rready  = 1;

            while (!arready) @(posedge clk);
            #1 arvalid = 0;

            while (!rvalid) @(posedge clk);
            #1 rready = 0;

            $display("[%0t] AXI READ  addr=0x%08h rdata=0x%08h rresp=%b",
                       $time, addr, rdata, rresp);
            @(posedge clk);
        end
    endtask

    // ── Main Test Stimulus Sequence ───────────────────────────────
    initial begin
        $dumpfile("axi_wave.vcd");
        $dumpvars(0, axi_tb);

        rst = 1; awvalid = 0; wvalid = 0; bready = 0;
        arvalid = 0; rready = 0;
        awaddr = 0; wdata = 0; wstrb = 0; araddr = 0;
        #50 rst = 0;
        #20;

        // TEST 1: Write configuration parameter to Line Control Register (LCR - Offset 0x06)
        axi_write(32'h00000006, 32'h0000_003B);

        // TEST 2: Write configuration parameter to Clock Divisor Register (CLK - Offset 0x12)
        axi_write(32'h00000012, 32'h0000_0005);

        // TEST 3: Read back and verify LCR configuration (Should print rdata=0x0000003b)
        axi_read(32'h00000006);

        // TEST 4: Execute back-to-back fast write operations
        axi_write(32'h00000010, 32'h0000_0001);   // Write to MODE (Offset 0x10)
        axi_write(32'h00000014, 32'h0000_0040);   // Write to RXTHR (Offset 0x14)

        // TEST 5: Read back and verify CLK configuration (Should print rdata=0x00000005)
        axi_read(32'h00000012);

        #100 $finish;
    end

endmodule