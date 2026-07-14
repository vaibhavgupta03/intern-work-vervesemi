//      // verilator_coverage annotation
        // uart_protocol_checker.v
        // Black-box UART frame checker — attaches to tx or rx pin only
        // Reports PASS/FAIL per spec requirement
        
        module uart_protocol_checker #(
            parameter OVERSAMPLE = 16,
            parameter CHECK_ID   = "TX"   // label for reporting
        )(
 748703     input wire clk,
 000003     input wire rst,
 000767     input wire uart_pin,           // tx or rx pin to monitor
 011384     input wire oversample_tick,    // from baud generator
        
            // frame config — what we EXPECT to see (from LCR)
 000086     input wire [2:0] expected_word_len,  // LCR[2:0]
 000077     input wire [1:0] expected_stop_bits, // LCR[4:3]
 000084     input wire [2:0] expected_parity,    // LCR[7:5]
 000005     input wire [4:0] oversample_factor,
        
            // results — pulse for 1 cycle when each check fires
 000268     output reg spec_start_bit_ok,     // start bit was exactly 0
 000268     output reg spec_data_bits_ok,     // correct number of data bits received
 000106     output reg spec_parity_ok,        // parity bit matched expected
 000266     output reg spec_stop_bit_ok,      // stop bit was exactly 1
 000270     output reg spec_idle_line_ok,     // idle line stays HIGH between frames
        
%000000     output reg spec_start_bit_FAIL,
%000000     output reg spec_data_bits_FAIL,
 000124     output reg spec_parity_FAIL,
 000090     output reg spec_stop_bit_FAIL,
%000000     output reg spec_idle_line_FAIL
        );
        
            // states
            localparam IDLE   = 3'd0;
            localparam START  = 3'd1;
            localparam DATA   = 3'd2;
            localparam PARITY = 3'd3;
            localparam STOP   = 3'd4;
        
 000500     reg [2:0] state;
~002490     reg [5:0] os_count;
 000942     reg [3:0] bit_count;
~000468     reg [5:0] stop_count;
 000072     reg [8:0] captured_data;
%000000     reg       prev_pin;
        
            // decode expected data bits count
 000081     reg [3:0] exp_data_bits;
 374352     always @(*) begin
 374352         case (expected_word_len)
 053492             3'b000: exp_data_bits = 4'd5;
 035346             3'b001: exp_data_bits = 4'd6;
 033150             3'b010: exp_data_bits = 4'd7;
 077146             3'b011: exp_data_bits = 4'd8;
 051138             3'b100: exp_data_bits = 4'd9;
 124080             default: exp_data_bits = 4'd8;
                endcase
            end
        
            // decode expected stop ticks
