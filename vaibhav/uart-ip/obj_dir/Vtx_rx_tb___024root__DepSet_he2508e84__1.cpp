// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb__Syms.h"
#include "Vtx_rx_tb___024root.h"

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_comb__TOP__1(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_comb__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry 
        = (0x10U <= ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
                     + (0xfU & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val))));
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_carry))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_carry 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry;
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider 
        = (0xffffU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                      + ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry)
                          ? 1U : 0U)));
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider)));
    }
}
