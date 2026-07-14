// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb___024root.h"

void Vtx_rx_tb___024root___eval_triggers__ico(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___eval_ico(Vtx_rx_tb___024root* vlSelf);

bool Vtx_rx_tb___024root___eval_phase__ico(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtx_rx_tb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtx_rx_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtx_rx_tb___024root___eval_act(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtx_rx_tb___024root___eval_triggers__act(Vtx_rx_tb___024root* vlSelf);

bool Vtx_rx_tb___024root___eval_phase__act(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtx_rx_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtx_rx_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtx_rx_tb___024root___eval_nba(Vtx_rx_tb___024root* vlSelf);

bool Vtx_rx_tb___024root___eval_phase__nba(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtx_rx_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__ico(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__nba(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__act(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtx_rx_tb___024root___eval(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    vlSelfRef.__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_en 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en;
    vlSelfRef.__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_addr 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr;
    vlSelfRef.__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_data 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtx_rx_tb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tx_rx_tb.v", 19, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtx_rx_tb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtx_rx_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tx_rx_tb.v", 19, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtx_rx_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tx_rx_tb.v", 19, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtx_rx_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtx_rx_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtx_rx_tb___024root___eval_debug_assertions(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.rx & 0xfeU))) {
        Verilated::overWidthError("rx");}
    if (VL_UNLIKELY((vlSelfRef.s_awvalid & 0xfeU))) {
        Verilated::overWidthError("s_awvalid");}
    if (VL_UNLIKELY((vlSelfRef.s_wvalid & 0xfeU))) {
        Verilated::overWidthError("s_wvalid");}
    if (VL_UNLIKELY((vlSelfRef.s_wstrb & 0xf0U))) {
        Verilated::overWidthError("s_wstrb");}
    if (VL_UNLIKELY((vlSelfRef.s_bready & 0xfeU))) {
        Verilated::overWidthError("s_bready");}
    if (VL_UNLIKELY((vlSelfRef.s_arvalid & 0xfeU))) {
        Verilated::overWidthError("s_arvalid");}
    if (VL_UNLIKELY((vlSelfRef.s_rready & 0xfeU))) {
        Verilated::overWidthError("s_rready");}
}
#endif  // VL_DEBUG
