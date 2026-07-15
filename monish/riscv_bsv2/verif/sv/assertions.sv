// assertions.sv -- global SVA properties bound to the design. These are
// DUT-level invariants for the generated core; bind them to mkSoC_wrapper /
// generated RTL signals once the port names are known. Kept as standalone
// checkable properties so they document the intended invariants.
`ifndef ASSERTIONS_SV
`define ASSERTIONS_SV

// Reusable assertion module: instantiate with the relevant signals wired in.
module core_assertions (
  input logic clk,
  input logic rst_n,
  input logic        retire,     // core.retired
  input logic [31:0] pc,         // committed PC (if exposed)
  input logic        pc_valid
);
  default clocking cb @(posedge clk); endclocking
  default disable iff (!rst_n);

  // PC must be 4-byte aligned whenever it is valid (RV32, no C extension).
  a_pc_align: assert property (pc_valid |-> (pc[1:0] == 2'b00))
    else $error("[CORE] misaligned PC 0x%08h @%0t", pc, $time);

  // Retire is a pulse: never X.
  a_retire_known: assert property (!$isunknown(retire))
    else $error("[CORE] retire is X @%0t", $time);
endmodule

`endif
