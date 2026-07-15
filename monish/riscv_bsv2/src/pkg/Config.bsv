// ============================================================================
// Config.bsv  --  Global compile-time parameters for the RV32IM SoC
// ----------------------------------------------------------------------------
// Everything here is a *static* (elaboration-time) constant.  Keeping the
// parameters in one tiny package means the whole design can be re-targeted
// (different memory size, reset vector, clock ratio) by editing a single file,
// and there are no circular dependencies because this package imports nothing.
//
// Design decisions:
//   * XLEN is fixed at 32 (RV32).  It is exposed as a numeric type so that
//     Bit#(XLEN) and friends elaborate correctly.
//   * Memory is word-addressed internally (one 32-bit word per BRAM entry) but
//     the processor issues *byte* addresses on AXI; the memory model shifts by
//     2 to index the word array.  MEM_WORDS therefore bounds the byte address
//     space to MEM_WORDS*4 bytes.
//   * The debug clock is slower than the CPU clock.  We do not hard-code the
//     ratio in RTL (the two clocks are supplied externally, see ClockReset.bsv
//     and top/tb.bsv); DEBUG_CLK_DIV is only used by the testbench to derive a
//     slower clock from the fast one.
// ============================================================================
package Config;

// ---- Data path width -------------------------------------------------------
typedef 32 XLEN;                         // register / data width in bits
Integer xlen = valueOf(XLEN);

// ---- Reset / trap vectors --------------------------------------------------
// Reset vector is 0x0 per the approved plan.  On any exception the core jumps
// to mtvec (which software programs); there is no separate hard-wired trap
// vector here.
Bit#(XLEN) reset_vector = 32'h0000_0000;

// ---- Memory sizing ---------------------------------------------------------
// 16 K words = 64 KiB of unified instruction+data memory behind AXI4-Lite.
// Large enough for the embedded self-test programs, small enough to simulate
// quickly.  Must be a power of two so the address decode is a simple mask.
typedef 16384 MEM_WORDS;                 // number of 32-bit words
Integer mem_words = valueOf(MEM_WORDS);
Integer mem_bytes = mem_words * 4;

// Number of low byte-address bits that index *within* the memory (log2 of the
// byte size).  Addresses are masked to this many bits before word indexing so
// that stray high bits (e.g. an uninitialised PC) wrap rather than crash sim.
typedef TLog#(TMul#(MEM_WORDS, 4)) MEM_ADDR_BITS;   // = log2(mem_bytes)

// ---- Testbench-only clock ratio -------------------------------------------
// The debug clock runs at CPU/DEBUG_CLK_DIV.  Used only by top/tb.bsv when it
// synthesises the slow clock; the synthesizable RTL treats the two clocks as
// independent inputs and never assumes a ratio.
Integer debug_clk_div = 4;

// ---- Watchdog --------------------------------------------------------------
// Upper bound on simulated CPU cycles before the testbench declares a hang.
Integer watchdog_cycles = 200000;

endpackage : Config
