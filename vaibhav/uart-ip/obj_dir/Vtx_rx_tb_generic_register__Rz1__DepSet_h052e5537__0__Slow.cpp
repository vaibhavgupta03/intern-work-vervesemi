// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb_generic_register__Rz1.h"

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___ctor_var_reset(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->wr_en = VL_RAND_RESET_I(1);
    vlSelf->wr_data = VL_RAND_RESET_I(16);
    vlSelf->reg_val = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wr_data = VL_RAND_RESET_I(16);
    vlSelf->__Vtogcov__reg_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__reg_val = VL_RAND_RESET_I(16);
}
