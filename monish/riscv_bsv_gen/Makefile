
# Makefile -- RV32IM SoC build flow (Bluespec -> Verilog -> SV verification).
# Requires: bsc (Bluespec compiler) for sim/verilog targets; iverilog or
# verilator for the SV env; a RISC-V-free flow otherwise.
# the authoring environment, so these targets document the exact invocations.


BSC       ?= bsc
IVERILOG  ?= iverilog
VVP       ?= vvp

# Search path across all packages.
BDIR      = build
VDIR      = verilog
BSC_PATH  = -p +:src/pkg:src/core:src/bus:src/mem:src/debug:src/clk:top
BSCFLAGS  = -aggressive-conditions -check-assert -show-schedule \
            -keep-fires -bdir $(BDIR) -simdir $(BDIR) -info-dir $(BDIR) $(BSC_PATH)

# Test selection macro for the Bluespec TB (default = alu).
TEST      ?= ALU
TESTDEF   = $(if $(filter-out ALU,$(TEST)),-D TEST_$(TEST),)

.PHONY: all sim run verilog verif clean dirs progs

all: sim

dirs:
	@mkdir -p $(BDIR) $(VDIR)

# ---- 1) Bluesim: elaborate + link the integration testbench ----
# Example: make sim TEST=MULDIV
sim: dirs
	$(BSC) $(BSCFLAGS) -sim -g mkTb -u $(TESTDEF) top/tb.bsv
	$(BSC) $(BSCFLAGS) -sim -e mkTb -o $(BDIR)/tb.out $(BDIR)/*.ba

run: sim
	$(BDIR)/tb.out

# Run every embedded test program in turn.
run-all: dirs
	@for t in ALU FORWARD LOADUSE BRANCH MULDIV TRAP ILLEGAL; do \
	  echo "=== $$t ==="; \
	  $(MAKE) --no-print-directory run TEST=$$t || exit 1; \
	done

# ---- 2) Generate synthesizable Verilog for the SoC ----
# The '-g mkSoC' boundary is the synthesis top. Submodules with (* synthesize *)
# are emitted as separate .v files under $(VDIR).
verilog: dirs
	$(BSC) $(BSCFLAGS) -verilog -vdir $(VDIR) -g mkSoC -u top/SoC.bsv
	@echo "Generated Verilog in $(VDIR)/ ; inspect $(VDIR)/mkSoC.v port list to"
	@echo "finalize verif/wrappers/mkSoC_wrapper.sv."

# ---- 3) SystemVerilog verification env (against reference model or gen RTL) ----
# Verilator is used (full SV interface + assertion support). Runs the AXI4-Lite
# verification IP (BFM + SVA protocol checker + self-checking scoreboard) against
# the reference memory model; swap in the generated mkBramMem via mkSoC_wrapper
# to verify the bsc RTL (see README).
VERILATOR ?= verilator
VLFLAGS = --binary -sv --timing --assert -Wno-TIMESCALEMOD -Wno-IMPLICITSTATIC \
          -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-UNOPTFLAT
verif:
	$(VERILATOR) $(VLFLAGS) --top-module tb_top verif/sv/*.sv \
	  -o axi_tb --Mdir $(BDIR)/obj_verif
	$(BDIR)/obj_verif/axi_tb

# Regenerate the embedded test-program hex images.
progs:
	@cd verif/mem && for p in alu forward loaduse branch muldiv trap illegal; do \
	  python3 asm.py $$p > test_$$p.hex; done
	@echo "wrote verif/mem/test_*.hex"

clean:
	rm -rf $(BDIR) $(VDIR)
