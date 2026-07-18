#!/usr/bin/env bash
# Convenience wrapper mirroring the Makefile targets.
#   ./build.sh sim [TEST]   -> Bluesim (needs bsc)
#   ./build.sh verilog      -> generate Verilog (needs bsc)
#   ./build.sh verif        -> SystemVerilog env (needs verilator)
#   ./build.sh progs        -> regenerate test hex
set -e
cmd="${1:-verif}"
case "$cmd" in
  sim)     make run TEST="${2:-ALU}" ;;
  verilog) make verilog ;;
  verif)   make verif ;;
  progs)   make progs ;;
  *)       echo "usage: $0 {sim [TEST]|verilog|verif|progs}"; exit 1 ;;
esac
