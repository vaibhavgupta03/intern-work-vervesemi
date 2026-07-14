// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTX_RX_TB__SYMS_H_
#define VERILATED_VTX_RX_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtx_rx_tb.h"

// INCLUDE MODULE CLASSES
#include "Vtx_rx_tb___024root.h"
#include "Vtx_rx_tb_generic_register__Rz1.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtx_rx_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtx_rx_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtx_rx_tb___024root            TOP;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr;
    Vtx_rx_tb_generic_register__Rz1 TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr;

    // COVERAGE
    uint32_t __Vcoverage[1415];

    // CONSTRUCTORS
    Vtx_rx_tb__Syms(VerilatedContext* contextp, const char* namep, Vtx_rx_tb* modelp);
    ~Vtx_rx_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
