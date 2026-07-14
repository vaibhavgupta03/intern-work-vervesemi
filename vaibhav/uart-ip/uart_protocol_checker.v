// uart_protocol_checker.v
// Black-box UART frame checker — attaches to tx or rx pin only
// Reports PASS/FAIL per spec requirement

module uart_protocol_checker #(
    parameter OVERSAMPLE = 16,
    parameter CHECK_ID   = "TX"   // label for reporting
)(
    input wire clk,
    input wire rst,
    input wire uart_pin,           // tx or rx pin to monitor
    input wire oversample_tick,    // from baud generator

    // frame config — what we EXPECT to see (from LCR)
    input wire [2:0] expected_word_len,  // LCR[2:0]
    input wire [1:0] expected_stop_bits, // LCR[4:3]
    input wire [2:0] expected_parity,    // LCR[7:5]
    input wire [4:0] oversample_factor,

    // results — pulse for 1 cycle when each check fires
    output reg spec_start_bit_ok,     // start bit was exactly 0
    output reg spec_data_bits_ok,     // correct number of data bits received
    output reg spec_parity_ok,        // parity bit matched expected
    output reg spec_stop_bit_ok,      // stop bit was exactly 1
    output reg spec_idle_line_ok,     // idle line stays HIGH between frames

    output reg spec_start_bit_FAIL,
    output reg spec_data_bits_FAIL,
    output reg spec_parity_FAIL,
    output reg spec_stop_bit_FAIL,
    output reg spec_idle_line_FAIL
);

    // states
    localparam IDLE   = 3'd0;
    localparam START  = 3'd1;
    localparam DATA   = 3'd2;
    localparam PARITY = 3'd3;
    localparam STOP   = 3'd4;

    reg [2:0] state;
    reg [5:0] os_count;
    reg [3:0] bit_count;
    reg [5:0] stop_count;
    reg [8:0] captured_data;
    reg       prev_pin;

    // decode expected data bits count
    reg [3:0] exp_data_bits;
    always @(*) begin
        case (expected_word_len)
            3'b000: exp_data_bits = 4'd5;
            3'b001: exp_data_bits = 4'd6;
            3'b010: exp_data_bits = 4'd7;
            3'b011: exp_data_bits = 4'd8;
            3'b100: exp_data_bits = 4'd9;
            default: exp_data_bits = 4'd8;
        endcase
    end

    // decode expected stop ticks
    reg [5:0] exp_stop_ticks;
    always @(*) begin
        case (expected_stop_bits)
            2'b00: exp_stop_ticks = oversample_factor;
            2'b01: exp_stop_ticks = oversample_factor + (oversample_factor >> 1);
            2'b10: exp_stop_ticks = oversample_factor * 2;
            default: exp_stop_ticks = oversample_factor;
        endcase
    end

    // expected parity bit given captured data
    reg [3:0] ones_count;
    reg       exp_parity_bit;
    integer   i;
    always @(*) begin
        ones_count = 0;
        for (i = 0; i < 9; i = i + 1)
            if (captured_data[i]) ones_count = ones_count + 1;
        case (expected_parity)
            3'b001: exp_parity_bit = ~ones_count[0];  // odd
            3'b011: exp_parity_bit =  ones_count[0];  // even
            3'b101: exp_parity_bit = 1'b1;             // mark
            3'b111: exp_parity_bit = 1'b0;             // space
            default: exp_parity_bit = 1'b0;
        endcase
    end

    wire parity_enabled = (expected_parity != 3'b000);
    wire falling_edge   = prev_pin & ~uart_pin;
    wire midpoint       = (os_count == (oversample_factor >> 1));

    // 2FF synchronizer for the monitored pin
    reg pin_ff1, pin_ff2, pin_prev;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pin_ff1 <= 1'b1; pin_ff2 <= 1'b1; pin_prev <= 1'b1;
        end
        else begin
            pin_ff1  <= uart_pin;
            pin_ff2  <= pin_ff1;
            pin_prev <= pin_ff2;
        end
    end
    wire pin_sync  = pin_ff2;
    wire pin_fall  = pin_prev & ~pin_sync;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state              <= IDLE;
            os_count           <= 0;
            bit_count          <= 0;
            stop_count         <= 0;
            captured_data      <= 0;
            spec_start_bit_ok  <= 0; spec_start_bit_FAIL  <= 0;
            spec_data_bits_ok  <= 0; spec_data_bits_FAIL  <= 0;
            spec_parity_ok     <= 0; spec_parity_FAIL     <= 0;
            spec_stop_bit_ok   <= 0; spec_stop_bit_FAIL   <= 0;
            spec_idle_line_ok  <= 0; spec_idle_line_FAIL  <= 0;
        end
        else begin
            // default: clear all single-cycle pulses
            spec_start_bit_ok  <= 0; spec_start_bit_FAIL  <= 0;
            spec_data_bits_ok  <= 0; spec_data_bits_FAIL  <= 0;
            spec_parity_ok     <= 0; spec_parity_FAIL     <= 0;
            spec_stop_bit_ok   <= 0; spec_stop_bit_FAIL   <= 0;
            spec_idle_line_ok  <= 0; spec_idle_line_FAIL  <= 0;

            case (state)

                // ── IDLE: line must stay HIGH ─────────────────
                IDLE: begin
                    if (pin_sync == 1'b1) begin
                        spec_idle_line_ok <= 1'b1;
                    end
                    if (pin_fall) begin
                        state    <= START;
                        os_count <= 0;
                    end
                end

                // ── START: verify bit is LOW at midpoint ──────
                START: begin
                    if (oversample_tick) begin
                        os_count <= os_count + 1;
                        if (os_count == (oversample_factor >> 1)) begin
                            if (pin_sync == 1'b0) begin
                                // SPEC: start bit must be LOW
                                spec_start_bit_ok <= 1'b1;
                                state     <= DATA;
                                bit_count <= 0;
                                os_count  <= 0;
                            end
                            else begin
                                // SPEC VIOLATION: start bit not LOW at midpoint
                                spec_start_bit_FAIL <= 1'b1;
                                state <= IDLE;
                            end
                        end
                    end
                end

                // ── DATA: sample each bit at midpoint ────────
                DATA: begin
                    if (oversample_tick) begin
                        os_count <= os_count + 1;
                        if (os_count == oversample_factor - 1) begin
                            os_count <= 0;
                            captured_data[bit_count] <= pin_sync;

                            if (bit_count == exp_data_bits - 1) begin
                                // SPEC: correct number of data bits observed
                                spec_data_bits_ok <= 1'b1;
                                state <= parity_enabled ? PARITY : STOP;
                                stop_count <= 0;
                            end
                            else begin
                                bit_count <= bit_count + 1;
                            end
                        end
                    end
                end

                // ── PARITY: verify parity bit ─────────────────
                PARITY: begin
                    if (oversample_tick) begin
                        os_count <= os_count + 1;
                        if (os_count == oversample_factor - 1) begin
                            os_count <= 0;

                            if (pin_sync == exp_parity_bit) begin
                                // SPEC: parity bit matches expected
                                spec_parity_ok <= 1'b1;
                            end
                            else begin
                                // SPEC VIOLATION: wrong parity bit on wire
                                spec_parity_FAIL <= 1'b1;
                            end

                            state      <= STOP;
                            stop_count <= 0;
                        end
                    end
                end

                // ── STOP: verify stop bit(s) are HIGH ─────────
                STOP: begin
                    if (oversample_tick) begin
                        // SPEC: every sample during stop period must be HIGH
                        if (pin_sync == 1'b0) begin
                            spec_stop_bit_FAIL <= 1'b1;
                        end

                        if (stop_count == exp_stop_ticks - 1) begin
                            if (pin_sync == 1'b1) begin
                                spec_stop_bit_ok <= 1'b1;
                            end
                            state      <= IDLE;
                            stop_count <= 0;
                            os_count   <= 0;
                        end
                        else begin
                            stop_count <= stop_count + 1;
                        end
                    end
                end

            endcase
        end
    end

endmodule