// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb__Syms.h"
#include "Vtx_rx_tb_generic_register__Rz1.h"

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___ico_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSymsp->TOP.clk) ^ (IData)(vlSelfRef.__Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[1375]);
        vlSelfRef.__Vtogcov__clk = vlSymsp->TOP.clk;
    }
    if (((IData)(vlSymsp->TOP.rst) ^ (IData)(vlSelfRef.__Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1376]);
        vlSelfRef.__Vtogcov__rst = vlSymsp->TOP.rst;
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__reg_val;
    __Vdly__reg_val = 0;
    // Body
    __Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        __Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            __Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            __Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
    vlSelfRef.reg_val = __Vdly__reg_val;
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en;
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelfRef.__Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.__Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            vlSelfRef.__Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_val = vlSelfRef.__Vdly__reg_val;
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en;
    }
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__reg_val;
    __Vdly__reg_val = 0;
    // Body
    __Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        __Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            __Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            __Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
    vlSelfRef.reg_val = __Vdly__reg_val;
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en;
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__reg_val;
    __Vdly__reg_val = 0;
    // Body
    __Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        __Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            __Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            __Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
    vlSelfRef.reg_val = __Vdly__reg_val;
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en;
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__reg_val;
    __Vdly__reg_val = 0;
    // Body
    __Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        __Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            __Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            __Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
    vlSelfRef.reg_val = __Vdly__reg_val;
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en;
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelfRef.__Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.__Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            vlSelfRef.__Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en;
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__2(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_val = vlSelfRef.__Vdly__reg_val;
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__reg_val;
    __Vdly__reg_val = 0;
    // Body
    __Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        __Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            __Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            __Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
    vlSelfRef.reg_val = __Vdly__reg_val;
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en;
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        vlSelfRef.__Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            vlSelfRef.__Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            vlSelfRef.__Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_val = vlSelfRef.__Vdly__reg_val;
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en;
    }
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__reg_val;
    __Vdly__reg_val = 0;
    // Body
    __Vdly__reg_val = vlSelfRef.reg_val;
    if (vlSymsp->TOP.rst) {
        ++(vlSymsp->__Vcoverage[1412]);
        __Vdly__reg_val = 0U;
    } else {
        if (vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en) {
            ++(vlSymsp->__Vcoverage[1410]);
            __Vdly__reg_val = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data;
        } else {
            __Vdly__reg_val = vlSelfRef.reg_val;
            ++(vlSymsp->__Vcoverage[1411]);
        }
        ++(vlSymsp->__Vcoverage[1413]);
    }
    ++(vlSymsp->__Vcoverage[1414]);
    vlSelfRef.reg_val = __Vdly__reg_val;
    if ((1U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1394]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (1U & (IData)(vlSelfRef.reg_val)));
    }
    if ((2U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1395]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (2U & (IData)(vlSelfRef.reg_val)));
    }
    if ((4U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1396]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (4U & (IData)(vlSelfRef.reg_val)));
    }
    if ((8U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1397]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (8U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x10U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1398]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x10U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x20U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1399]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x20U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x40U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1400]);
        vlSelfRef.__Vtogcov__reg_val = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x40U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x80U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1401]);
        vlSelfRef.__Vtogcov__reg_val = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x80U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x100U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1402]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x100U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x200U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1403]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x200U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x400U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1404]);
        vlSelfRef.__Vtogcov__reg_val = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x400U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x800U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1405]);
        vlSelfRef.__Vtogcov__reg_val = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x800U & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x1000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1406]);
        vlSelfRef.__Vtogcov__reg_val = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x1000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x2000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1407]);
        vlSelfRef.__Vtogcov__reg_val = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x2000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x4000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1408]);
        vlSelfRef.__Vtogcov__reg_val = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x4000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
    if ((0x8000U & ((IData)(vlSelfRef.reg_val) ^ (IData)(vlSelfRef.__Vtogcov__reg_val)))) {
        ++(vlSymsp->__Vcoverage[1409]);
        vlSelfRef.__Vtogcov__reg_val = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__reg_val)) 
                                        | (0x8000U 
                                           & (IData)(vlSelfRef.reg_val)));
    }
}

VL_INLINE_OPT void Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__1(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___nba_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1378]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffeU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (1U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((2U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1379]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffdU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (2U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((4U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1380]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfffbU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (4U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((8U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
               ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1381]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfff7U & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (8U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x10U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1382]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffefU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x10U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x20U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1383]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffdfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x20U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x40U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1384]);
        vlSelfRef.__Vtogcov__wr_data = ((0xffbfU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x40U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x80U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                  ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1385]);
        vlSelfRef.__Vtogcov__wr_data = ((0xff7fU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x80U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x100U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1386]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfeffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x100U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x200U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1387]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfdffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x200U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x400U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1388]);
        vlSelfRef.__Vtogcov__wr_data = ((0xfbffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x400U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x800U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                   ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1389]);
        vlSelfRef.__Vtogcov__wr_data = ((0xf7ffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x800U & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x1000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1390]);
        vlSelfRef.__Vtogcov__wr_data = ((0xefffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x1000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x2000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1391]);
        vlSelfRef.__Vtogcov__wr_data = ((0xdfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x2000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x4000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1392]);
        vlSelfRef.__Vtogcov__wr_data = ((0xbfffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x4000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if ((0x8000U & ((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data) 
                    ^ (IData)(vlSelfRef.__Vtogcov__wr_data)))) {
        ++(vlSymsp->__Vcoverage[1393]);
        vlSelfRef.__Vtogcov__wr_data = ((0x7fffU & (IData)(vlSelfRef.__Vtogcov__wr_data)) 
                                        | (0x8000U 
                                           & (IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__regfile_wr_data)));
    }
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en;
    }
}
