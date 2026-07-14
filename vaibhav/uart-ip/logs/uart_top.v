//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module uart_top #(
            parameter AXI_ADDR_WIDTH = 32,
            parameter AXI_DATA_WIDTH = 32,
            parameter CLOCK_FREQUENCY = 100_000_000
        )(
 748703     input  wire                       clk,
 000003     input  wire                       rst,
        
            // ── Physical UART Pins ────────────────────────────────
 000768     input  wire                       rx,
 000767     output wire                       tx,
        
            // ── AXI4-Lite Write Address Channel ───────────────────
~000357     input  wire [AXI_ADDR_WIDTH-1:0]  s_awaddr,
 000734     input  wire                       s_awvalid,
 000734     output wire                       s_awready,
        
            // ── AXI4-Lite Write Data Channel ──────────────────────
~000198     input  wire [AXI_DATA_WIDTH-1:0]  s_wdata,
 000001     input  wire [3:0]                 s_wstrb,
 000734     input  wire                       s_wvalid,
 000734     output wire                       s_wready,
        
            // ── AXI4-Lite Write Response Channel ──────────────────
~000002     output wire [1:0]                 s_bresp,
 000734     output wire                       s_bvalid,
 000376     input  wire                       s_bready,
        
            // ── AXI4-Lite Read Address Channel ────────────────────
~000019     input  wire [AXI_ADDR_WIDTH-1:0]  s_araddr,
 000040     input  wire                       s_arvalid,
 000040     output wire                       s_arready,
        
            // ── AXI4-Lite Read Data Channel ───────────────────────
~000012     output wire [AXI_DATA_WIDTH-1:0]  s_rdata,
~000002     output wire [1:0]                 s_rresp,
 000040     output wire                       s_rvalid,
 000036     input  wire                       s_rready
        );
        
            // ── Internal Interconnect Wires ───────────────────────
 000734     wire        regfile_wr_en;
~000356     wire [4:0]  regfile_wr_addr;
 000198     wire [15:0] regfile_wr_data;
~000018     wire [4:0]  regfile_rd_addr;
~000012     wire [15:0] regfile_rd_data;
~000004     wire [15:0] clk_val; 
        
            // Register Output Configuration Values
 000088     wire [15:0] thr_val;
