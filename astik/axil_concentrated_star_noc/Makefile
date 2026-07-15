# ==============================================================================
# AXI-Lite Concentrated Star NoC — Verilator build/run/coverage flow
#   make            : lint + build + run + coverage report
#   make build      : verilate + compile
#   make run        : run the self-checking testbench (writes logs/coverage.dat)
#   make cov        : coverage % report + line-annotated sources in logs/annotated
#   make waves      : re-run with VCD tracing -> logs/waves.vcd
#   make lint       : verilator -Wall lint only
#   make clean
# ==============================================================================
TOP      := axil_star_top
RTL      := rtl/axil_periph_reg.sv rtl/axil_concentrator.sv rtl/axil_hub.sv \
            rtl/axil_star_cov.sv rtl/axil_star_top.sv
TB       := tb/tb_main.cpp
VERILATOR ?= verilator
VFLAGS   := --cc --exe --build -j 0 -O2 -Wall --assert --coverage --trace \
            --x-assign fast --x-initial fast --top-module $(TOP)
BIN      := obj_dir/V$(TOP)

.PHONY: all build run cov waves lint clean
all: build run cov

build: $(BIN)

$(BIN): $(RTL) $(TB) Makefile
	$(VERILATOR) $(VFLAGS) $(RTL) $(TB) -o V$(TOP)

run: $(BIN)
	@mkdir -p logs
	$(BIN)

waves: $(BIN)
	@mkdir -p logs
	$(BIN) +trace
	@echo "waveform: logs/waves.vcd"

cov:
	@mkdir -p logs/annotated
	verilator_coverage --annotate logs/annotated --annotate-min 1 logs/coverage.dat > /dev/null
	python3 scripts/cov_report.py logs/coverage.dat --min-pct 99

lint:
	$(VERILATOR) --lint-only -Wall --top-module $(TOP) $(RTL)

clean:
	rm -rf obj_dir logs
