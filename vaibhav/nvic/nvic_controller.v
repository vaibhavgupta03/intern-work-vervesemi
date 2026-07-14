module nvic_controller #(
    parameter NUM_SOURCES = 128,
    parameter PRIO_WIDTH  = 8
)(
    input  wire                              clk,
    input  wire                              rst,

    // from priority encoder
    input  wire [$clog2(NUM_SOURCES)-1:0]    winner_id,
    input  wire [PRIO_WIDTH-1:0]             winner_prio,
    input  wire                              irq_pending,

    // CPU interface
    input  wire                              cpu_claim,      // CPU reads this → accepts interrupt
    input  wire                              cpu_complete,   // CPU writes this → done handling
    input  wire [$clog2(NUM_SOURCES)-1:0]    cpu_complete_id,// which IRQ is being completed

    // output to CPU
    output reg                               irq_to_cpu,     // interrupt request line
    output reg  [$clog2(NUM_SOURCES)-1:0]    irq_id_to_cpu,  // which IRQ to handle
    output reg  [PRIO_WIDTH-1:0]             irq_prio_to_cpu,

    // output to pend_array — clear bit on claim
    output reg                               pend_clear_en,
    output reg  [NUM_SOURCES-1:0]            pend_clear_mask,

    // nesting support — current running priority
    // (used to suppress lower priority IRQs)
    output reg  [PRIO_WIDTH-1:0]             current_prio
);

    // nesting stack — up to 8 levels deep (simple for now)
    localparam STACK_DEPTH = 8;
    reg [PRIO_WIDTH-1:0]              prio_stack [0:STACK_DEPTH-1];
    reg [$clog2(NUM_SOURCES)-1:0]     id_stack   [0:STACK_DEPTH-1];
    reg [$clog2(STACK_DEPTH)-1:0]     stack_ptr;

    localparam IDLE    = 2'd0;
    localparam PENDING = 2'd1;
    localparam ACTIVE  = 2'd2;

    reg [1:0] state;
    integer   i;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state           <= IDLE;
            irq_to_cpu      <= 1'b0;
            irq_id_to_cpu   <= 0;
            irq_prio_to_cpu <= 8'hFF;
            pend_clear_en   <= 1'b0;
            pend_clear_mask <= 0;
            current_prio    <= 8'hFF;
            stack_ptr       <= 0;
            for (i = 0; i < STACK_DEPTH; i = i + 1) begin
                prio_stack[i] <= 8'hFF;
                id_stack[i]   <= 0;
            end
        end
        else begin
            pend_clear_en   <= 1'b0;
            pend_clear_mask <= 0;

            case (state)

                IDLE: begin
                    irq_to_cpu <= 1'b0;
                    if (irq_pending && (winner_prio < current_prio)) begin
                        // new interrupt has higher priority than current
                        state           <= PENDING;
                        irq_id_to_cpu   <= winner_id;
                        irq_prio_to_cpu <= winner_prio;
                        irq_to_cpu      <= 1'b1;
                    end
                end

                PENDING: begin
                    // waiting for CPU to claim the interrupt
                    if (cpu_claim) begin
                        // CPU accepted — clear the pending bit
                        pend_clear_en              <= 1'b1;
                        pend_clear_mask            <= (1 << irq_id_to_cpu);

                        // push current priority onto stack
                        prio_stack[stack_ptr]      <= current_prio;
                        id_stack[stack_ptr]        <= irq_id_to_cpu;
                        stack_ptr                  <= stack_ptr + 1;
                        current_prio               <= irq_prio_to_cpu;

                        irq_to_cpu <= 1'b0;
                        state      <= ACTIVE;
                    end

                    // if a higher priority IRQ arrives while waiting, update
                    if (irq_pending && (winner_prio < irq_prio_to_cpu)) begin
                        irq_id_to_cpu   <= winner_id;
                        irq_prio_to_cpu <= winner_prio;
                    end
                end

                ACTIVE: begin
                    // IRQ being handled by CPU
                    // check if a higher priority preemptor arrived
                    if (irq_pending && (winner_prio < current_prio)) begin
                        state           <= PENDING;
                        irq_id_to_cpu   <= winner_id;
                        irq_prio_to_cpu <= winner_prio;
                        irq_to_cpu      <= 1'b1;
                    end

                    // CPU says it's done
                    if (cpu_complete) begin
                        // pop the stack
                        if (stack_ptr > 0) begin
                            stack_ptr    <= stack_ptr - 1;
                            current_prio <= prio_stack[stack_ptr - 1];
                        end
                        else begin
                            current_prio <= 8'hFF;   // back to no-interrupt priority
                        end
                        state <= IDLE;
                    end
                end

            endcase
        end
    end

endmodule