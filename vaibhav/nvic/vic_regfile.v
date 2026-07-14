module nvic_regfile #(
    parameter NUM_SOURCES = 128,
    parameter PRIO_WIDTH  = 8
)(
    input  wire        clk,
    input  wire        rst,

    // simple write/read interface (AXI wrapper connects here)
    input  wire        wr_en,
    input  wire [7:0]  addr,       // 8-bit address = 256 locations
    input  wire [31:0] wr_data,
    input  wire [7:0]  rd_addr,
    output reg  [31:0] rd_data,

    // outputs to NVIC logic
    output wire [127:0]            enable_out,
    output wire [127:0]            pend_sw_set,      // software-triggered pending
    output wire [127:0]            pend_sw_clear,
    output wire                    pend_sw_set_en,
    output wire                    pend_sw_clear_en,
    output wire [6:0]              prio_wr_idx,
    output wire [7:0]              prio_wr_data,
    output wire                    prio_wr_en,
    output wire [2:0]              irq_count_sel,
    output wire [1:0]              prio_width_sel,

    // inputs from NVIC logic (status)
    input  wire [127:0]            pend_in,          // current pending state
    input  wire [$clog2(128)-1:0]  winner_id,
    input  wire [PRIO_WIDTH-1:0]   winner_prio,
    input  wire                    irq_pending
);

    // ── address map ──────────────────────────────────────
    // follows simplified ARM NVIC register layout
    localparam ADDR_ENABLE_SET_0  = 8'h00;  // enable bits [31:0]
    localparam ADDR_ENABLE_SET_1  = 8'h04;  // enable bits [63:32]
    localparam ADDR_ENABLE_SET_2  = 8'h08;  // enable bits [95:64]
    localparam ADDR_ENABLE_SET_3  = 8'h0C;  // enable bits [127:96]
    localparam ADDR_PEND_SET_0    = 8'h10;  // pending set [31:0]
    localparam ADDR_PEND_SET_1    = 8'h14;
    localparam ADDR_PEND_SET_2    = 8'h18;
    localparam ADDR_PEND_SET_3    = 8'h1C;
    localparam ADDR_PEND_CLR_0    = 8'h20;  // pending clear [31:0]
    localparam ADDR_PEND_CLR_1    = 8'h24;
    localparam ADDR_PEND_CLR_2    = 8'h28;
    localparam ADDR_PEND_CLR_3    = 8'h2C;
    localparam ADDR_PRIO_BASE     = 8'h40;  // 128 bytes: prio[0] at 0x40...
    localparam ADDR_IRQ_COUNT_SEL = 8'hF0;  // runtime config
    localparam ADDR_PRIO_WIDTH_SEL= 8'hF4;
    localparam ADDR_WINNER_ID     = 8'hF8;  // read-only status
    localparam ADDR_WINNER_PRIO   = 8'hFC;

    // ── stored registers ──────────────────────────────────
    reg [127:0] enable_reg;
    reg [127:0] pend_set_reg;
    reg [127:0] pend_clr_reg;
    reg         pend_set_wr;
    reg         pend_clr_wr;
    reg [7:0]   prio_reg [0:127];
    reg         prio_wr;
    reg [6:0]   prio_wr_idx_r;
    reg [2:0]   irq_count_sel_r;
    reg [1:0]   prio_width_sel_r;

    integer i;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            enable_reg      <= 0;
            pend_set_reg    <= 0;
            pend_clr_reg    <= 0;
            pend_set_wr     <= 0;
            pend_clr_wr     <= 0;
            prio_wr         <= 0;
            prio_wr_idx_r   <= 0;
            irq_count_sel_r <= 3'b100;  // default: 128 sources
            prio_width_sel_r <= 2'b11;  // default: 256 levels
            for (i = 0; i < 128; i = i + 1)
                prio_reg[i] <= 8'hFF;   // all lowest priority
        end
        else begin
            pend_set_wr <= 1'b0;
            pend_clr_wr <= 1'b0;
            prio_wr     <= 1'b0;

            if (wr_en) begin
                case (addr)
                    ADDR_ENABLE_SET_0: enable_reg[31:0]   <= enable_reg[31:0]   | wr_data;
                    ADDR_ENABLE_SET_1: enable_reg[63:32]  <= enable_reg[63:32]  | wr_data;
                    ADDR_ENABLE_SET_2: enable_reg[95:64]  <= enable_reg[95:64]  | wr_data;
                    ADDR_ENABLE_SET_3: enable_reg[127:96] <= enable_reg[127:96] | wr_data;
                    ADDR_PEND_SET_0: begin
                        pend_set_reg[31:0] <= wr_data;
                        pend_set_wr <= 1'b1;
                    end
                    ADDR_PEND_SET_1: begin
                        pend_set_reg[63:32] <= wr_data;
                        pend_set_wr <= 1'b1;
                    end
                    ADDR_PEND_CLR_0: begin
                        pend_clr_reg[31:0] <= wr_data;
                        pend_clr_wr <= 1'b1;
                    end
                    ADDR_PEND_CLR_1: begin
                        pend_clr_reg[63:32] <= wr_data;
                        pend_clr_wr <= 1'b1;
                    end
                    ADDR_IRQ_COUNT_SEL:  irq_count_sel_r  <= wr_data[2:0];
                    ADDR_PRIO_WIDTH_SEL: prio_width_sel_r <= wr_data[1:0];
                    default: begin
                        // priority registers at 0x40 to 0xBF (one byte per IRQ)
                        if (addr >= ADDR_PRIO_BASE && addr < (ADDR_PRIO_BASE + 128)) begin
                            prio_reg[addr - ADDR_PRIO_BASE] <= wr_data[7:0];
                            prio_wr_idx_r <= addr - ADDR_PRIO_BASE;
                            prio_wr       <= 1'b1;
                        end
                    end
                endcase
            end
        end
    end

    // ── read mux ─────────────────────────────────────────
    always @(*) begin
        case (rd_addr)
            ADDR_ENABLE_SET_0:  rd_data = {16'h0, enable_reg[31:0]};
            ADDR_ENABLE_SET_1:  rd_data = {16'h0, enable_reg[63:32]};
            ADDR_ENABLE_SET_2:  rd_data = {16'h0, enable_reg[95:64]};
            ADDR_ENABLE_SET_3:  rd_data = {16'h0, enable_reg[127:96]};
            ADDR_PEND_SET_0:    rd_data = pend_in[31:0];
            ADDR_PEND_SET_1:    rd_data = pend_in[63:32];
            ADDR_IRQ_COUNT_SEL: rd_data = {29'b0, irq_count_sel_r};
            ADDR_PRIO_WIDTH_SEL:rd_data = {30'b0, prio_width_sel_r};
            ADDR_WINNER_ID:     rd_data = {25'b0, winner_id};
            ADDR_WINNER_PRIO:   rd_data = {24'b0, winner_prio};
            default: begin
                if (rd_addr >= ADDR_PRIO_BASE && rd_addr < (ADDR_PRIO_BASE + 128))
                    rd_data = {24'b0, prio_reg[rd_addr - ADDR_PRIO_BASE]};
                else
                    rd_data = 32'h0000;
            end
        endcase
    end

    // ── output assignments ────────────────────────────────
    assign enable_out       = enable_reg;
    assign pend_sw_set      = pend_set_reg;
    assign pend_sw_clear    = pend_clr_reg;
    assign pend_sw_set_en   = pend_set_wr;
    assign pend_sw_clear_en = pend_clr_wr;
    assign prio_wr_idx      = prio_wr_idx_r;
    assign prio_wr_data     = prio_reg[prio_wr_idx_r];
    assign prio_wr_en       = prio_wr;
    assign irq_count_sel    = irq_count_sel_r;
    assign prio_width_sel   = prio_width_sel_r;

endmodule