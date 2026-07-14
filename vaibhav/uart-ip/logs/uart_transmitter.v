//      // verilator_coverage annotation
        `timescale 1ns/1ps
        
        module uart_transmitter (
 748703     input  wire        clk,
 000003     input  wire        rst,
 000342     input  wire        tx_start,
 011384     input  wire        oversample_tick,
 000198     input  wire [8:0]  tx_data,
        
 000086     input  wire [2:0]  word_len_sel,    
 000077     input  wire [1:0]  stop_bits_sel,   
 000084     input  wire [2:0]  parity_sel,      
 000002     input  wire        break_ctrl,      
 000005     input  wire [4:0]  oversample_factor,
        
 000767     output reg          tx,
 000268     output reg          tx_done,
 000270     output reg          tx_busy
        );
        
            localparam IDLE   = 3'd0;
            localparam START  = 3'd1;
            localparam DATA   = 3'd2;
            localparam PARITY = 3'd3;
            localparam STOP   = 3'd4;
        
 000402     reg [2:0] state;
 000588     reg [8:0] shift_reg;
 000942     reg [3:0] bit_count;
~002392     reg [5:0] os_count;
~000468     reg [5:0] stop_count;
        
 000088     reg [8:0] parity_data_reg;
 374351     always @(posedge clk or posedge rst) begin
 000012         if (rst) begin
 000012             parity_data_reg <= 0;
                end
 374168         else if (tx_start) begin
 000171             parity_data_reg <= tx_data;
                end
            end
        
 000081     wire [3:0] data_bits;
            word_len_decoder u_word_len (
                .word_len_sel(word_len_sel), .data_bits(data_bits)
            );
        
~000088     wire [5:0] stop_ticks;
            stop_bits_decoder u_stop_bits (
                .stop_bits_sel(stop_bits_sel),
                .oversample_factor(oversample_factor),
                .stop_ticks(stop_ticks)
            );
        
 000082     wire parity_enabled, parity_bit;
            parity_decoder u_parity (
                .parity_sel(parity_sel),
                .data_bits_in(parity_data_reg), 
                .num_data_bits(data_bits),
                .parity_enabled(parity_enabled),
                .parity_bit(parity_bit)
            );
        
 374351     always @(posedge clk or posedge rst) begin
 374339         if (rst) begin
 000012             state      <= IDLE;
 000012             shift_reg  <= 0;
 000012             bit_count  <= 0;
 000012             os_count   <= 0;
 000012             stop_count <= 0;
 000012             tx         <= 1'b1;
 000012             tx_done    <= 1'b0;
 000012             tx_busy    <= 1'b0;
                end
 374339         else begin
 374339             tx_done <= 1'b0;
        
 373836             if (break_ctrl) begin
 000503                 tx <= 1'b0;
                    end
 373836             else begin
 373836                 case (state)
 088488                     IDLE: begin
 088488                         tx      <= 1'b1;
 088488                         tx_busy <= 1'b0;
 088353                         if (tx_start) begin
 000135                             state     <= START;
 000135                             shift_reg <= tx_data;
 000135                             os_count  <= 0;
 000135                             tx_busy   <= 1'b1;
                                end
                            end
        
 083765                     START: begin
 083765                         tx <= 1'b0;
 083363                         if (oversample_tick) begin
 000268                             if (os_count == oversample_factor - 1) begin
 000134                                 os_count  <= 0;
 000134                                 bit_count <= 0;
 000134                                 state     <= DATA;
                                    end
 000268                             else begin
 000268                                 os_count <= os_count + 1;
                                    end
                                end
                            end
        
 162100                     DATA: begin
 162100                         tx <= shift_reg[0];
 159112                         if (oversample_tick) begin
 001992                             if (os_count == oversample_factor - 1) begin
 000996                                 os_count  <= 0;
 000996                                 shift_reg <= shift_reg >> 1;
        
 000862                                 if (bit_count == data_bits - 1) begin
 000068                                     if (parity_enabled) begin
 000066                                         state <= PARITY;
                                            end
 000068                                     else begin
 000068                                         state      <= STOP;
 000068                                         stop_count <= 0;
                                            end
                                        end
 000862                                 else begin
 000862                                     bit_count <= bit_count + 1;
                                        end
                                    end
 001992                             else begin
 001992                                 os_count <= os_count + 1;
                                    end
                                end
                            end
        
 010732                     PARITY: begin
 010732                         tx <= parity_bit;
 010534                         if (oversample_tick) begin
 000132                             if (os_count == oversample_factor - 1) begin
 000066                                 os_count   <= 0;
 000066                                 state      <= STOP;
 000066                                 stop_count <= 0;
                                    end
 000132                             else begin
 000132                                 os_count <= os_count + 1;
                                    end
                                end
                            end
        
 028751                     STOP: begin
 028751                         tx <= 1'b1;
 028221                         if (oversample_tick) begin
 000396                             if (stop_count == stop_ticks - 1) begin
 000134                                 state   <= IDLE;
 000134                                 tx_done <= 1'b1;
                                    end
 000396                             else begin
 000396                                 stop_count <= stop_count + 1;
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
