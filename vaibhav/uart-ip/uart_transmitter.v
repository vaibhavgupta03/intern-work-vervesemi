`timescale 1ns/1ps

module uart_transmitter (
    input  wire        clk,
    input  wire        rst,
    input  wire        tx_start,
    input  wire        oversample_tick,
    input  wire [8:0]  tx_data,

    input  wire [2:0]  word_len_sel,    
    input  wire [1:0]  stop_bits_sel,   
    input  wire [2:0]  parity_sel,      
    input  wire        break_ctrl,      
    input  wire [4:0]  oversample_factor,

    output reg          tx,
    output reg          tx_done,
    output reg          tx_busy
);

    localparam IDLE   = 3'd0;
    localparam START  = 3'd1;
    localparam DATA   = 3'd2;
    localparam PARITY = 3'd3;
    localparam STOP   = 3'd4;

    reg [2:0] state;
    reg [8:0] shift_reg;
    reg [3:0] bit_count;
    reg [5:0] os_count;
    reg [5:0] stop_count;

    reg [8:0] parity_data_reg;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            parity_data_reg <= 0;
        end
        else if (tx_start) begin
            parity_data_reg <= tx_data;
        end
    end

    wire [3:0] data_bits;
    word_len_decoder u_word_len (
        .word_len_sel(word_len_sel), .data_bits(data_bits)
    );

    wire [5:0] stop_ticks;
    stop_bits_decoder u_stop_bits (
        .stop_bits_sel(stop_bits_sel),
        .oversample_factor(oversample_factor),
        .stop_ticks(stop_ticks)
    );

    wire parity_enabled, parity_bit;
    parity_decoder u_parity (
        .parity_sel(parity_sel),
        .data_bits_in(parity_data_reg), 
        .num_data_bits(data_bits),
        .parity_enabled(parity_enabled),
        .parity_bit(parity_bit)
    );

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state      <= IDLE;
            shift_reg  <= 0;
            bit_count  <= 0;
            os_count   <= 0;
            stop_count <= 0;
            tx         <= 1'b1;
            tx_done    <= 1'b0;
            tx_busy    <= 1'b0;
        end
        else begin
            tx_done <= 1'b0;

            if (break_ctrl) begin
                tx <= 1'b0;
            end
            else begin
                case (state)
                    IDLE: begin
                        tx      <= 1'b1;
                        tx_busy <= 1'b0;
                        if (tx_start) begin
                            state     <= START;
                            shift_reg <= tx_data;
                            os_count  <= 0;
                            tx_busy   <= 1'b1;
                        end
                    end

                    START: begin
                        tx <= 1'b0;
                        if (oversample_tick) begin
                            if (os_count == oversample_factor - 1) begin
                                os_count  <= 0;
                                bit_count <= 0;
                                state     <= DATA;
                            end
                            else begin
                                os_count <= os_count + 1;
                            end
                        end
                    end

                    DATA: begin
                        tx <= shift_reg[0];
                        if (oversample_tick) begin
                            if (os_count == oversample_factor - 1) begin
                                os_count  <= 0;
                                shift_reg <= shift_reg >> 1;

                                if (bit_count == data_bits - 1) begin
                                    if (parity_enabled) begin
                                        state <= PARITY;
                                    end
                                    else begin
                                        state      <= STOP;
                                        stop_count <= 0;
                                    end
                                end
                                else begin
                                    bit_count <= bit_count + 1;
                                end
                            end
                            else begin
                                os_count <= os_count + 1;
                            end
                        end
                    end

                    PARITY: begin
                        tx <= parity_bit;
                        if (oversample_tick) begin
                            if (os_count == oversample_factor - 1) begin
                                os_count   <= 0;
                                state      <= STOP;
                                stop_count <= 0;
                            end
                            else begin
                                os_count <= os_count + 1;
                            end
                        end
                    end

                    STOP: begin
                        tx <= 1'b1;
                        if (oversample_tick) begin
                            if (stop_count == stop_ticks - 1) begin
                                state   <= IDLE;
                                tx_done <= 1'b1;
                            end
                            else begin
                                stop_count <= stop_count + 1;
                            end
                        end
                    end
                    
                    // FIX: Mask defensive state fallback from coverage tools
                    // verilator coverage_off
                    default: state <= IDLE; 
                    // verilator coverage_on
                endcase
            end
        end
    end

endmodule