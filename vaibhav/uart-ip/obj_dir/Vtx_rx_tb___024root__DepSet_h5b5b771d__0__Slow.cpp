// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb___024root.h"

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_static(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_initial__TOP(Vtx_rx_tb___024root* vlSelf);

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_initial(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtx_rx_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_final(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__stl(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtx_rx_tb___024root___eval_phase__stl(Vtx_rx_tb___024root* vlSelf);

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_settle(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtx_rx_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tx_rx_tb.v", 19, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtx_rx_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__stl(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_triggers__stl(Vtx_rx_tb___024root* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb___024root___eval_stl(Vtx_rx_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtx_rx_tb___024root___eval_phase__stl(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtx_rx_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtx_rx_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__ico(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__act(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__nba(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtx_rx_tb___024root____Vm_traceActivitySetAll(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void Vtx_rx_tb___024root___ctor_var_reset(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->rx = VL_RAND_RESET_I(1);
    vlSelf->tx = VL_RAND_RESET_I(1);
    vlSelf->s_awaddr = VL_RAND_RESET_I(32);
    vlSelf->s_awvalid = VL_RAND_RESET_I(1);
    vlSelf->s_awready = VL_RAND_RESET_I(1);
    vlSelf->s_wdata = VL_RAND_RESET_I(32);
    vlSelf->s_wvalid = VL_RAND_RESET_I(1);
    vlSelf->s_wready = VL_RAND_RESET_I(1);
    vlSelf->s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->s_bready = VL_RAND_RESET_I(1);
    vlSelf->s_araddr = VL_RAND_RESET_I(32);
    vlSelf->s_arvalid = VL_RAND_RESET_I(1);
    vlSelf->s_arready = VL_RAND_RESET_I(1);
    vlSelf->s_rdata = VL_RAND_RESET_I(32);
    vlSelf->s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->s_rready = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__rx = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__tx = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_awaddr = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_awvalid = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_awready = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_wdata = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_wready = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_bready = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_araddr = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_arvalid = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_arready = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_rdata = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT____Vtogcov__s_rready = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__s_bresp = VL_RAND_RESET_I(2);
    vlSelf->tx_rx_tb__DOT__dut__DOT__s_rresp = VL_RAND_RESET_I(2);
    vlSelf->tx_rx_tb__DOT__dut__DOT__regfile_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT__regfile_wr_data = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__regfile_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT__regfile_rd_data = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__lcr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__oversample_tick = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__oversample_factor = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT__tx_start_pulse = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__fc_feature_manifest = VL_RAND_RESET_I(21);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__s_bresp = VL_RAND_RESET_I(2);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__s_rresp = VL_RAND_RESET_I(2);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_data = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_rd_data = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__clk_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__thr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__dll_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__dlh_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__dlf_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__lcr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_tick = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_factor = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__tx_start_pulse = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT____Vtogcov__fc_feature_manifest = VL_RAND_RESET_I(21);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_latch = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_latch = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_done = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_done = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__lcr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_val = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__thr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dll_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__ier_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dlh_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__fcr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__lcr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mcr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__dlf_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__mode_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__clk_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__rxthr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__txthr_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____Vtogcov__timeout_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_fcr__DOT____Vtogcov__wr_data = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__divider_int = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_accum = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_carry = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__count = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__effective_divider = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_done = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__tx_done = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__tx_busy = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__state = VL_RAND_RESET_I(3);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__shift_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__os_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_data_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__data_bits = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__stop_ticks = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_enabled = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT____Vtogcov__parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__ones_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT____Vtogcov__masked_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_valid = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_busy = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_valid = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_busy = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__frame_error = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__parity_error = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__break_detect = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__state = VL_RAND_RESET_I(3);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__shift_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__os_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__zero_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__falling_edge = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__data_bits = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__stop_ticks = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__aligned_shift_reg = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__parity_enabled = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__expected_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__received_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__midpoint = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__ones_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT____Vtogcov__masked_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__total_pass_count = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__total_fail_count = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_rxthr_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_timeout_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__any_fail = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__any_pass = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__all_pass = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_pass_count = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__total_fail_count = VL_RAND_RESET_I(32);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_start_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_data_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_par_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_stop_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_idle_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_start_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_data_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_par_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_stop_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__pc_idle_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_lcr_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rxthr_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_timeout_rst_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_lcr_rst_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_rst_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_aw_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_w_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_ar_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_br_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rr_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rx_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_aw_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_w_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_ar_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_br_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rr_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__ac_rx_FAIL = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_fail = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_pass = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__prev_pin = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__state = VL_RAND_RESET_I(3);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__os_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__bit_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__stop_count = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__captured_data = VL_RAND_RESET_I(9);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__prev_pin = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_data_bits = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_stop_ticks = VL_RAND_RESET_I(6);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__ones_count = VL_RAND_RESET_I(4);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__exp_parity_bit = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__parity_enabled = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__falling_edge = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__midpoint = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff1 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff2 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_fall = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vlvbound_h48595257__0 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__spec_dlab_ier_access_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__spec_dlab_ier_access_ok = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__rst_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_written_with_reset_bits = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_prev = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dlab_was_set = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dll_before = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_1_0 = VL_RAND_RESET_I(5);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT___Vpast_2_0 = VL_RAND_RESET_I(16);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__awvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__wvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT____Vtogcov__arvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__s_bvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__s_arready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__s_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__lcr_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_pass_count = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__total_fail_count = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vsampled_TOP__tx_rx_tb__DOT__dut__DOT__regfile_wr_data = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
