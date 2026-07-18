// scoreboard.sv -- self-checking scoreboard. Maintains a reference memory model
// mirroring every AXI write, and checks that reads return the expected value.
// Also provides expect_eq for directed golden checks. Tracks pass/fail counts.
`ifndef SCOREBOARD_SV
`define SCOREBOARD_SV

module scoreboard #(parameter WORDS = 16384);
  logic [31:0] ref_mem [0:WORDS-1];
  int passes = 0;
  int fails  = 0;

  localparam int unsigned AWBITS = $clog2(WORDS);
  function automatic int unsigned widx(input logic [31:0] byte_addr);
    return (byte_addr >> 2) & ((1 << AWBITS) - 1);
  endfunction

  // Mirror a write into the reference model (byte-strobe aware).
  task automatic obs_write(input logic [31:0] addr, input logic [31:0] data,
                           input logic [3:0] strb);
    int unsigned i = widx(addr);
    logic [31:0] cur = ref_mem[i];
    for (int b = 0; b < 4; b++)
      if (strb[b]) cur[b*8 +: 8] = data[b*8 +: 8];
    ref_mem[i] = cur;
  endtask

  // Check an observed read against the reference model.
  task automatic obs_read(input logic [31:0] addr, input logic [31:0] got);
    logic [31:0] exp = ref_mem[widx(addr)];
    if (got === exp) begin passes++; end
    else begin fails++; $error("[SCB] read mismatch @0x%08h got=0x%08h exp=0x%08h", addr, got, exp); end
  endtask

  // Directed golden check.
  task automatic expect_eq(input string name, input logic [31:0] got, input logic [31:0] exp);
    if (got === exp) begin passes++; $display("  ok: %s = 0x%08h", name, got); end
    else begin fails++; $error("[SCB] %s got=0x%08h exp=0x%08h", name, got, exp); end
  endtask

  task automatic init_word(input int unsigned i, input logic [31:0] v);
    ref_mem[i] = v;
  endtask

  task automatic report(input string test);
    if (fails == 0) $display("PASS[%s]: %0d checks", test, passes);
    else            $display("FAIL[%s]: %0d fails / %0d checks", test, fails, passes+fails);
  endtask
endmodule

`endif
