# RV32IM Processor in Bluespec SystemVerilog

An industry-style RISC-V **RV32IM** (base integer + M extension) core: classic
in-order **5-stage pipeline** (IF/ID/EX/MEM/WB) with full forwarding, load-use
hazard interlock and branch flush; multi-cycle iterative multiply/divide; a
minimal **M-mode** CSR/trap unit; **AXI4-Lite** memory; a **dual-clock**
(fast CPU + slower Debug) simplified RISC-V debug module with proper CDC; one
Bluespec integration testbench; and a **SystemVerilog verification environment**.

Machine-mode only. No F/C/A/V extensions, no S/U modes, no interrupts, no virtual
memory, no PMP.

## Layout
```
src/pkg/   Config, Types, ISADefs          shared params, types, encodings
src/core/  ProgramCounter InstFetch InstMemIfc Decoder ImmGen RegFile ALU MulDiv
           BranchJump ControlUnit HazardUnit ForwardingUnit DataMemIfc CSRFile Core
src/bus/   AXI4Lite, AXI4LiteXbar          channel types + 3->1 arbiter
src/mem/   BramMem                          AXI4-Lite slave over BRAM (+ backdoor)
src/debug/ DebugCDC, DebugModule           CDC synchronizers + abstract-cmd engine
src/clk/   ClockReset                       reset synchronizer helper
top/       SoC   (-g mkSoC boundary)        Core+Mem+Debug+Xbar+CDC
top/       tb.bsv                           the ONE Bluespec integration testbench
verif/sv/  axi4lite_if axi4lite_mem axi4lite_checker driver_axi scoreboard
           assertions tb_top                SystemVerilog verification env
verif/mem/ asm.py + test_*.hex             test-program assembler + images
verif/wrappers/ mkSoC_wrapper.sv            SV wrapper for the generated RTL
```

## Microarchitecture notes
- **Pipeline latches** are EHRs (CRegs): the producing stage writes a higher EHR
  port and the consuming stage reads/bubbles port 0, giving defined same-cycle
  precedence. Plain multi-writer Regs/Wires would conflict in bsc; this is the
  correct BSV idiom. See the header of `src/core/Core.bsv`.
- **Register file** is EHR-based: WB write (port 0) is visible to a same-cycle ID
  read (port 2); debug write is port 1. x0 reads 0.
- **Forwarding** (combinational) prefers EX/MEM over MEM/WB. **Load-use** stalls
  one cycle. **Branch/jump** resolves in EX and flushes the front end.
- **Mul/Div** is a multi-cycle FSM (`start`/`busy`/`done`/`result`) that stalls
  the front end while running; `mdInFlight` prevents re-issue.
- **CSR/trap**: exceptions are detected per stage, carried in `TrapInfo` through
  the latches, and taken **precisely in WB** (set mepc/mcause/mtval, update
  mstatus, redirect to mtvec). `MRET` restores mstatus and jumps to mepc. CSR
  writes commit in EX (in-order, not forwarded). CSR file uses EHR port ordering
  trap > explicit-write > counter-tick.
- **Debug**: abstract commands (halt/resume/step, GPR R/W, mem R/W) enter on the
  slow Debug clock, cross to the CPU domain via SyncFIFO/SyncBit, and drive the
  core. The core quiesces at a safe point before reporting halted.

## Toolchain
The RTL is written to be compiled by the Bluespec compiler (`bsc`). `bsc` and a
Verilog simulator were **not installed in the authoring environment**, so the
Bluespec `sim`/`verilog` targets are documented (exact invocations in the
`Makefile`) but were not executed here. The **SystemVerilog verification env is
runnable** and was validated with Verilator (installed via Homebrew).

## Build & run

### 1) Bluespec integration testbench (needs `bsc` + Bluesim)
```
make run                 # default TEST=ALU
make run TEST=MULDIV     # ALU FORWARD LOADUSE BRANCH MULDIV TRAP ILLEGAL
make run-all             # every embedded program
```
Each program runs, halts via the debug interface, and self-checks memory/GPR
results through debug; expected output is `PASS[<test>]`. A watchdog prints
`FAIL[...]: watchdog` on a hang.

### 2) Generate synthesizable Verilog (needs `bsc`)
```
make verilog             # emits verilog/mkSoC.v (+ submodule .v files)
```
Then read the port list at the top of `verilog/mkSoC.v` and finalize
`verif/wrappers/mkSoC_wrapper.sv` (bsc uses `EN_`/`RDY_`/method-arg port naming;
the wrapper maps these to clean AXI4-Lite + debug-bus signals).

### 3) SystemVerilog verification environment (Verilator — runs today)
```
make verif               # PASS[axi-env]
```
Runs the AXI4-Lite verification IP against the reference memory model:
- `driver_axi` — AXI4-Lite master BFM (blocking read/write tasks)
- `axi4lite_checker` — protocol checks (VALID/payload stability until READY,
  no response without an accepted request, no X on control signals)
- `scoreboard` — reference-memory model + directed golden checks, PASS/FAIL
- `axi4lite_mem` — reference slave (word-addressed, byte-strobed, `$readmemh`)

To verify the **generated** RTL, wrap `mkBramMem` (an AXI4-Lite slave) with
`mkSoC_wrapper` and instantiate it in `tb_top` in place of `axi4lite_mem`.

### Regenerate test programs
```
make progs               # verif/mem/asm.py -> verif/mem/test_*.hex
```

## Embedded tests (`top/tb.bsv`, selected by `-D TEST_*`)
| Test     | Exercises                                                        |
|----------|-----------------------------------------------------------------|
| alu      | ADD/SUB/AND/OR/XOR/SLL/SLT + immediates                         |
| forward  | back-to-back dependent ALU ops (EX/MEM + MEM/WB forwarding)     |
| loaduse  | store→load→use (load-use interlock)                             |
| branch   | countdown loop (BNE), branch flush                              |
| muldiv   | MUL/MULH/DIV/REM incl. div-by-zero and −2³¹/−1 overflow         |
| trap     | ECALL → mtvec handler → reads mcause/mepc → MRET                |
| illegal  | illegal instruction → trap → handler → MRET                    |
All tests additionally exercise dual clocks + every debug abstract command.
```