~000088     reg [5:0] exp_stop_ticks;
 374352     always @(*) begin
 374352         case (expected_stop_bits)
 097258             2'b00: exp_stop_ticks = oversample_factor;
 110354             2'b01: exp_stop_ticks = oversample_factor + (oversample_factor >> 1);
 078710             2'b10: exp_stop_ticks = oversample_factor * 2;
 088030             default: exp_stop_ticks = oversample_factor;
                endcase
            end
        
            // expected parity bit given captured data
 000494     reg [3:0] ones_count;
 000190     reg       exp_parity_bit;
            integer   i;
 374352     always @(*) begin
 374352         ones_count = 0;
 3369168         for (i = 0; i < 9; i = i + 1)
 2061440             if (captured_data[i]) ones_count = ones_count + 1;
 374352         case (expected_parity)
 044370             3'b001: exp_parity_bit = ~ones_count[0];  // odd
 053394             3'b011: exp_parity_bit =  ones_count[0];  // even
 035406             3'b101: exp_parity_bit = 1'b1;             // mark
 035346             3'b111: exp_parity_bit = 1'b0;             // space
 205836             default: exp_parity_bit = 1'b0;
                endcase
            end
        
 000042     wire parity_enabled = (expected_parity != 3'b000);
%000000     wire falling_edge   = prev_pin & ~uart_pin;
 002490     wire midpoint       = (os_count == (oversample_factor >> 1));
        
            // 2FF synchronizer for the monitored pin
 000767     reg pin_ff1, pin_ff2, pin_prev;
 374351     always @(posedge clk or posedge rst) begin
 374339         if (rst) begin
 000012             pin_ff1 <= 1'b1; pin_ff2 <= 1'b1; pin_prev <= 1'b1;
                end
 374339         else begin
 374339             pin_ff1  <= uart_pin;
 374339             pin_ff2  <= pin_ff1;
 374339             pin_prev <= pin_ff2;
                end
            end
 000767     wire pin_sync  = pin_ff2;
 000766     wire pin_fall  = pin_prev & ~pin_sync;
        
 374351     always @(posedge clk or posedge rst) begin
 374339         if (rst) begin
 000012             state              <= IDLE;
 000012             os_count           <= 0;
 000012             bit_count          <= 0;
 000012             stop_count         <= 0;
 000012             captured_data      <= 0;
 000012             spec_start_bit_ok  <= 0; spec_start_bit_FAIL  <= 0;
 000012             spec_data_bits_ok  <= 0; spec_data_bits_FAIL  <= 0;
 000012             spec_parity_ok     <= 0; spec_parity_FAIL     <= 0;
 000012             spec_stop_bit_ok   <= 0; spec_stop_bit_FAIL   <= 0;
 000012             spec_idle_line_ok  <= 0; spec_idle_line_FAIL  <= 0;
                end
 374339         else begin
                    // default: clear all single-cycle pulses
 374339             spec_start_bit_ok  <= 0; spec_start_bit_FAIL  <= 0;
 374339             spec_data_bits_ok  <= 0; spec_data_bits_FAIL  <= 0;
 374339             spec_parity_ok     <= 0; spec_parity_FAIL     <= 0;
 374339             spec_stop_bit_ok   <= 0; spec_stop_bit_FAIL   <= 0;
 374339             spec_idle_line_ok  <= 0; spec_idle_line_FAIL  <= 0;
        
 374339             case (state)
        
                        // ── IDLE: line must stay HIGH ─────────────────
 088324                 IDLE: begin
 087807                     if (pin_sync == 1'b1) begin
 087807                         spec_idle_line_ok <= 1'b1;
                            end
 088189                     if (pin_fall) begin
 000135                         state    <= START;
 000135                         os_count <= 0;
                            end
                        end
        
                        // ── START: verify bit is LOW at midpoint ──────
 076444                 START: begin
 076176                     if (oversample_tick) begin
 000268                         os_count <= os_count + 1;
 000134                         if (os_count == (oversample_factor >> 1)) begin
~000134                             if (pin_sync == 1'b0) begin
                                        // SPEC: start bit must be LOW
 000134                                 spec_start_bit_ok <= 1'b1;
 000134                                 state     <= DATA;
 000134                                 bit_count <= 0;
 000134                                 os_count  <= 0;
                                    end
%000000                             else begin
                                        // SPEC VIOLATION: start bit not LOW at midpoint
%000000                                 spec_start_bit_FAIL <= 1'b1;
%000000                                 state <= IDLE;
                                    end
                                end
                            end
                        end
        
                        // ── DATA: sample each bit at midpoint ────────
 162100                 DATA: begin
 159112                     if (oversample_tick) begin
 002988                         os_count <= os_count + 1;
 001992                         if (os_count == oversample_factor - 1) begin
 000996                             os_count <= 0;
 000996                             captured_data[bit_count] <= pin_sync;
        
 000862                             if (bit_count == exp_data_bits - 1) begin
                                        // SPEC: correct number of data bits observed
 000134                                 spec_data_bits_ok <= 1'b1;
 000134                                 state <= parity_enabled ? PARITY : STOP;
 000134                                 stop_count <= 0;
                                    end
 000862                             else begin
 000862                                 bit_count <= bit_count + 1;
                                    end
                                end
                            end
                        end
        
                        // ── PARITY: verify parity bit ─────────────────
 018712                 PARITY: begin
 018367                     if (oversample_tick) begin
 000345                         os_count <= os_count + 1;
 000230                         if (os_count == oversample_factor - 1) begin
 000115                             os_count <= 0;
        
 000062                             if (pin_sync == exp_parity_bit) begin
                                        // SPEC: parity bit matches expected
 000053                                 spec_parity_ok <= 1'b1;
                                    end
 000062                             else begin
                                        // SPEC VIOLATION: wrong parity bit on wire
 000062                                 spec_parity_FAIL <= 1'b1;
                                    end
        
 000115                             state      <= STOP;
 000115                             stop_count <= 0;
                                end
                            end
                        end
        
                        // ── STOP: verify stop bit(s) are HIGH ─────────
 028759                 STOP: begin
 028229                     if (oversample_tick) begin
                                // SPEC: every sample during stop period must be HIGH
 000485                         if (pin_sync == 1'b0) begin
 000045                             spec_stop_bit_FAIL <= 1'b1;
                                end
        
 000396                         if (stop_count == exp_stop_ticks - 1) begin
 000133                             if (pin_sync == 1'b1) begin
 000133                                 spec_stop_bit_ok <= 1'b1;
                                    end
 000134                             state      <= IDLE;
 000134                             stop_count <= 0;
 000134                             os_count   <= 0;
                                end
 000396                         else begin
 000396                             stop_count <= stop_count + 1;
                                end
                            end
                        end
        
                    endcase
                end
            end
        
        endmodule
