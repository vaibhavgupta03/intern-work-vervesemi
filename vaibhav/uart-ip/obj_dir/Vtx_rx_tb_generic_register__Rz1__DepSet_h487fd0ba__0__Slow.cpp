// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb__Syms.h"
#include "Vtx_rx_tb_generic_register__Rz1.h"

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0\n"); );
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
    if (((IData)(vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en) 
         ^ (IData)(vlSelfRef.__Vtogcov__wr_en))) {
        ++(vlSymsp->__Vcoverage[1377]);
        vlSelfRef.__Vtogcov__wr_en = vlSymsp->TOP.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en;
    }
}

VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___configure_coverage(Vtx_rx_tb_generic_register__Rz1* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtx_rx_tb_generic_register__Rz1___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "generic_register.v", 8, 31, "", "v_toggle/generic_register__Rz1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "generic_register.v", 9, 31, "", "v_toggle/generic_register__Rz1", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "generic_register.v", 10, 31, "", "v_toggle/generic_register__Rz1", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "generic_register.v", 11, 31, "", "v_toggle/generic_register__Rz1", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1394]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1395]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1396]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1397]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1398]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1399]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1400]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1401]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1402]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1403]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1404]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1407]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1408]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1409]), first, "generic_register.v", 12, 31, "", "v_toggle/generic_register__Rz1", "reg_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1410]), first, "generic_register.v", 19, 13, "", "v_branch/generic_register__Rz1", "if", "19,22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1411]), first, "generic_register.v", 19, 14, "", "v_branch/generic_register__Rz1", "else", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "generic_register.v", 16, 9, "", "v_branch/generic_register__Rz1", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1413]), first, "generic_register.v", 16, 10, "", "v_branch/generic_register__Rz1", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1414]), first, "generic_register.v", 15, 5, "", "v_line/generic_register__Rz1", "block", "15");
}