~000002     wire [15:0] dll_val;
~000002     wire [15:0] dlh_val;
~000002     wire [15:0] dlf_val;
~000086     wire [15:0] lcr_val;
        
            // Baud Rate Generator Wires
 011384     wire        oversample_tick;
 000005     wire [4:0]  oversample_factor;
        
            // ── 1. Instance: AXI4-Lite Slave Bus Protocol Wrapper ──
            axi4lite_slave #(
                .AXI_ADDR_WIDTH(AXI_ADDR_WIDTH),
                .AXI_DATA_WIDTH(AXI_DATA_WIDTH)
            ) u_axi_slave (
                .clk(clk), .rst(rst),
                .s_awaddr(s_awaddr), .s_awvalid(s_awvalid), .s_awready(s_awready),
                .s_wdata(s_wdata), .s_wstrb(s_wstrb), .s_wvalid(s_wvalid), .s_wready(s_wready),
                .s_bresp(s_bresp), .s_bvalid(s_bvalid), .s_bready(s_bready),
                .s_araddr(s_araddr), .s_arvalid(s_arvalid), .s_arready(s_arready),
                .s_rdata(s_rdata), .s_rresp(s_rresp), .s_rvalid(s_rvalid), .s_rready(s_rready),
                
                .regfile_wr_en(regfile_wr_en),
                .regfile_wr_addr(regfile_wr_addr),
                .regfile_wr_data(regfile_wr_data),
                .regfile_rd_addr(regfile_rd_addr),
                .regfile_rd_data(regfile_rd_data)
            );
        
            // ── 2. Instance: Unified Config Register File ──────────
            uart_regfile u_regfile (
                .clk(clk), .rst(rst),
                .wr_en(regfile_wr_en),
                .addr(regfile_wr_addr),
                .wr_data(regfile_wr_data),
                .rd_addr(regfile_rd_addr),
                .rd_data(regfile_rd_data),
        
                .thr_val(thr_val),
                .dll_val(dll_val),
                .dlh_val(dlh_val),
                .dlf_val(dlf_val),
                .lcr_val(lcr_val),
                
                .rbr_val(), .ier_val(), .iir_val(), .fcr_val(), 
                .mcr_val(), .lsr_val(), .msr_val(), .mode_val(), 
                .clk_val(clk_val), .rxthr_val(), .txthr_val(), .timeout_val()
            );
        
            // ── 3. Instance: Clock Divider / Baud Rate Generator ───
            baudrategenerator #(
                .CLOCK_FREQUENCY(CLOCK_FREQUENCY)
            ) u_baud_gen (
                .clk(clk),
                .rst(rst),
                .dll_val(dll_val),
                .dlh_val(dlh_val),
                .dlf_val(dlf_val),
                .os_sel(clk_val[3:2]), 
                .oversample_tick(oversample_tick),
                .oversample_factor(oversample_factor)
            );
        
            // ── 4. Instance: UART Serial Transmitter (Tx) ──────────
 000342     wire tx_start_pulse = regfile_wr_en && (regfile_wr_addr == 5'h00) && (lcr_val[9] == 1'b0);
        
            uart_transmitter u_tx (
                .clk(clk),
                .rst(rst),
                .tx_start(tx_start_pulse),
                .oversample_tick(oversample_tick),
                .tx_data(regfile_wr_data[8:0]),
                .word_len_sel(lcr_val[2:0]),
                .stop_bits_sel(lcr_val[4:3]),
                .parity_sel(lcr_val[7:5]),
                .break_ctrl(lcr_val[8]),
                .oversample_factor(oversample_factor),
                .tx(tx),
                .tx_done(),
                .tx_busy()
            );
        
            // ── 5. Instance: UART Serial Receiver (Rx) ─────────────
            uart_receiver u_rx (
                .clk(clk),
                .rst(rst),
                .oversample_tick(oversample_tick),
                .rx(rx),
                .word_len_sel(lcr_val[2:0]),
                .stop_bits_sel(lcr_val[4:3]),
                .parity_sel(lcr_val[7:5]),
                .oversample_factor(oversample_factor),
                .rx_data(),       
                .rx_valid(),      
                .rx_busy(),
                .frame_error(),
                .parity_error(),
                .break_detect()
            );
        
            // ── DEDICATED FUNCTIONAL COVERAGE MONITOR REGISTERS ──────────────────
 000002     reg [20:0] fc_feature_manifest;
        
 374351     always @(posedge clk or posedge rst) begin
 374339         if (rst) begin
 000012             fc_feature_manifest <= 21'b0;
 374339         end else begin
                    // 1. Word length states
 320859             if (lcr_val[2:0] == 3'b000) fc_feature_manifest[0]  <= 1'b1; // cov_wl_5
 338993             if (lcr_val[2:0] == 3'b001) fc_feature_manifest[1]  <= 1'b1; // cov_wl_6
 341189             if (lcr_val[2:0] == 3'b010) fc_feature_manifest[2]  <= 1'b1; // cov_wl_7
 297194             if (lcr_val[2:0] == 3'b011) fc_feature_manifest[3]  <= 1'b1; // cov_wl_8
 323201             if (lcr_val[2:0] == 3'b100) fc_feature_manifest[4]  <= 1'b1; // cov_wl_9
        
                    // 2. Stop bit states
 277083             if (lcr_val[4:3] == 2'b00)  fc_feature_manifest[5]  <= 1'b1; // cov_sb_1
 263985             if (lcr_val[4:3] == 2'b01)  fc_feature_manifest[6]  <= 1'b1; // cov_sb_1p5
 295629             if (lcr_val[4:3] == 2'b10)  fc_feature_manifest[7]  <= 1'b1; // cov_sb_2
        
                    // 3. Parity setup states
 301620             if (lcr_val[7:5] == 3'b000) fc_feature_manifest[8]  <= 1'b1; // cov_par_none
 329969             if (lcr_val[7:5] == 3'b001) fc_feature_manifest[9]  <= 1'b1; // cov_par_odd
 320945             if (lcr_val[7:5] == 3'b011) fc_feature_manifest[10] <= 1'b1; // cov_par_even
 338933             if (lcr_val[7:5] == 3'b101) fc_feature_manifest[11] <= 1'b1; // cov_par_mark
 338993             if (lcr_val[7:5] == 3'b111) fc_feature_manifest[12] <= 1'b1; // cov_par_space
        
                    // 4. Protocol event states
 373836             if (u_tx.tx_busy && lcr_val[8]) fc_feature_manifest[13] <= 1'b1; // cov_tx_break
 365521             if (u_rx.frame_error == 1'b1)   fc_feature_manifest[14] <= 1'b1; // cov_rx_frame_er
 369349             if (u_rx.parity_error == 1'b1)  fc_feature_manifest[15] <= 1'b1; // cov_rx_par_er
 326698             if (u_rx.break_detect == 1'b1)  fc_feature_manifest[16] <= 1'b1; // cov_rx_break_de
        
                    // 5. Oversample parameters
 372970             if (clk_val[3:2] == 2'b00)  fc_feature_manifest[17] <= 1'b1; // cov_os_16x
 373080             if (clk_val[3:2] == 2'b01)  fc_feature_manifest[18] <= 1'b1; // cov_os_8x
 370535             if (clk_val[3:2] == 2'b10)  fc_feature_manifest[19] <= 1'b1; // cov_os_4x
 367907             if (clk_val[3:2] == 2'b11)  fc_feature_manifest[20] <= 1'b1; // cov_os_3x
                end
            end
        
            // Direct Verilator instrumentation target bindings
 374351     always @(posedge clk) begin
 374339         if (!rst) begin
~374338             if (fc_feature_manifest[0])  cov_wl_5:          cover(1);
~365141             if (fc_feature_manifest[1])  cov_wl_6:          cover(1);
~374264             if (fc_feature_manifest[2])  cov_wl_7:          cover(1);
~374192             if (fc_feature_manifest[3])  cov_wl_8:          cover(1);
~360623             if (fc_feature_manifest[4])  cov_wl_9:          cover(1);
~374303             if (fc_feature_manifest[5])  cov_sb_1:          cover(1);
~374264             if (fc_feature_manifest[6])  cov_sb_1p5:        cover(1);
~356861             if (fc_feature_manifest[7])  cov_sb_2:          cover(1);
~374338             if (fc_feature_manifest[8])  cov_par_none:      cover(1);
~352349             if (fc_feature_manifest[9])  cov_par_odd:       cover(1);
~356861             if (fc_feature_manifest[10]) cov_par_even:      cover(1);
~374264             if (fc_feature_manifest[11]) cov_par_mark:      cover(1);
~313997             if (fc_feature_manifest[12]) cov_par_space:     cover(1);
~367170             if (fc_feature_manifest[13]) cov_tx_break:      cover(1);
~277879             if (fc_feature_manifest[14]) cov_rx_frame_er:   cover(1);
~250320             if (fc_feature_manifest[15]) cov_rx_par_er:     cover(1);
~296758             if (fc_feature_manifest[16]) cov_rx_break_de:   cover(1);
~374338             if (fc_feature_manifest[17]) cov_os_16x:        cover(1);
~370424             if (fc_feature_manifest[18]) cov_os_8x:         cover(1);
~374228             if (fc_feature_manifest[19]) cov_os_4x:         cover(1);
~367906             if (fc_feature_manifest[20]) cov_os_3x:         cover(1);
                end
            end
        
        endmodule
