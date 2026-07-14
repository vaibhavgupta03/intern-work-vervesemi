// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb__Syms.h"
#include "Vtx_rx_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__ico(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtx_rx_tb___024root___eval_triggers__ico(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtx_rx_tb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vtx_rx_tb___024root___ico_sequent__TOP__0(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);

void Vtx_rx_tb___024root___eval_ico(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtx_rx_tb___024root___ico_sequent__TOP__0(vlSelf);
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk));
        Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr));
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___ico_sequent__TOP__0(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
    if (((IData)(vlSelfRef.rst) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__rst = vlSelfRef.rst;
    }
    if (((IData)(vlSelfRef.rx) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__rx))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__rx = vlSelfRef.rx;
    }
    if (((IData)(vlSelfRef.s_awvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awvalid))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awvalid 
            = vlSelfRef.s_awvalid;
    }
    if (((IData)(vlSelfRef.s_wvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wvalid))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wvalid 
            = vlSelfRef.s_wvalid;
    }
    if (((IData)(vlSelfRef.s_bready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_bready))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_bready 
            = vlSelfRef.s_bready;
    }
    if (((IData)(vlSelfRef.s_arvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_arvalid))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_arvalid 
            = vlSelfRef.s_arvalid;
    }
    if (((IData)(vlSelfRef.s_rready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rready))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rready 
            = vlSelfRef.s_rready;
    }
    if ((1U & ((IData)(vlSelfRef.s_wstrb) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)) 
               | (1U & (IData)(vlSelfRef.s_wstrb)));
    }
    if ((2U & ((IData)(vlSelfRef.s_wstrb) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)) 
               | (2U & (IData)(vlSelfRef.s_wstrb)));
    }
    if ((4U & ((IData)(vlSelfRef.s_wstrb) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)) 
               | (4U & (IData)(vlSelfRef.s_wstrb)));
    }
    if ((8U & ((IData)(vlSelfRef.s_wstrb) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wstrb)) 
               | (8U & (IData)(vlSelfRef.s_wstrb)));
    }
    if ((1U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffffffeU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (1U & vlSelfRef.s_awaddr));
    }
    if ((2U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffffffdU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (2U & vlSelfRef.s_awaddr));
    }
    if ((4U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffffffbU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (4U & vlSelfRef.s_awaddr));
    }
    if ((8U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffffff7U & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (8U & vlSelfRef.s_awaddr));
    }
    if ((0x10U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffffffefU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x10U & vlSelfRef.s_awaddr));
    }
    if ((0x20U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffffffdfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x20U & vlSelfRef.s_awaddr));
    }
    if ((0x40U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffffffbfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x40U & vlSelfRef.s_awaddr));
    }
    if ((0x80U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffffff7fU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x80U & vlSelfRef.s_awaddr));
    }
    if ((0x100U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffffeffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x100U & vlSelfRef.s_awaddr));
    }
    if ((0x200U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffffdffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x200U & vlSelfRef.s_awaddr));
    }
    if ((0x400U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffffbffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x400U & vlSelfRef.s_awaddr));
    }
    if ((0x800U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffff7ffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x800U & vlSelfRef.s_awaddr));
    }
    if ((0x1000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffffefffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x1000U & vlSelfRef.s_awaddr));
    }
    if ((0x2000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffffdfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x2000U & vlSelfRef.s_awaddr));
    }
    if ((0x4000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffffbfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x4000U & vlSelfRef.s_awaddr));
    }
    if ((0x8000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffff7fffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x8000U & vlSelfRef.s_awaddr));
    }
    if ((0x10000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffeffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x10000U & vlSelfRef.s_awaddr));
    }
    if ((0x20000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffdffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x20000U & vlSelfRef.s_awaddr));
    }
    if ((0x40000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfffbffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x40000U & vlSelfRef.s_awaddr));
    }
    if ((0x80000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfff7ffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x80000U & vlSelfRef.s_awaddr));
    }
    if ((0x100000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffefffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x100000U & vlSelfRef.s_awaddr));
    }
    if ((0x200000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffdfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x200000U & vlSelfRef.s_awaddr));
    }
    if ((0x400000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xffbfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x400000U & vlSelfRef.s_awaddr));
    }
    if ((0x800000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xff7fffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x800000U & vlSelfRef.s_awaddr));
    }
    if ((0x1000000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfeffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x1000000U & vlSelfRef.s_awaddr));
    }
    if ((0x2000000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfdffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x2000000U & vlSelfRef.s_awaddr));
    }
    if ((0x4000000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xfbffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x4000000U & vlSelfRef.s_awaddr));
    }
    if ((0x8000000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xf7ffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x8000000U & vlSelfRef.s_awaddr));
    }
    if ((0x10000000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xefffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x10000000U & vlSelfRef.s_awaddr));
    }
    if ((0x20000000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xdfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x20000000U & vlSelfRef.s_awaddr));
    }
    if ((0x40000000U & (vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0xbfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x40000000U & vlSelfRef.s_awaddr));
    }
    if (((vlSelfRef.s_awaddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr 
            = ((0x7fffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awaddr) 
               | (0x80000000U & vlSelfRef.s_awaddr));
    }
    if ((1U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffffffeU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (1U & vlSelfRef.s_wdata));
    }
    if ((2U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffffffdU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (2U & vlSelfRef.s_wdata));
    }
    if ((4U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffffffbU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (4U & vlSelfRef.s_wdata));
    }
    if ((8U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffffff7U & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (8U & vlSelfRef.s_wdata));
    }
    if ((0x10U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffffffefU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x10U & vlSelfRef.s_wdata));
    }
    if ((0x20U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffffffdfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x20U & vlSelfRef.s_wdata));
    }
    if ((0x40U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffffffbfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x40U & vlSelfRef.s_wdata));
    }
    if ((0x80U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffffff7fU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x80U & vlSelfRef.s_wdata));
    }
    if ((0x100U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffffeffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x100U & vlSelfRef.s_wdata));
    }
    if ((0x200U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffffdffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x200U & vlSelfRef.s_wdata));
    }
    if ((0x400U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffffbffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x400U & vlSelfRef.s_wdata));
    }
    if ((0x800U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffff7ffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x800U & vlSelfRef.s_wdata));
    }
    if ((0x1000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffffefffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x1000U & vlSelfRef.s_wdata));
    }
    if ((0x2000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffffdfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x2000U & vlSelfRef.s_wdata));
    }
    if ((0x4000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffffbfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x4000U & vlSelfRef.s_wdata));
    }
    if ((0x8000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffff7fffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x8000U & vlSelfRef.s_wdata));
    }
    if ((0x10000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffeffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x10000U & vlSelfRef.s_wdata));
    }
    if ((0x20000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffdffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x20000U & vlSelfRef.s_wdata));
    }
    if ((0x40000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfffbffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x40000U & vlSelfRef.s_wdata));
    }
    if ((0x80000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfff7ffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x80000U & vlSelfRef.s_wdata));
    }
    if ((0x100000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffefffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x100000U & vlSelfRef.s_wdata));
    }
    if ((0x200000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffdfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x200000U & vlSelfRef.s_wdata));
    }
    if ((0x400000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xffbfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x400000U & vlSelfRef.s_wdata));
    }
    if ((0x800000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xff7fffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x800000U & vlSelfRef.s_wdata));
    }
    if ((0x1000000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfeffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x1000000U & vlSelfRef.s_wdata));
    }
    if ((0x2000000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfdffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x2000000U & vlSelfRef.s_wdata));
    }
    if ((0x4000000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xfbffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x4000000U & vlSelfRef.s_wdata));
    }
    if ((0x8000000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xf7ffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x8000000U & vlSelfRef.s_wdata));
    }
    if ((0x10000000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xefffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x10000000U & vlSelfRef.s_wdata));
    }
    if ((0x20000000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xdfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x20000000U & vlSelfRef.s_wdata));
    }
    if ((0x40000000U & (vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0xbfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x40000000U & vlSelfRef.s_wdata));
    }
    if (((vlSelfRef.s_wdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata 
            = ((0x7fffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wdata) 
               | (0x80000000U & vlSelfRef.s_wdata));
    }
    if ((1U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffffffeU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (1U & vlSelfRef.s_araddr));
    }
    if ((2U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffffffdU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (2U & vlSelfRef.s_araddr));
    }
    if ((4U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffffffbU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (4U & vlSelfRef.s_araddr));
    }
    if ((8U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffffff7U & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (8U & vlSelfRef.s_araddr));
    }
    if ((0x10U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffffffefU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x10U & vlSelfRef.s_araddr));
    }
    if ((0x20U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffffffdfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x20U & vlSelfRef.s_araddr));
    }
    if ((0x40U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffffffbfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x40U & vlSelfRef.s_araddr));
    }
    if ((0x80U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffffff7fU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x80U & vlSelfRef.s_araddr));
    }
    if ((0x100U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffffeffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x100U & vlSelfRef.s_araddr));
    }
    if ((0x200U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffffdffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x200U & vlSelfRef.s_araddr));
    }
    if ((0x400U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffffbffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x400U & vlSelfRef.s_araddr));
    }
    if ((0x800U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffff7ffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x800U & vlSelfRef.s_araddr));
    }
    if ((0x1000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffffefffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x1000U & vlSelfRef.s_araddr));
    }
    if ((0x2000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffffdfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x2000U & vlSelfRef.s_araddr));
    }
    if ((0x4000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffffbfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x4000U & vlSelfRef.s_araddr));
    }
    if ((0x8000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffff7fffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x8000U & vlSelfRef.s_araddr));
    }
    if ((0x10000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffeffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x10000U & vlSelfRef.s_araddr));
    }
    if ((0x20000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffdffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x20000U & vlSelfRef.s_araddr));
    }
    if ((0x40000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfffbffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x40000U & vlSelfRef.s_araddr));
    }
    if ((0x80000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfff7ffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x80000U & vlSelfRef.s_araddr));
    }
    if ((0x100000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffefffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x100000U & vlSelfRef.s_araddr));
    }
    if ((0x200000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffdfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x200000U & vlSelfRef.s_araddr));
    }
    if ((0x400000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xffbfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x400000U & vlSelfRef.s_araddr));
    }
    if ((0x800000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xff7fffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x800000U & vlSelfRef.s_araddr));
    }
    if ((0x1000000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfeffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x1000000U & vlSelfRef.s_araddr));
    }
    if ((0x2000000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfdffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x2000000U & vlSelfRef.s_araddr));
    }
    if ((0x4000000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xfbffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x4000000U & vlSelfRef.s_araddr));
    }
    if ((0x8000000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xf7ffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x8000000U & vlSelfRef.s_araddr));
    }
    if ((0x10000000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xefffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x10000000U & vlSelfRef.s_araddr));
    }
    if ((0x20000000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xdfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x20000000U & vlSelfRef.s_araddr));
    }
    if ((0x40000000U & (vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0xbfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x40000000U & vlSelfRef.s_araddr));
    }
    if (((vlSelfRef.s_araddr ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr 
            = ((0x7fffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_araddr) 
               | (0x80000000U & vlSelfRef.s_araddr));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__act(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtx_rx_tb___024root___eval_triggers__act(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtx_rx_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtx_rx_tb___024root___nba_sequent__TOP__0(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb___024root___nba_sequent__TOP__1(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___nba_sequent__TOP__2(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___nba_sequent__TOP__3(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__1(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb___024root___nba_sequent__TOP__4(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___nba_comb__TOP__0(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___nba_sequent__TOP__5(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__2(Vtx_rx_tb_generic_register__Rz1* vlSelf);
void Vtx_rx_tb___024root___nba_sequent__TOP__6(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___nba_comb__TOP__1(Vtx_rx_tb___024root* vlSelf);

void Vtx_rx_tb___024root___eval_nba(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtx_rx_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll));
        Vtx_rx_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtx_rx_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtx_rx_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode));
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__1((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr));
        Vtx_rx_tb___024root___nba_sequent__TOP__4(vlSelf);
        Vtx_rx_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtx_rx_tb___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__2((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
        Vtx_rx_tb___024root___nba_sequent__TOP__6(vlSelf);
        Vtx_rx_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_sequent__TOP__0(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1;
    __Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1 = 0;
    CData/*0:0*/ __Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1;
    __Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1 = 0;
    // Body
    __Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done;
    vlSelfRef.__Vdly__s_arready = vlSelfRef.s_arready;
    vlSelfRef.__Vdly__s_rvalid = vlSelfRef.s_rvalid;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count;
    vlSelfRef.__Vdly__s_bvalid = vlSelfRef.s_bvalid;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__lcr_val 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg;
    __Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set 
        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set;
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_pass_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_fail_count = 0U;
    } else {
        if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass) {
            vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                = ((IData)(1U) + vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count);
            ++(vlSymsp->__Vcoverage[1117]);
        } else {
            ++(vlSymsp->__Vcoverage[1118]);
        }
        if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail) {
            vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                = ((IData)(1U) + vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count);
            ++(vlSymsp->__Vcoverage[1119]);
        } else {
            ++(vlSymsp->__Vcoverage[1120]);
        }
        ++(vlSymsp->__Vcoverage[1122]);
    }
    ++(vlSymsp->__Vcoverage[1123]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val = 0xe0U;
    } else {
        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_wr_en) {
            ++(vlSymsp->__Vcoverage[650]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val 
                = (0xe1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data));
        } else {
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val 
                = (0xfff9U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val));
            ++(vlSymsp->__Vcoverage[651]);
        }
        ++(vlSymsp->__Vcoverage[653]);
    }
    ++(vlSymsp->__Vcoverage[654]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val = 1U;
    } else {
        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_wr_en) {
            ++(vlSymsp->__Vcoverage[660]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val 
                = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val 
                = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val;
            ++(vlSymsp->__Vcoverage[661]);
        }
        ++(vlSymsp->__Vcoverage[663]);
    }
    ++(vlSymsp->__Vcoverage[664]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val = 4U;
    } else {
        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_wr_en) {
            ++(vlSymsp->__Vcoverage[665]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val 
                = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val 
                = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val;
            ++(vlSymsp->__Vcoverage[666]);
        }
        ++(vlSymsp->__Vcoverage[668]);
    }
    ++(vlSymsp->__Vcoverage[669]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__lcr_val = 0x18U;
    } else {
        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__lcr_wr_en) {
            ++(vlSymsp->__Vcoverage[655]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__lcr_val 
                = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__lcr_val 
                = vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val;
            ++(vlSymsp->__Vcoverage[656]);
        }
        ++(vlSymsp->__Vcoverage[658]);
    }
    ++(vlSymsp->__Vcoverage[659]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[935]);
        __Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1 = 1U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2 = 1U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[936]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1;
        __Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1 
            = vlSelfRef.rx;
    }
    ++(vlSymsp->__Vcoverage[937]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelfRef.__Vdly__s_arready = 0U;
        vlSelfRef.__Vdly__s_rvalid = 0U;
        vlSelfRef.s_rdata = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr = 0U;
    } else {
        vlSelfRef.__Vdly__s_arready = 0U;
        if (((IData)(vlSelfRef.s_arvalid) & (~ (IData)(vlSelfRef.s_rvalid)))) {
            vlSelfRef.__Vdly__s_arready = 1U;
            if ((0x10U & vlSelfRef.s_araddr)) {
                if ((8U & vlSelfRef.s_araddr)) {
                    if ((4U & vlSelfRef.s_araddr)) {
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr = 0U;
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 2U;
                    } else if ((2U & vlSelfRef.s_araddr)) {
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr = 0U;
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 2U;
                    } else if ((1U & vlSelfRef.s_araddr)) {
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr = 0U;
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 2U;
                    } else {
                        ++(vlSymsp->__Vcoverage[500]);
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr 
                            = (0x1fU & vlSelfRef.s_araddr);
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 0U;
                    }
                } else if ((1U & vlSelfRef.s_araddr)) {
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr = 0U;
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 2U;
                } else {
                    ++(vlSymsp->__Vcoverage[500]);
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr 
                        = (0x1fU & vlSelfRef.s_araddr);
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 0U;
                }
            } else if ((1U & vlSelfRef.s_araddr)) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr = 0U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 2U;
            } else {
                ++(vlSymsp->__Vcoverage[500]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr 
                    = (0x1fU & vlSelfRef.s_araddr);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp = 0U;
            }
            ++(vlSymsp->__Vcoverage[501]);
        } else {
            ++(vlSymsp->__Vcoverage[502]);
        }
        if (vlSelfRef.s_arready) {
            ++(vlSymsp->__Vcoverage[503]);
            vlSelfRef.s_rdata = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data;
            vlSelfRef.__Vdly__s_rvalid = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[504]);
        }
        if (((IData)(vlSelfRef.s_rvalid) & (IData)(vlSelfRef.s_rready))) {
            ++(vlSymsp->__Vcoverage[505]);
            vlSelfRef.__Vdly__s_rvalid = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[506]);
        }
        ++(vlSymsp->__Vcoverage[508]);
    }
    ++(vlSymsp->__Vcoverage[509]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg = 0U;
    } else if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__tx_start_pulse) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg 
            = (0x1ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data));
    } else {
        ++(vlSymsp->__Vcoverage[773]);
    }
    ++(vlSymsp->__Vcoverage[775]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1234]);
        __Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1 = 1U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2 = 1U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[1235]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1;
        __Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1 
            = vlSelfRef.tx;
    }
    ++(vlSymsp->__Vcoverage[1236]);
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1 
        = __Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1 
        = __Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1;
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff1))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff1 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_prev))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_prev 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_rresp)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_rresp 
            = ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_rresp)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_rresp)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_rresp 
            = ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_rresp)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr 
            = ((0x1eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr 
            = ((0x1dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr 
            = ((0x1bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr 
            = ((0x17U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr 
            = ((0xfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr)));
    }
    if ((1U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffffffeU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (1U & vlSelfRef.s_rdata));
    }
    if ((2U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffffffdU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (2U & vlSelfRef.s_rdata));
    }
    if ((4U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffffffbU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (4U & vlSelfRef.s_rdata));
    }
    if ((8U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffffff7U & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (8U & vlSelfRef.s_rdata));
    }
    if ((0x10U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffffffefU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x10U & vlSelfRef.s_rdata));
    }
    if ((0x20U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffffffdfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x20U & vlSelfRef.s_rdata));
    }
    if ((0x40U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffffffbfU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x40U & vlSelfRef.s_rdata));
    }
    if ((0x80U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffffff7fU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x80U & vlSelfRef.s_rdata));
    }
    if ((0x100U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffffeffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x100U & vlSelfRef.s_rdata));
    }
    if ((0x200U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffffdffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x200U & vlSelfRef.s_rdata));
    }
    if ((0x400U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffffbffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x400U & vlSelfRef.s_rdata));
    }
    if ((0x800U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffff7ffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x800U & vlSelfRef.s_rdata));
    }
    if ((0x1000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffffefffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x1000U & vlSelfRef.s_rdata));
    }
    if ((0x2000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffffdfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x2000U & vlSelfRef.s_rdata));
    }
    if ((0x4000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffffbfffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x4000U & vlSelfRef.s_rdata));
    }
    if ((0x8000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffff7fffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x8000U & vlSelfRef.s_rdata));
    }
    if ((0x10000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffeffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x10000U & vlSelfRef.s_rdata));
    }
    if ((0x20000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffdffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x20000U & vlSelfRef.s_rdata));
    }
    if ((0x40000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfffbffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x40000U & vlSelfRef.s_rdata));
    }
    if ((0x80000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfff7ffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x80000U & vlSelfRef.s_rdata));
    }
    if ((0x100000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffefffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x100000U & vlSelfRef.s_rdata));
    }
    if ((0x200000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffdfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x200000U & vlSelfRef.s_rdata));
    }
    if ((0x400000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xffbfffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x400000U & vlSelfRef.s_rdata));
    }
    if ((0x800000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xff7fffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x800000U & vlSelfRef.s_rdata));
    }
    if ((0x1000000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfeffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x1000000U & vlSelfRef.s_rdata));
    }
    if ((0x2000000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfdffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x2000000U & vlSelfRef.s_rdata));
    }
    if ((0x4000000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xfbffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x4000000U & vlSelfRef.s_rdata));
    }
    if ((0x8000000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xf7ffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x8000000U & vlSelfRef.s_rdata));
    }
    if ((0x10000000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xefffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x10000000U & vlSelfRef.s_rdata));
    }
    if ((0x20000000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xdfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x20000000U & vlSelfRef.s_rdata));
    }
    if ((0x40000000U & (vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0xbfffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x40000000U & vlSelfRef.s_rdata));
    }
    if (((vlSelfRef.s_rdata ^ vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata 
            = ((0x7fffffffU & vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rdata) 
               | (0x80000000U & vlSelfRef.s_rdata));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff1))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff1 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_prev))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev;
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_sequent__TOP__1(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val)));
    }
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_sequent__TOP__2(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count;
    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum 
        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum;
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[426]);
    } else {
        if ((1U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[363]);
        } else {
            ++(vlSymsp->__Vcoverage[364]);
        }
        if ((2U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[366]);
        } else {
            ++(vlSymsp->__Vcoverage[367]);
        }
        if ((4U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[369]);
        } else {
            ++(vlSymsp->__Vcoverage[370]);
        }
        if ((8U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[372]);
        } else {
            ++(vlSymsp->__Vcoverage[373]);
        }
        if ((0x10U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[375]);
        } else {
            ++(vlSymsp->__Vcoverage[376]);
        }
        if ((0x20U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[378]);
        } else {
            ++(vlSymsp->__Vcoverage[379]);
        }
        if ((0x40U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[381]);
        } else {
            ++(vlSymsp->__Vcoverage[382]);
        }
        if ((0x80U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[384]);
        } else {
            ++(vlSymsp->__Vcoverage[385]);
        }
        if ((0x100U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[387]);
        } else {
            ++(vlSymsp->__Vcoverage[388]);
        }
        if ((0x200U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[390]);
        } else {
            ++(vlSymsp->__Vcoverage[391]);
        }
        if ((0x400U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[393]);
        } else {
            ++(vlSymsp->__Vcoverage[394]);
        }
        if ((0x800U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[396]);
        } else {
            ++(vlSymsp->__Vcoverage[397]);
        }
        if ((0x1000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[399]);
        } else {
            ++(vlSymsp->__Vcoverage[400]);
        }
        if ((0x2000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[402]);
        } else {
            ++(vlSymsp->__Vcoverage[403]);
        }
        if ((0x4000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[405]);
        } else {
            ++(vlSymsp->__Vcoverage[406]);
        }
        if ((0x8000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[408]);
        } else {
            ++(vlSymsp->__Vcoverage[409]);
        }
        if ((0x10000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[411]);
        } else {
            ++(vlSymsp->__Vcoverage[412]);
        }
        if ((0x20000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[414]);
        } else {
            ++(vlSymsp->__Vcoverage[415]);
        }
        if ((0x40000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[417]);
        } else {
            ++(vlSymsp->__Vcoverage[418]);
        }
        if ((0x80000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[420]);
        } else {
            ++(vlSymsp->__Vcoverage[421]);
        }
        if ((0x100000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest)) {
            ++(vlSymsp->__Vcoverage[423]);
        } else {
            ++(vlSymsp->__Vcoverage[424]);
        }
        ++(vlSymsp->__Vcoverage[425]);
    }
    ++(vlSymsp->__Vcoverage[427]);
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.rst)) & 
                      (0U == VL_MODDIV_III(32, (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                                                + vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count), (IData)(0x2710U)))) 
                     & (0U < (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                              + vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count))))) {
        VL_WRITEF_NX("[SPEC SUITE] PASS=%0# FAIL=%0# ALL_PASS=%b\n",0,
                     32,vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count,
                     32,vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count,
                     1,(1U & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail))));
        ++(vlSymsp->__Vcoverage[1124]);
    } else {
        ++(vlSymsp->__Vcoverage[1125]);
    }
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1161]);
    } else {
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: Start bit was not LOW at midpoint\n",0);
            ++(vlSymsp->__Vcoverage[1126]);
        } else {
            ++(vlSymsp->__Vcoverage[1127]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: Wrong number of data bits on wire\n",0);
            ++(vlSymsp->__Vcoverage[1128]);
        } else {
            ++(vlSymsp->__Vcoverage[1129]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: Parity bit on wire does not match expected\n",0);
            ++(vlSymsp->__Vcoverage[1130]);
        } else {
            ++(vlSymsp->__Vcoverage[1131]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: Stop bit was not HIGH\n",0);
            ++(vlSymsp->__Vcoverage[1132]);
        } else {
            ++(vlSymsp->__Vcoverage[1133]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: Idle line went LOW unexpectedly\n",0);
            ++(vlSymsp->__Vcoverage[1134]);
        } else {
            ++(vlSymsp->__Vcoverage[1135]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: LCR reset value wrong (expected 0x0018)\n",0);
            ++(vlSymsp->__Vcoverage[1136]);
        } else {
            ++(vlSymsp->__Vcoverage[1137]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: FCR reset value wrong (expected 0x00E0)\n",0);
            ++(vlSymsp->__Vcoverage[1138]);
        } else {
            ++(vlSymsp->__Vcoverage[1139]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: FCR bits 1/2 did not self-clear\n",0);
            ++(vlSymsp->__Vcoverage[1140]);
        } else {
            ++(vlSymsp->__Vcoverage[1141]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: DLAB=1 did not redirect addr 0x00 to DLL\n",0);
            ++(vlSymsp->__Vcoverage[1142]);
        } else {
            ++(vlSymsp->__Vcoverage[1143]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL)) {
            VL_WRITEF_NX("[FAIL] SPEC: Reserved bits in FCR are not zero\n",0);
            ++(vlSymsp->__Vcoverage[1144]);
        } else {
            ++(vlSymsp->__Vcoverage[1145]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL)) {
            VL_WRITEF_NX("[FAIL] AXI: AWVALID dropped before AWREADY\n",0);
            ++(vlSymsp->__Vcoverage[1146]);
        } else {
            ++(vlSymsp->__Vcoverage[1147]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL)) {
            VL_WRITEF_NX("[FAIL] AXI: WVALID dropped before WREADY\n",0);
            ++(vlSymsp->__Vcoverage[1148]);
        } else {
            ++(vlSymsp->__Vcoverage[1149]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL)) {
            VL_WRITEF_NX("[FAIL] AXI: ARVALID dropped before ARREADY\n",0);
            ++(vlSymsp->__Vcoverage[1150]);
        } else {
            ++(vlSymsp->__Vcoverage[1151]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL)) {
            VL_WRITEF_NX("[FAIL] AXI: BRESP was not OKAY (2'b00)\n",0);
            ++(vlSymsp->__Vcoverage[1152]);
        } else {
            ++(vlSymsp->__Vcoverage[1153]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL)) {
            VL_WRITEF_NX("[FAIL] AXI: RRESP was not OKAY (2'b00)\n",0);
            ++(vlSymsp->__Vcoverage[1154]);
        } else {
            ++(vlSymsp->__Vcoverage[1155]);
        }
        if (VL_UNLIKELY(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL)) {
            VL_WRITEF_NX("[FAIL] AXI: RDATA was X when RVALID asserted\n",0);
            ++(vlSymsp->__Vcoverage[1156]);
        } else {
            ++(vlSymsp->__Vcoverage[1157]);
        }
        if (VL_UNLIKELY(((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass) 
                         & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail))))) {
            VL_WRITEF_NX("[PASS] All active spec checks passed this cycle\n",0);
            ++(vlSymsp->__Vcoverage[1158]);
        } else {
            ++(vlSymsp->__Vcoverage[1159]);
        }
        ++(vlSymsp->__Vcoverage[1160]);
    }
    ++(vlSymsp->__Vcoverage[1162]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1346]);
    } else {
        if ((0U == (0x18U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)))) {
            ++(vlSymsp->__Vcoverage[1343]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1344]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL = 1U;
        }
        ++(vlSymsp->__Vcoverage[1345]);
    }
    ++(vlSymsp->__Vcoverage[1347]);
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev) 
         & (~ (IData)(vlSelfRef.rst)))) {
        if ((0x18U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[1278]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1279]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_FAIL = 1U;
        }
        if ((0xe0U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val))) {
            ++(vlSymsp->__Vcoverage[1280]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1281]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_FAIL = 1U;
        }
        if ((1U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val))) {
            ++(vlSymsp->__Vcoverage[1282]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rxthr_rst_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1283]);
        }
        if ((4U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val))) {
            ++(vlSymsp->__Vcoverage[1284]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_timeout_rst_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1285]);
        }
        ++(vlSymsp->__Vcoverage[1286]);
    } else {
        ++(vlSymsp->__Vcoverage[1287]);
    }
    ++(vlSymsp->__Vcoverage[1288]);
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_ok))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_FAIL))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_lcr_rst_ok))) {
        ++(vlSymsp->__Vcoverage[1091]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_lcr_rst_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_rst_ok))) {
        ++(vlSymsp->__Vcoverage[1092]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_rst_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rxthr_rst_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rxthr_rst_ok))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rxthr_rst_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rxthr_rst_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_timeout_rst_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_timeout_rst_ok))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_timeout_rst_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_timeout_rst_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_lcr_rst_FAIL))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_lcr_rst_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_rst_FAIL))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_rst_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_FAIL;
    }
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev 
        = vlSelfRef.rst;
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__rst_prev))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__rst_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev;
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_sequent__TOP__3(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0;
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0 = 0;
    CData/*0:0*/ tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2;
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2 = 0;
    // Body
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_pass_count;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_fail_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val;
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest = 0U;
    } else {
        if ((0U == (7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)))) {
            ++(vlSymsp->__Vcoverage[317]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (1U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[318]);
        }
        if ((1U == (7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)))) {
            ++(vlSymsp->__Vcoverage[319]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (2U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[320]);
        }
        if ((2U == (7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)))) {
            ++(vlSymsp->__Vcoverage[321]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (4U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[322]);
        }
        if ((3U == (7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)))) {
            ++(vlSymsp->__Vcoverage[323]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (8U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[324]);
        }
        if ((4U == (7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)))) {
            ++(vlSymsp->__Vcoverage[325]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x10U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[326]);
        }
        if ((0U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 3U)))) {
            ++(vlSymsp->__Vcoverage[327]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x20U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[328]);
        }
        if ((1U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 3U)))) {
            ++(vlSymsp->__Vcoverage[329]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x40U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[330]);
        }
        if ((2U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 3U)))) {
            ++(vlSymsp->__Vcoverage[331]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x80U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[332]);
        }
        if ((0U == (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 5U)))) {
            ++(vlSymsp->__Vcoverage[333]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x100U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[334]);
        }
        if ((1U == (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 5U)))) {
            ++(vlSymsp->__Vcoverage[335]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x200U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[336]);
        }
        if ((3U == (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 5U)))) {
            ++(vlSymsp->__Vcoverage[337]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x400U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[338]);
        }
        if ((5U == (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 5U)))) {
            ++(vlSymsp->__Vcoverage[339]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x800U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[340]);
        }
        if ((7U == (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                          >> 5U)))) {
            ++(vlSymsp->__Vcoverage[341]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x1000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[342]);
        }
        if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy) 
             & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                >> 8U))) {
            ++(vlSymsp->__Vcoverage[343]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x2000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[344]);
        }
        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error) {
            ++(vlSymsp->__Vcoverage[345]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x4000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[346]);
        }
        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error) {
            ++(vlSymsp->__Vcoverage[347]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x8000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[348]);
        }
        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect) {
            ++(vlSymsp->__Vcoverage[349]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x10000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[350]);
        }
        if ((0U == (3U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                          >> 2U)))) {
            ++(vlSymsp->__Vcoverage[351]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x20000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[352]);
        }
        if ((1U == (3U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                          >> 2U)))) {
            ++(vlSymsp->__Vcoverage[353]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x40000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[354]);
        }
        if ((2U == (3U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                          >> 2U)))) {
            ++(vlSymsp->__Vcoverage[355]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x80000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[356]);
        }
        if ((3U == (3U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                          >> 2U)))) {
            ++(vlSymsp->__Vcoverage[357]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                = (0x100000U | vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest);
        } else {
            ++(vlSymsp->__Vcoverage[358]);
        }
        ++(vlSymsp->__Vcoverage[360]);
    }
    ++(vlSymsp->__Vcoverage[361]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1372]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL = 0U;
    } else {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok = 0U;
        if ((((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev) 
              & (~ (IData)(vlSelfRef.s_awvalid))) & 
             (~ (IData)(vlSelfRef.s_awready)))) {
            ++(vlSymsp->__Vcoverage[1353]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL = 1U;
        } else if (((IData)(vlSelfRef.s_awvalid) & (IData)(vlSelfRef.s_awready))) {
            ++(vlSymsp->__Vcoverage[1351]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1352]);
        }
        if ((((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev) 
              & (~ (IData)(vlSelfRef.s_wvalid))) & 
             (~ (IData)(vlSelfRef.s_wready)))) {
            ++(vlSymsp->__Vcoverage[1356]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL = 1U;
        } else if (((IData)(vlSelfRef.s_wvalid) & (IData)(vlSelfRef.s_wready))) {
            ++(vlSymsp->__Vcoverage[1354]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1355]);
        }
        if ((((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev) 
              & (~ (IData)(vlSelfRef.s_arvalid))) & 
             (~ (IData)(vlSelfRef.s_arready)))) {
            ++(vlSymsp->__Vcoverage[1359]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL = 1U;
        } else if (((IData)(vlSelfRef.s_arvalid) & (IData)(vlSelfRef.s_arready))) {
            ++(vlSymsp->__Vcoverage[1357]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1358]);
        }
        if (vlSelfRef.s_bvalid) {
            ++(vlSymsp->__Vcoverage[1360]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok = 1U;
            ++(vlSymsp->__Vcoverage[1362]);
        } else {
            ++(vlSymsp->__Vcoverage[1363]);
        }
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev 
            = vlSelfRef.s_awvalid;
        if (vlSelfRef.s_rvalid) {
            ++(vlSymsp->__Vcoverage[1364]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok = 1U;
            ++(vlSymsp->__Vcoverage[1366]);
        } else {
            ++(vlSymsp->__Vcoverage[1367]);
        }
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev 
            = vlSelfRef.s_wvalid;
        if (vlSelfRef.s_rvalid) {
            ++(vlSymsp->__Vcoverage[1369]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok = 1U;
            ++(vlSymsp->__Vcoverage[1370]);
        } else {
            ++(vlSymsp->__Vcoverage[1371]);
        }
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev 
            = vlSelfRef.s_arvalid;
        ++(vlSymsp->__Vcoverage[1373]);
    }
    ++(vlSymsp->__Vcoverage[1374]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1273]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL = 0U;
    } else {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok = 0U;
        if ((0U == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state))) {
            if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2) {
                ++(vlSymsp->__Vcoverage[1238]);
                vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1239]);
            }
            if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall) {
                ++(vlSymsp->__Vcoverage[1240]);
                vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = 1U;
                vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1241]);
            }
            ++(vlSymsp->__Vcoverage[1242]);
        } else if ((1U == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state))) {
            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
                if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
                     == (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)))) {
                    if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2) {
                        ++(vlSymsp->__Vcoverage[1244]);
                        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL = 1U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1243]);
                        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok = 1U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = 2U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count = 0U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = 0U;
                    }
                    ++(vlSymsp->__Vcoverage[1245]);
                } else {
                    ++(vlSymsp->__Vcoverage[1246]);
                }
                ++(vlSymsp->__Vcoverage[1247]);
            } else {
                ++(vlSymsp->__Vcoverage[1248]);
            }
            ++(vlSymsp->__Vcoverage[1249]);
        } else if ((2U == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state))) {
            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
                if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
                     == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                         - (IData)(1U)))) {
                    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vlvbound_h48595257__0 
                        = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2;
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = 0U;
                    if (VL_LIKELY((8U >= (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count)))) {
                        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data 
                            = (((~ ((IData)(1U) << (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count))) 
                                & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)) 
                               | (0x1ffU & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vlvbound_h48595257__0) 
                                            << (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count))));
                    }
                    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count) 
                         == ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits) 
                             - (IData)(1U)))) {
                        ++(vlSymsp->__Vcoverage[1250]);
                        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok = 1U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state 
                            = ((0U != (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                             >> 5U)))
                                ? 3U : 4U);
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count = 0U;
                    } else {
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count)));
                        ++(vlSymsp->__Vcoverage[1251]);
                    }
                    ++(vlSymsp->__Vcoverage[1252]);
                } else {
                    ++(vlSymsp->__Vcoverage[1253]);
                }
                ++(vlSymsp->__Vcoverage[1254]);
            } else {
                ++(vlSymsp->__Vcoverage[1255]);
            }
            ++(vlSymsp->__Vcoverage[1256]);
        } else if ((3U == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state))) {
            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
                if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
                     == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                         - (IData)(1U)))) {
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = 0U;
                    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2) 
                         == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit))) {
                        ++(vlSymsp->__Vcoverage[1257]);
                        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1258]);
                        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL = 1U;
                    }
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = 4U;
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count = 0U;
                    ++(vlSymsp->__Vcoverage[1259]);
                } else {
                    ++(vlSymsp->__Vcoverage[1260]);
                }
                ++(vlSymsp->__Vcoverage[1261]);
            } else {
                ++(vlSymsp->__Vcoverage[1262]);
            }
            ++(vlSymsp->__Vcoverage[1263]);
        } else if ((4U == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state))) {
            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2) {
                    ++(vlSymsp->__Vcoverage[1265]);
                } else {
                    ++(vlSymsp->__Vcoverage[1264]);
                    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL = 1U;
                }
                if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count) 
                     == ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks) 
                         - (IData)(1U)))) {
                    if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2) {
                        ++(vlSymsp->__Vcoverage[1266]);
                        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok = 1U;
                    } else {
                        ++(vlSymsp->__Vcoverage[1267]);
                    }
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = 0U;
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count = 0U;
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = 0U;
                    ++(vlSymsp->__Vcoverage[1268]);
                } else {
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count)));
                    ++(vlSymsp->__Vcoverage[1269]);
                }
                ++(vlSymsp->__Vcoverage[1270]);
            } else {
                ++(vlSymsp->__Vcoverage[1271]);
            }
            ++(vlSymsp->__Vcoverage[1272]);
        }
        ++(vlSymsp->__Vcoverage[1274]);
    }
    ++(vlSymsp->__Vcoverage[1275]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1312]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev = 0U;
    } else {
        if ((((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
              & (4U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr))) 
             & (0U != (6U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data))))) {
            ++(vlSymsp->__Vcoverage[1306]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1307]);
        }
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val;
        if (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits) {
            vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits = 0U;
            if ((0U == (6U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)))) {
                ++(vlSymsp->__Vcoverage[1308]);
                vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1309]);
                vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL = 1U;
            }
            ++(vlSymsp->__Vcoverage[1310]);
        } else {
            ++(vlSymsp->__Vcoverage[1311]);
        }
        ++(vlSymsp->__Vcoverage[1313]);
    }
    ++(vlSymsp->__Vcoverage[1314]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[1340]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set = 0U;
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before = 0U;
    } else {
        if ((((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
              & (6U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr))) 
             & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                >> 9U))) {
            ++(vlSymsp->__Vcoverage[1332]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set = 1U;
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before 
                = vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val;
        } else {
            ++(vlSymsp->__Vcoverage[1333]);
        }
        if ((((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set) 
              & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en)) 
             & (0U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)))) {
            ++(vlSymsp->__Vcoverage[1334]);
        } else {
            ++(vlSymsp->__Vcoverage[1335]);
        }
        if (((((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set) 
               & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_0_0)) 
              & (0U == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_1_0))) 
             & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                >> 9U))) {
            if (((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                 == (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_2_0))) {
                ++(vlSymsp->__Vcoverage[1336]);
                vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[1337]);
                vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL = 1U;
            }
            ++(vlSymsp->__Vcoverage[1338]);
        } else {
            ++(vlSymsp->__Vcoverage[1339]);
        }
        ++(vlSymsp->__Vcoverage[1341]);
    }
    ++(vlSymsp->__Vcoverage[1342]);
    if ((1U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1017]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffffffeU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (1U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((2U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1018]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffffffdU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (2U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((4U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1019]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffffffbU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (4U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((8U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1020]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffffff7U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (8U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x10U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1021]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffffffefU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x10U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x20U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1022]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffffffdfU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x20U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x40U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1023]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffffffbfU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x40U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x80U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1024]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffffff7fU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x80U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x100U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1025]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffffeffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x100U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x200U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1026]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffffdffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x200U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x400U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1027]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffffbffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x400U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x800U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1028]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffff7ffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x800U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x1000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1029]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffffefffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x1000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x2000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1030]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffffdfffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x2000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x4000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1031]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffffbfffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x4000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x8000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1032]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffff7fffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x8000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x10000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1033]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffeffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x10000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x20000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1034]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffdffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x20000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x40000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1035]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfffbffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x40000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x80000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1036]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfff7ffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x80000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x100000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1037]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffefffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x100000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x200000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1038]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffdfffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x200000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x400000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1039]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xffbfffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x400000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x800000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1040]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xff7fffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x800000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x1000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1041]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfeffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x1000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x2000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1042]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfdffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x2000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x4000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1043]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xfbffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x4000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x8000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1044]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xf7ffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x8000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x10000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                        ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1045]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xefffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x10000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x20000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                        ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1046]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xdfffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x20000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((0x40000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
                        ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count))) {
        ++(vlSymsp->__Vcoverage[1047]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0xbfffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x40000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if (((vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count 
          ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1048]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count 
            = ((0x7fffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count) 
               | (0x80000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count));
    }
    if ((1U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1049]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffffffeU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (1U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((2U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1050]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffffffdU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (2U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((4U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1051]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffffffbU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (4U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((8U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
               ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1052]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffffff7U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (8U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x10U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1053]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffffffefU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x10U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x20U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1054]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffffffdfU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x20U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x40U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1055]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffffffbfU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x40U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x80U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                  ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1056]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffffff7fU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x80U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x100U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1057]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffffeffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x100U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x200U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1058]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffffdffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x200U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x400U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1059]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffffbffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x400U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x800U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                   ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1060]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffff7ffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x800U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x1000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1061]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffffefffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x1000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x2000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1062]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffffdfffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x2000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x4000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1063]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffffbfffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x4000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x8000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                    ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1064]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffff7fffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x8000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x10000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1065]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffeffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x10000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x20000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1066]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffdffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x20000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x40000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1067]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfffbffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x40000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x80000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                     ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1068]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfff7ffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x80000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x100000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1069]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffefffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x100000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x200000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1070]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffdfffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x200000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x400000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1071]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xffbfffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x400000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x800000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                      ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1072]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xff7fffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x800000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x1000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1073]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfeffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x1000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x2000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1074]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfdffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x2000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x4000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1075]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xfbffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x4000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x8000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                       ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1076]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xf7ffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x8000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x10000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                        ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1077]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xefffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x10000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x20000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                        ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1078]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xdfffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x20000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((0x40000000U & (vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
                        ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count))) {
        ++(vlSymsp->__Vcoverage[1079]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0xbfffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x40000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if (((vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count 
          ^ vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1080]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count 
            = ((0x7fffffffU & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count) 
               | (0x80000000U & vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val)));
    }
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev;
    vlSelfRef.s_arready = vlSelfRef.__Vdly__s_arready;
    vlSelfRef.s_rvalid = vlSelfRef.__Vdly__s_rvalid;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set;
    if ((1U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ffffeU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (1U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((2U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ffffdU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (2U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((4U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ffffbU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (4U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((8U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ffff7U & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (8U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x10U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1fffefU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x10U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x20U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1fffdfU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x20U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x40U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1fffbfU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x40U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x80U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1fff7fU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x80U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x100U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ffeffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x100U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x200U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ffdffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x200U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x400U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ffbffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x400U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x800U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1ff7ffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x800U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x1000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1fefffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x1000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x2000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1fdfffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x2000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x4000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1fbfffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x4000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x8000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1f7fffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x8000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x10000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1effffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x10000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x20000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1dffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x20000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x40000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x1bffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x40000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x80000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0x17ffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x80000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if ((0x100000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest 
                      ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest 
            = ((0xfffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest) 
               | (0x100000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest));
    }
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[978]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_valid = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_busy = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data = 0U;
    } else {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_valid = 0U;
        if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state))) {
                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state))) {
                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 0U;
            } else {
                if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
                    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
                         == (0x3fU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                                      - (IData)(1U))))) {
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count = 0U;
                        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2) {
                            ++(vlSymsp->__Vcoverage[965]);
                        } else {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
                            ++(vlSymsp->__Vcoverage[964]);
                        }
                        if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count) 
                             == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks) 
                                 - (IData)(1U)))) {
                            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2) {
                                if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled) 
                                     & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit) 
                                        != (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit)))) {
                                    ++(vlSymsp->__Vcoverage[966]);
                                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error = 1U;
                                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data 
                                        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg;
                                } else {
                                    ++(vlSymsp->__Vcoverage[967]);
                                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data 
                                        = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg;
                                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_valid = 1U;
                                }
                            } else {
                                ++(vlSymsp->__Vcoverage[968]);
                                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error = 1U;
                            }
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 0U;
                            if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count) 
                                 >= (0x3fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits))))) {
                                ++(vlSymsp->__Vcoverage[969]);
                                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect = 1U;
                            } else {
                                ++(vlSymsp->__Vcoverage[970]);
                                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect = 0U;
                            }
                            ++(vlSymsp->__Vcoverage[971]);
                        } else {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count)));
                            ++(vlSymsp->__Vcoverage[972]);
                        }
                        ++(vlSymsp->__Vcoverage[973]);
                    } else {
                        ++(vlSymsp->__Vcoverage[974]);
                    }
                    ++(vlSymsp->__Vcoverage[975]);
                } else {
                    ++(vlSymsp->__Vcoverage[976]);
                }
                ++(vlSymsp->__Vcoverage[977]);
            }
        } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state))) {
                if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
                    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
                         == (0x3fU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                                      - (IData)(1U))))) {
                        ++(vlSymsp->__Vcoverage[959]);
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count = 0U;
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit 
                            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 4U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[960]);
                    }
                    ++(vlSymsp->__Vcoverage[961]);
                } else {
                    ++(vlSymsp->__Vcoverage[962]);
                }
                ++(vlSymsp->__Vcoverage[963]);
            } else {
                if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
                    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
                         == (0x3fU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                                      - (IData)(1U))))) {
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg 
                            = (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2) 
                                << 8U) | (0xffU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                                                   >> 1U)));
                        if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2) {
                            ++(vlSymsp->__Vcoverage[949]);
                        } else {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
                            ++(vlSymsp->__Vcoverage[948]);
                        }
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count = 0U;
                        if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count) 
                             == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits) 
                                 - (IData)(1U)))) {
                            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled) {
                                ++(vlSymsp->__Vcoverage[950]);
                                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 3U;
                            } else {
                                ++(vlSymsp->__Vcoverage[951]);
                                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 4U;
                                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count = 0U;
                            }
                            ++(vlSymsp->__Vcoverage[952]);
                        } else {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count)));
                            ++(vlSymsp->__Vcoverage[953]);
                        }
                        ++(vlSymsp->__Vcoverage[954]);
                    } else {
                        ++(vlSymsp->__Vcoverage[955]);
                    }
                    ++(vlSymsp->__Vcoverage[956]);
                } else {
                    ++(vlSymsp->__Vcoverage[957]);
                }
                ++(vlSymsp->__Vcoverage[958]);
            }
        } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_busy = 1U;
            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
                if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
                     == (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)))) {
                    if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2) {
                        ++(vlSymsp->__Vcoverage[942]);
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[941]);
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 2U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count = 0U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count = 1U;
                    }
                    ++(vlSymsp->__Vcoverage[943]);
                } else {
                    ++(vlSymsp->__Vcoverage[944]);
                }
                ++(vlSymsp->__Vcoverage[945]);
            } else {
                ++(vlSymsp->__Vcoverage[946]);
            }
            ++(vlSymsp->__Vcoverage[947]);
        } else {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_busy = 0U;
            if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge) {
                ++(vlSymsp->__Vcoverage[938]);
                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = 1U;
                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count = 0U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error = 0U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[939]);
            }
            ++(vlSymsp->__Vcoverage[940]);
        }
        ++(vlSymsp->__Vcoverage[979]);
    }
    ++(vlSymsp->__Vcoverage[980]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count = 0U;
        vlSelfRef.tx = 1U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_done = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy = 0U;
    } else {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_done = 0U;
        if ((0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[815]);
            vlSelfRef.tx = 0U;
        } else {
            if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 0U;
                } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 0U;
                } else {
                    vlSelfRef.tx = 1U;
                    if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                        if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count) 
                             == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks) 
                                 - (IData)(1U)))) {
                            ++(vlSymsp->__Vcoverage[810]);
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 0U;
                            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_done = 1U;
                        } else {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count)));
                            ++(vlSymsp->__Vcoverage[811]);
                        }
                        ++(vlSymsp->__Vcoverage[812]);
                    } else {
                        ++(vlSymsp->__Vcoverage[813]);
                    }
                    ++(vlSymsp->__Vcoverage[814]);
                }
            } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                    vlSelfRef.tx = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit;
                    if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                        if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
                             == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                                 - (IData)(1U)))) {
                            ++(vlSymsp->__Vcoverage[805]);
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count = 0U;
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 4U;
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count = 0U;
                        } else {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
                            ++(vlSymsp->__Vcoverage[806]);
                        }
                        ++(vlSymsp->__Vcoverage[807]);
                    } else {
                        ++(vlSymsp->__Vcoverage[808]);
                    }
                    ++(vlSymsp->__Vcoverage[809]);
                } else {
                    vlSelfRef.tx = (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg));
                    if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                        if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
                             == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                                 - (IData)(1U)))) {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg 
                                = (0x1ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg), 1U));
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count = 0U;
                            if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count) 
                                 == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits) 
                                     - (IData)(1U)))) {
                                if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled) {
                                    ++(vlSymsp->__Vcoverage[796]);
                                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 3U;
                                } else {
                                    ++(vlSymsp->__Vcoverage[797]);
                                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 4U;
                                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count = 0U;
                                }
                                ++(vlSymsp->__Vcoverage[798]);
                            } else {
                                vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count 
                                    = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count)));
                                ++(vlSymsp->__Vcoverage[799]);
                            }
                            ++(vlSymsp->__Vcoverage[800]);
                        } else {
                            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
                            ++(vlSymsp->__Vcoverage[801]);
                        }
                        ++(vlSymsp->__Vcoverage[802]);
                    } else {
                        ++(vlSymsp->__Vcoverage[803]);
                    }
                    ++(vlSymsp->__Vcoverage[804]);
                }
            } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                vlSelfRef.tx = 0U;
                if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) {
                    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
                         == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                             - (IData)(1U)))) {
                        ++(vlSymsp->__Vcoverage[791]);
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count = 0U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count = 0U;
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 2U;
                    } else {
                        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
                        ++(vlSymsp->__Vcoverage[792]);
                    }
                    ++(vlSymsp->__Vcoverage[793]);
                } else {
                    ++(vlSymsp->__Vcoverage[794]);
                }
                ++(vlSymsp->__Vcoverage[795]);
            } else {
                vlSelfRef.tx = 1U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy = 0U;
                if (vlSelfRef.tx_rx_tb__DOT__dut__DOT__tx_start_pulse) {
                    ++(vlSymsp->__Vcoverage[788]);
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = 1U;
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg 
                        = (0x1ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data));
                    vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count = 0U;
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[789]);
                }
                ++(vlSymsp->__Vcoverage[790]);
            }
            ++(vlSymsp->__Vcoverage[816]);
        }
        ++(vlSymsp->__Vcoverage[818]);
    }
    ++(vlSymsp->__Vcoverage[819]);
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__awvalid_prev))) {
        ++(vlSymsp->__Vcoverage[1348]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__awvalid_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__wvalid_prev))) {
        ++(vlSymsp->__Vcoverage[1349]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__wvalid_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__arvalid_prev))) {
        ++(vlSymsp->__Vcoverage[1350]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__arvalid_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev;
    }
    if (((IData)(vlSelfRef.s_arready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_arready))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_arready 
            = vlSelfRef.s_arready;
    }
    if (((IData)(vlSelfRef.s_rvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rvalid))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rvalid 
            = vlSelfRef.s_rvalid;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_aw_ok))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_aw_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_w_ok))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_w_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_ar_ok))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_ar_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_br_ok))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_br_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rr_ok))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rr_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rx_ok))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rx_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_aw_FAIL))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_aw_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_w_FAIL))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_w_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_ar_FAIL))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_ar_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_br_FAIL))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_br_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rr_FAIL))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rr_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rx_FAIL))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rx_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff2))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff2 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2;
    }
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall 
        = ((~ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2)) 
           & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev));
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1163]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1164]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[1165]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[1172]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[1173]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[1174]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[1175]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_start_ok))) {
        ++(vlSymsp->__Vcoverage[1081]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_start_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_data_ok))) {
        ++(vlSymsp->__Vcoverage[1082]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_data_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_par_ok))) {
        ++(vlSymsp->__Vcoverage[1083]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_par_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_stop_ok))) {
        ++(vlSymsp->__Vcoverage[1084]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_stop_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_idle_ok))) {
        ++(vlSymsp->__Vcoverage[1085]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_idle_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_start_FAIL))) {
        ++(vlSymsp->__Vcoverage[1086]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_start_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_data_FAIL))) {
        ++(vlSymsp->__Vcoverage[1087]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_data_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_par_FAIL))) {
        ++(vlSymsp->__Vcoverage[1088]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_par_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_stop_FAIL))) {
        ++(vlSymsp->__Vcoverage[1089]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_stop_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_idle_FAIL))) {
        ++(vlSymsp->__Vcoverage[1090]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_idle_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[1176]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[1177]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[1178]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[1179]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[1180]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[1181]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[1166]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[1167]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[1168]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[1169]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[1170]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[1171]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1182]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1183]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1184]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1185]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1186]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1187]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1188]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1189]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)))) {
        ++(vlSymsp->__Vcoverage[1190]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_written_with_reset_bits))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_written_with_reset_bits 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_ok))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_FAIL))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1290]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1291]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1292]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1293]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1294]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1295]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1296]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1297]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1298]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1299]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1300]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1301]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1302]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1303]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1304]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)))) {
        ++(vlSymsp->__Vcoverage[1305]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dlab_was_set))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dlab_was_set 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set;
    }
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_0_0 
        = vlSelfRef.__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_en;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_1_0 
        = vlSelfRef.__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_addr;
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_2_0 
        = vlSelfRef.__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_ok))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_FAIL))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1316]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1317]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1318]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1319]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1320]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1321]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1322]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1323]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1324]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1325]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1326]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1327]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1328]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1329]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1330]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)))) {
        ++(vlSymsp->__Vcoverage[1331]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before)));
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__lcr_val;
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_fall))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_fall 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_valid) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_valid))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_valid 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_valid;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_busy) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_busy))) {
        ++(vlSymsp->__Vcoverage[865]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_busy 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_busy;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__frame_error))) {
        ++(vlSymsp->__Vcoverage[866]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__frame_error 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__parity_error))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__parity_error 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__break_detect))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__break_detect 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__received_parity_bit))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__received_parity_bit 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff2))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff2 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2;
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge 
        = ((~ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2)) 
           & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev));
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)))) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)))) {
        ++(vlSymsp->__Vcoverage[899]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)))) {
        ++(vlSymsp->__Vcoverage[900]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)))) {
        ++(vlSymsp->__Vcoverage[901]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)))) {
        ++(vlSymsp->__Vcoverage[902]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_done) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__tx_done))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__tx_done 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_done;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__tx_busy))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__tx_busy 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy;
    }
    if (((IData)(vlSelfRef.tx) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__tx))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__tx = vlSelfRef.tx;
    }
    if ((((~ (IData)(vlSelfRef.tx)) & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__prev_pin)) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__falling_edge))) {
        ++(vlSymsp->__Vcoverage[1229]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__falling_edge 
            = ((~ (IData)(vlSelfRef.tx)) & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__prev_pin));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state 
            = ((6U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state 
            = ((5U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state)))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state 
            = ((3U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg)));
    }
    if (((0U != (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                       >> 5U))) ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__parity_enabled))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__parity_enabled 
            = (0U != (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                            >> 5U)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val)));
    }
    if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = 8U;
            ++(vlSymsp->__Vcoverage[1201]);
        } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[1201]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = 8U;
        } else {
            ++(vlSymsp->__Vcoverage[1200]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = 9U;
        }
    } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[1199]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = 8U;
        } else {
            ++(vlSymsp->__Vcoverage[1198]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = 7U;
        }
    } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        ++(vlSymsp->__Vcoverage[1197]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = 6U;
    } else {
        ++(vlSymsp->__Vcoverage[1196]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = 5U;
    }
    ++(vlSymsp->__Vcoverage[1202]);
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count = 0U;
    if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1219]);
    } else {
        ++(vlSymsp->__Vcoverage[1220]);
    }
    ++(vlSymsp->__Vcoverage[1221]);
    if ((0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
                ++(vlSymsp->__Vcoverage[1225]);
                vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1226]);
                vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit = 0U;
            }
        } else if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[1224]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1226]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit = 0U;
        }
    } else if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[1223]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit 
                = (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count));
        } else {
            ++(vlSymsp->__Vcoverage[1226]);
            vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        ++(vlSymsp->__Vcoverage[1222]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit 
            = (1U & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
    } else {
        ++(vlSymsp->__Vcoverage[1226]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit = 0U;
    }
    ++(vlSymsp->__Vcoverage[1227]);
    if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = 8U;
            ++(vlSymsp->__Vcoverage[825]);
        } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[825]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = 8U;
        } else {
            ++(vlSymsp->__Vcoverage[824]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = 9U;
        }
    } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[823]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = 8U;
        } else {
            ++(vlSymsp->__Vcoverage[822]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = 7U;
        }
    } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = 6U;
    } else {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = 5U;
    }
    ++(vlSymsp->__Vcoverage[826]);
    if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = 8U;
            ++(vlSymsp->__Vcoverage[986]);
        } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[986]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = 8U;
        } else {
            ++(vlSymsp->__Vcoverage[985]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = 9U;
        }
    } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[984]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = 8U;
        } else {
            ++(vlSymsp->__Vcoverage[983]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = 7U;
        }
    } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        ++(vlSymsp->__Vcoverage[982]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = 6U;
    } else {
        ++(vlSymsp->__Vcoverage[981]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = 5U;
    }
    ++(vlSymsp->__Vcoverage[987]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data = 0U;
        vlSelfRef.__Vdly__s_bvalid = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 0U;
    } else {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en = 0U;
        if ((((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done) 
              & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done)) 
             & (~ (IData)(vlSelfRef.s_bvalid)))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en = 1U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data 
                = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch;
            vlSelfRef.__Vdly__s_bvalid = 1U;
            if ((0x10U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch)) {
                if ((8U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch)) {
                    if ((4U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch)) {
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = 0U;
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 2U;
                    } else if ((2U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch)) {
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = 0U;
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 2U;
                    } else if ((1U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch)) {
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = 0U;
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 2U;
                    } else {
                        ++(vlSymsp->__Vcoverage[492]);
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr 
                            = (0x1fU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch);
                        vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 0U;
                    }
                } else if ((1U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch)) {
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = 0U;
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 2U;
                } else {
                    ++(vlSymsp->__Vcoverage[492]);
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr 
                        = (0x1fU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch);
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 0U;
                }
            } else if ((1U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch)) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = 0U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 2U;
            } else {
                ++(vlSymsp->__Vcoverage[492]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr 
                    = (0x1fU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp = 0U;
            }
            ++(vlSymsp->__Vcoverage[493]);
        } else {
            ++(vlSymsp->__Vcoverage[494]);
        }
        if (((IData)(vlSelfRef.s_bvalid) & (IData)(vlSelfRef.s_bready))) {
            ++(vlSymsp->__Vcoverage[495]);
            vlSelfRef.__Vdly__s_bvalid = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[496]);
        }
        ++(vlSymsp->__Vcoverage[498]);
    }
    ++(vlSymsp->__Vcoverage[499]);
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__falling_edge))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__falling_edge 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)))) {
        ++(vlSymsp->__Vcoverage[1192]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)))) {
        ++(vlSymsp->__Vcoverage[1193]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)))) {
        ++(vlSymsp->__Vcoverage[1194]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)))) {
        ++(vlSymsp->__Vcoverage[1195]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_parity_bit))) {
        ++(vlSymsp->__Vcoverage[1218]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_parity_bit 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[1214]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[1215]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[1216]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[1217]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits)));
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg) 
           & (((IData)(1U) << (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits)) 
              - (IData)(1U)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count = 0U;
    if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[845]);
    } else {
        ++(vlSymsp->__Vcoverage[846]);
    }
    ++(vlSymsp->__Vcoverage[847]);
    if ((0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
                ++(vlSymsp->__Vcoverage[852]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 1U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[853]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 0U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit = 0U;
            }
        } else if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[851]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 1U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[853]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 0U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit = 0U;
        }
    } else if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[850]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 1U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit 
                = (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count));
        } else {
            ++(vlSymsp->__Vcoverage[853]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 0U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 1U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit 
            = (1U & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
    } else {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit = 0U;
    }
    ++(vlSymsp->__Vcoverage[854]);
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[907]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[909]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)))) {
        ++(vlSymsp->__Vcoverage[910]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits)));
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg 
        = (0x1ffU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                     >> (0xfU & ((IData)(9U) - (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits)))));
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_enabled))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_enabled 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_bit))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_bit 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[917]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[918]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[919]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[920]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[921]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[922]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[923]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[924]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)))) {
        ++(vlSymsp->__Vcoverage[925]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg)));
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg) 
           & (((IData)(1U) << (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits)) 
              - (IData)(1U)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count = 0U;
    if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count 
            = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
        ++(vlSymsp->__Vcoverage[1006]);
    } else {
        ++(vlSymsp->__Vcoverage[1007]);
    }
    ++(vlSymsp->__Vcoverage[1008]);
    if ((0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
                ++(vlSymsp->__Vcoverage[1013]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 1U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1014]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 0U;
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit = 0U;
            }
        } else if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[1012]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 1U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1014]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 0U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit = 0U;
        }
    } else if ((0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
            ++(vlSymsp->__Vcoverage[1011]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 1U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit 
                = (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count));
        } else {
            ++(vlSymsp->__Vcoverage[1014]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 0U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit = 0U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))) {
        ++(vlSymsp->__Vcoverage[1010]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 1U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit 
            = (1U & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
    } else {
        ++(vlSymsp->__Vcoverage[1009]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit = 0U;
    }
    ++(vlSymsp->__Vcoverage[1015]);
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_bresp)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_bresp 
            = ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_bresp)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_bresp)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_bresp 
            = ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__s_bresp)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_en))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr 
            = ((0x1eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr 
            = ((0x1dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr 
            = ((0x1bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr 
            = ((0x17U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr 
            = ((0xfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (4U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__lcr_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (6U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0x14U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0x18U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__tx_start_pulse 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & ((~ ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                  >> 9U)) & (0U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr))));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (8U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0xeU == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0x10U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0x12U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0x16U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (2U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelfRef.s_wready = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done = 0U;
    } else {
        if (((IData)(vlSelfRef.s_wvalid) & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done)))) {
            ++(vlSymsp->__Vcoverage[485]);
            vlSelfRef.s_wready = 1U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch 
                = (0xffffU & vlSelfRef.s_wdata);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[486]);
            vlSelfRef.s_wready = 0U;
        }
        if (((IData)(vlSelfRef.s_bvalid) & (IData)(vlSelfRef.s_bready))) {
            ++(vlSymsp->__Vcoverage[487]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[488]);
        }
        ++(vlSymsp->__Vcoverage[490]);
    }
    ++(vlSymsp->__Vcoverage[491]);
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelfRef.s_awready = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done = 0U;
    } else {
        if (((IData)(vlSelfRef.s_awvalid) & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done)))) {
            ++(vlSymsp->__Vcoverage[478]);
            vlSelfRef.s_awready = 1U;
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                = vlSelfRef.s_awaddr;
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[479]);
            vlSelfRef.s_awready = 0U;
        }
        if (((IData)(vlSelfRef.s_bvalid) & (IData)(vlSelfRef.s_bready))) {
            ++(vlSymsp->__Vcoverage[480]);
            vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[481]);
        }
        ++(vlSymsp->__Vcoverage[483]);
    }
    ++(vlSymsp->__Vcoverage[484]);
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__parity_enabled))) {
        ++(vlSymsp->__Vcoverage[926]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__parity_enabled 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__expected_parity_bit))) {
        ++(vlSymsp->__Vcoverage[927]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__expected_parity_bit 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[993]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((0xeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[994]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((0xdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[995]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((0xbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)))) {
        ++(vlSymsp->__Vcoverage[996]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count 
            = ((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[997]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1feU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[998]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1fdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[999]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1fbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[1000]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1f7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[1001]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1efU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[1002]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1dfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[1003]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x1bfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[1004]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0x17fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)))) {
        ++(vlSymsp->__Vcoverage[1005]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data 
            = ((0xffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_wr_en))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__lcr_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__lcr_wr_en))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__lcr_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__lcr_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_wr_en))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_wr_en))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__tx_start_pulse) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__tx_start_pulse))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__tx_start_pulse 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__tx_start_pulse;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_wr_en))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dlf_wr_en))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dlf_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_wr_en))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__clk_wr_en))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__clk_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_wr_en))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en;
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en 
        = ((~ ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
               >> 9U)) & (IData)(tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en 
        = ((IData)(tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0) 
           & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
              >> 9U));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en 
        = ((~ ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
               >> 9U)) & (IData)(tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en 
        = ((IData)(tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2) 
           & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
              >> 9U));
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done;
    vlSelfRef.s_bvalid = vlSelfRef.__Vdly__s_bvalid;
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__thr_wr_en))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__thr_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dll_wr_en))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dll_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_wr_en))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dlh_wr_en))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dlh_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en;
    }
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wready))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wready 
            = vlSelfRef.s_wready;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_done))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_done 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch)));
    }
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awready))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awready 
            = vlSelfRef.s_awready;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_done))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_done 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done;
    }
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_bvalid))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_bvalid 
            = vlSelfRef.s_bvalid;
    }
    if ((1U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffffffeU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (1U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((2U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffffffdU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (2U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((4U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffffffbU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (4U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((8U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
               ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffffff7U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (8U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x10U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffffffefU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x10U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x20U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffffffdfU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x20U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x40U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffffffbfU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x40U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x80U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                  ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffffff7fU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x80U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x100U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffffeffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x100U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x200U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffffdffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x200U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x400U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffffbffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x400U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x800U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                   ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffff7ffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x800U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x1000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffffefffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x1000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x2000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffffdfffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x2000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x4000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffffbfffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x4000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x8000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                    ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffff7fffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x8000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x10000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffeffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x10000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x20000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffdffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x20000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x40000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfffbffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x40000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x80000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                     ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfff7ffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x80000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x100000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                      ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffefffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x100000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x200000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                      ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffdfffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x200000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x400000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                      ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xffbfffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x400000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x800000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                      ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xff7fffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x800000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x1000000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                       ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfeffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x1000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x2000000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                       ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfdffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x2000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x4000000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                       ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xfbffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x4000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x8000000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                       ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xf7ffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x8000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x10000000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                        ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xefffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x10000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x20000000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                        ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xdfffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x20000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if ((0x40000000U & (vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
                        ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0xbfffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x40000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
    if (((vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch 
          ^ vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch 
            = ((0x7fffffffU & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch) 
               | (0x80000000U & vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch));
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_sequent__TOP__4(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val)));
    }
    if ((8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val))) {
        if ((4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor = 3U;
            ++(vlSymsp->__Vcoverage[731]);
        } else {
            ++(vlSymsp->__Vcoverage[730]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor = 4U;
        }
    } else if ((4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor = 8U;
    } else {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor = 0x10U;
    }
    ++(vlSymsp->__Vcoverage[732]);
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    }
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int 
        = ((0xff00U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                       << 8U)) | (0xffU & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
    if ((((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
          == (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U))) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__midpoint))) {
        ++(vlSymsp->__Vcoverage[1230]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__midpoint 
            = ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
               == (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor 
            = ((0x1eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor 
            = ((0x1dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor 
            = ((0x1bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor 
            = ((0x17U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor 
            = ((0xfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor)));
    }
    if ((1U & (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                >> 1U) ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint)))) {
        ++(vlSymsp->__Vcoverage[929]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint)) 
               | (1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                        >> 1U)));
    }
    if ((1U & (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                >> 2U) ^ ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint) 
                          >> 1U)))) {
        ++(vlSymsp->__Vcoverage[930]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint)) 
               | (2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                        >> 1U)));
    }
    if ((1U & (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                >> 3U) ^ ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint) 
                          >> 2U)))) {
        ++(vlSymsp->__Vcoverage[931]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint)) 
               | (4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                        >> 1U)));
    }
    if ((1U & (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                >> 4U) ^ ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint) 
                          >> 3U)))) {
        ++(vlSymsp->__Vcoverage[932]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint)) 
               | (8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                        >> 1U)));
    }
    if ((0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint))) {
        ++(vlSymsp->__Vcoverage[933]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint)) 
               | (0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                           >> 1U)));
    }
    if ((1U & ((1U & (VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U) 
                      >> 5U)) ^ ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint) 
                                 >> 5U)))) {
        ++(vlSymsp->__Vcoverage[934]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint)) 
               | (0x20U & VL_SHIFTR_III(32,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)));
    }
    if ((0U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                      >> 3U)))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor;
        ++(vlSymsp->__Vcoverage[827]);
    } else if ((1U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks 
            = (0x3fU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                        + VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)));
    } else if ((2U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks 
            = (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U));
    } else {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor;
    }
    ++(vlSymsp->__Vcoverage[831]);
    if ((0U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                      >> 3U)))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor;
        ++(vlSymsp->__Vcoverage[988]);
    } else if ((1U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[989]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks 
            = (0x3fU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                        + VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)));
    } else if ((2U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[990]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks 
            = (0x3fU & VL_SHIFTL_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U));
    } else {
        ++(vlSymsp->__Vcoverage[991]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor;
    }
    ++(vlSymsp->__Vcoverage[992]);
    if ((0U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                      >> 3U)))) {
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor;
        ++(vlSymsp->__Vcoverage[1209]);
    } else if ((1U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1210]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks 
            = (0x3fU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor) 
                        + VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)));
    } else if ((2U == (3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                             >> 3U)))) {
        ++(vlSymsp->__Vcoverage[1211]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks 
            = (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U));
    } else {
        ++(vlSymsp->__Vcoverage[1212]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor;
    }
    ++(vlSymsp->__Vcoverage[1213]);
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[911]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[912]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[913]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[914]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[915]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[916]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[1203]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks 
            = ((0x3eU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[1204]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks 
            = ((0x3dU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[1205]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks 
            = ((0x3bU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[1206]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks 
            = ((0x37U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[1207]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks 
            = ((0x2fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)))) {
        ++(vlSymsp->__Vcoverage[1208]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks 
            = ((0x1fU & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_comb__TOP__0(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok) 
           | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok) 
              | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok) 
                 | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok) 
                    | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok) 
                       | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_ok) 
                          | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_ok) 
                             | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rxthr_rst_ok) 
                                | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok) 
                                   | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_timeout_rst_ok) 
                                      | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok) 
                                         | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok) 
                                            | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok) 
                                               | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok) 
                                                  | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok) 
                                                     | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok) 
                                                        | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok) 
                                                           | (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok))))))))))))))))));
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL) 
           | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL) 
              | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL) 
                 | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL) 
                    | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL) 
                       | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_FAIL) 
                          | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_FAIL) 
                             | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL) 
                                | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL) 
                                   | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL) 
                                      | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL) 
                                         | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL) 
                                            | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL) 
                                               | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL) 
                                                  | ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL) 
                                                     | (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL))))))))))))))));
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_pass))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_pass 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass;
    }
    if ((1U ^ ((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__all_pass)))) {
        ++(vlSymsp->__Vcoverage[1016]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__all_pass 
            = (1U & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_fail))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_fail 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail;
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_sequent__TOP__5(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count = 0U;
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick = 0U;
    } else if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                == ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider) 
                    - (IData)(1U)))) {
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum 
            = (0x1fU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry)
                         ? (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
                             + (0xfU & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val))) 
                            - (IData)(0x10U)) : ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
                                                 + 
                                                 (0xfU 
                                                  & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)))));
        ++(vlSymsp->__Vcoverage[724]);
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count = 0U;
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick = 1U;
    } else {
        vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
        ++(vlSymsp->__Vcoverage[725]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick = 0U;
    }
    ++(vlSymsp->__Vcoverage[727]);
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count;
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum 
        = vlSelfRef.__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum;
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_tick))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_tick 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick;
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count)));
    }
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum 
            = ((0x1eU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum 
            = ((0x1dU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum 
            = ((0x1bU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum 
            = ((0x17U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum 
            = ((0xfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb___024root___nba_sequent__TOP__6(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (1U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((2U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (2U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((4U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (4U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((8U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (8U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x10U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x20U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x40U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x80U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x100U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x200U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x400U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x800U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x1000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x2000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x4000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val)) 
               | (0x8000U & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val)));
    }
    if ((0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
        if ((8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                    = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val;
                ++(vlSymsp->__Vcoverage[647]);
            }
        } else if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[646]);
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                        = vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val;
                }
            } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[645]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                    = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val;
            }
        } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[644]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                    = vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val;
            }
        } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[643]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                = vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val;
        }
    } else if ((8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
        if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[642]);
                    vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                        = vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val;
                }
            } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[641]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[640]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[639]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                = vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val;
        }
    } else if ((4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
        if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[638]);
                vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                    = vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val;
            }
        } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[637]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
        if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[636]);
            vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
                = ((0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))
                    ? (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val)
                    : (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val));
        }
    } else if ((1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr))) {
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data 
            = ((0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))
                ? (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)
                : 0U);
    }
    ++(vlSymsp->__Vcoverage[648]);
    if ((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xfffeU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (1U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((2U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xfffdU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (2U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((4U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xfffbU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (4U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((8U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
               ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x10U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xffefU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x10U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x20U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xffdfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x20U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x40U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xffbfU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x40U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x80U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                  ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xff7fU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x80U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x100U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xfeffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x100U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x200U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xfdffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x200U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x400U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xfbffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x400U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x800U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                   ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xf7ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x800U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xefffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x1000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xdfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x2000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0xbfffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x4000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data) 
                    ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data 
            = ((0x7fffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data)) 
               | (0x8000U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data)));
    }
}
