# AXI-Lite Concentrated Star NoC — RTL + Verilator Verification

RTL implementation of **Hybrid Architecture #1** from the internship proposal
(*AXI-Lite Star hub + CMesh-style concentrators + crossbar-style single-stage
decode*), verified with Verilator to **100% line, branch, toggle and
functional coverage** with a self-checking testbench.

## Verified results (this exact code, Verilator v5.026)

```
 transactions : 9782 writes, 8760 reads
 checks       : 18542, mismatches: 0        -> PASS
 FUNCTIONAL     : 153/153  = 100.00%
 code / line    : 235/235  = 100.00%
 code / branch  : 330/330  = 100.00%
 code / toggle  : 4746/4746 = 100.00%
```

## Architecture

```
 M0 ─┐                        ┌─ concentrator 0 ── periph 0..3
     ├── star hub (decode +   ├─ concentrator 1 ── periph 0..3
 M1 ─┘   RR arb, txn-locked)  ├─ concentrator 2 ── periph 0..3
                              └─ concentrator 3 ── periph 0..3
```

* **Hub** (`axil_hub.sv`): single-stage combinational decode + round-robin
  arbitration (crossbar-style — uncontended requests are granted in the same
  cycle). A grant is transaction-locked: write port held from AW-grant to B
  handshake, read port from AR-grant to R handshake (max +2 cycles under
  contention, 3-cycle worst case). Write and read paths are fully independent.
  Out-of-range addresses get DECERR from a per-master error responder without
  entering the fabric.
* **Concentrator** (`axil_concentrator.sv`): CMesh-style 1:4 mux/NI, purely
  combinational routing (0 extra hops); W/B/R channels steered by a selector
  registered at the AW/AR handshake.
* **Peripheral** (`axil_periph_reg.sv`): 256 B window; ID reg (RO, write ->
  SLVERR), 15 R/W registers with byte strobes, protected region (SLVERR),
  unmapped region (DECERR). 1-cycle response => the spec's 2-cycle average,
  1-cycle uncontended decode, 3-cycle contended worst case.

### Address map (matches slide 2/3 spec: 2–3 masters, ≤20 peripherals)

| bits      | meaning                                    |
|-----------|--------------------------------------------|
| `[31:12]` | must be 0, else hub DECERR                 |
| `[11:10]` | concentrator select (4)                    |
| `[9:8]`   | peripheral select within concentrator (4)  |
| `[7:0]`   | peripheral offset (`[5:2]` = register idx) |

Defaults `NM=2, NC=4, NP=4` (16 slaves); all parameterized.

### Assumption
AXI4-Lite masters with at most one outstanding write and one outstanding read
each (standard for AXI-Lite). Reads and writes from the same master may run
concurrently.

## File layout

```
rtl/axil_hub.sv           star hub: decode, RR arbiter, DECERR responders
rtl/axil_concentrator.sv  1:4 concentrator
rtl/axil_periph_reg.sv    register-file peripheral
rtl/axil_star_top.sv      top level (hub + 4 conc + 16 periph + cov)
rtl/axil_star_cov.sv      SVA cover-property functional coverage observer
tb/tb_main.cpp            C++ TB: 2 master BFMs, ref model, scoreboard,
                          per-bin functional coverage (VL_COVER_INSERT)
scripts/cov_report.py     coverage.dat -> per-category/per-file % report
Makefile                  lint / build / run / cov / waves targets
```

## How to run

1. Install Verilator (5.x recommended) and g++/make/python3:
   `sudo apt install verilator build-essential python3`
   (or build from source: https://verilator.org/guide/latest/install.html)
2. `make` — lints/builds with `-Wall --assert --coverage`, runs the
   self-checking TB (exit code 1 on any mismatch), then prints the coverage
   report and fails if line or functional coverage < 99%.
3. Useful targets:
   * `make waves` — re-run with VCD tracing -> `logs/waves.vcd` (GTKWave)
   * `make cov`   — report + line-annotated sources in `logs/annotated/`
   * `make lint`  — `verilator -Wall` lint only

## Verification methodology

**Stimulus** (5 phases, seeded & reproducible):
P1 full route cross (every master → every slave/register, 0x0000_0000 /
0xFFFF_FFFF / random data for toggle closure); P2 error stimulus (hub DECERR
walking every upper address bit, peripheral SLVERR/DECERR offsets, RO-reg
write); P3 channel ordering (W-before-AW, AW-before-W, same-cycle) and B/R
backpressure; P4 same-target contention with alternating round-robin winners;
P5 constrained-random (8000 write + 8000 read txns, randomized address
class / data / wstrb / prot / valid–ready delays, concurrent engines on both
masters).

**Checking**: reference model predicts every BRESP/RRESP and read data
(register mirror honoring wstrb; ID and error-region constants). 18,542
checks, 0 mismatches. Same-master same-word write/read pairs are never issued
concurrently (RTL commits at AW+W accept, model at B handshake — a benign
model-timing race, not an RTL bug).

**Coverage** (`--coverage` = line + branch + toggle + user):
* *Code*: 100% line / branch / toggle on all four RTL files. Toggle closure
  came from data walking patterns, upper-address-bit walking, random strobes
  and prot wiggling. One real cleanup fell out of coverage: the peripheral's
  original W-before-AW capture flop (`w_pend`) was unreachable because the hub
  only forwards W after the AW grant — the dead logic was removed rather than
  waived. That is exactly what coverage is for.
* *Functional*: 153 points, 100%.
  * 25 SVA `cover property` points in `axil_star_cov.sv` (routes, response
    types, contention, parallelism, orderings, stalls, back-to-back).
  * 128 per-bin TB points (`v_user/tb_func`): full master×slave×{wr,rd} route
    cross (64), response type × master (12), all 16 wstrb values × master
    (32), contention/parallel/ordering/backpressure/back-to-back bins.
    These are inserted with `VL_COVER_INSERT(..., "per_instance", "1")`
    because Verilator otherwise merges same-source-line cover points across
    generate unrolls (hierarchy wildcarding), which would silently collapse a
    64-bin cross into one bin — worth mentioning in your report.

## Notes for the internship report

* Uncontended access: AW/AR accepted the same cycle (combinational grant) —
  the crossbar-style "1-cycle decode" claim from the deck.
* Average 2-cycle latency: 1 cycle decode/arb + 1 cycle peripheral response.
* Contended worst case 3 cycles: loser waits for the txn-lock release.
* Wire complexity O(M + N/C_g): the hub sees 4 concentrator ports, not 16
  peripheral ports.
