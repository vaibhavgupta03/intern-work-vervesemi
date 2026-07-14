// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb.h"
#include "Vtx_rx_tb___024root.h"
#include "Vtx_rx_tb_generic_register__Rz1.h"

// FUNCTIONS
Vtx_rx_tb__Syms::~Vtx_rx_tb__Syms()
{
}

Vtx_rx_tb__Syms::Vtx_rx_tb__Syms(VerilatedContext* contextp, const char* namep, Vtx_rx_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_clk")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_dlf")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_dlh")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_dll")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_ier")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_mcr")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_mode")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_thr")}
    , TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr{this, Verilated::catName(namep, "tx_rx_tb.dut.u_regfile.u_txthr")}
{
        // Check resources
        Verilated::stackCheck(61);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr;
    TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr = &TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.__Vconfigure(true);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.__Vconfigure(false);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.__Vconfigure(false);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.__Vconfigure(false);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.__Vconfigure(false);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.__Vconfigure(false);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.__Vconfigure(false);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.__Vconfigure(false);
    TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.__Vconfigure(false);
}
