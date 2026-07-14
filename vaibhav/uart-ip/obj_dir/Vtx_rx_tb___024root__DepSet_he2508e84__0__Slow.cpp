// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb__Syms.h"
#include "Vtx_rx_tb___024root.h"

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_initial__TOP(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_fcr__DOT____Vtogcov__wr_data))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_fcr__DOT____Vtogcov__wr_data 
            = (0xfff7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_fcr__DOT____Vtogcov__wr_data));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtx_rx_tb___024root___dump_triggers__stl(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_triggers__stl(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtx_rx_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtx_rx_tb___024root___stl_sequent__TOP__0(Vtx_rx_tb___024root* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb___024root____Vm_traceActivitySetAll(Vtx_rx_tb___024root* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);
VL_ATTR_COLD void Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0(Vtx_rx_tb_generic_register__Rz1* vlSelf);

VL_ATTR_COLD void Vtx_rx_tb___024root___eval_stl(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtx_rx_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vtx_rx_tb___024root____Vm_traceActivitySetAll(vlSelf);
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk));
        Vtx_rx_tb_generic_register__Rz1___stl_sequent__TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr__0((&vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr));
    }
}

VL_ATTR_COLD void Vtx_rx_tb___024root___stl_sequent__TOP__0(Vtx_rx_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0;
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0 = 0;
    CData/*0:0*/ tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2;
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2 = 0;
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
    if (((IData)(vlSelfRef.tx) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__tx))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__tx = vlSelfRef.tx;
    }
    if (((IData)(vlSelfRef.s_awvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awvalid))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awvalid 
            = vlSelfRef.s_awvalid;
    }
    if (((IData)(vlSelfRef.s_awready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awready))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_awready 
            = vlSelfRef.s_awready;
    }
    if (((IData)(vlSelfRef.s_wvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wvalid))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wvalid 
            = vlSelfRef.s_wvalid;
    }
    if (((IData)(vlSelfRef.s_wready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wready))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_wready 
            = vlSelfRef.s_wready;
    }
    if (((IData)(vlSelfRef.s_bvalid) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_bvalid))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_bvalid 
            = vlSelfRef.s_bvalid;
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
    if (((IData)(vlSelfRef.s_rready) ^ (IData)(vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rready))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelfRef.tx_rx_tb__DOT____Vtogcov__s_rready 
            = vlSelfRef.s_rready;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_en))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__regfile_wr_en 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_tick))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT____Vtogcov__oversample_tick 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_done))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_addr_done 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_done))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT____Vtogcov__wr_data_done 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done;
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
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff1))) {
        ++(vlSymsp->__Vcoverage[903]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff1 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff2))) {
        ++(vlSymsp->__Vcoverage[904]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_ff2 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_prev))) {
        ++(vlSymsp->__Vcoverage[905]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__rx_prev 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__received_parity_bit))) {
        ++(vlSymsp->__Vcoverage[928]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__received_parity_bit 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit;
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
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_ok))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_ok))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_ok))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok;
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
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_FAIL))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_fcr_sc_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_FAIL))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_dlab_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_FAIL))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__rc_rsv_FAIL 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL;
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
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__prev_pin) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__prev_pin))) {
        ++(vlSymsp->__Vcoverage[1191]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__prev_pin 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__prev_pin;
    }
    if (((0U != (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                       >> 5U))) ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__parity_enabled))) {
        ++(vlSymsp->__Vcoverage[1228]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__parity_enabled 
            = (0U != (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                            >> 5U)));
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff1))) {
        ++(vlSymsp->__Vcoverage[1231]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff1 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff2))) {
        ++(vlSymsp->__Vcoverage[1232]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_ff2 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_prev))) {
        ++(vlSymsp->__Vcoverage[1233]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__spec_dlab_ier_access_ok) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__spec_dlab_ier_access_ok))) {
        ++(vlSymsp->__Vcoverage[1276]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__spec_dlab_ier_access_ok 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__spec_dlab_ier_access_ok;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__rst_prev))) {
        ++(vlSymsp->__Vcoverage[1277]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__rst_prev 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_written_with_reset_bits))) {
        ++(vlSymsp->__Vcoverage[1289]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__fcr_written_with_reset_bits 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dlab_was_set))) {
        ++(vlSymsp->__Vcoverage[1315]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT____Vtogcov__dlab_was_set 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set;
    }
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
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge 
        = ((~ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2)) 
           & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev));
    vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall 
        = ((~ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2)) 
           & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev));
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
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_0 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (0U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
    tx_rx_tb__DOT__dut__DOT__u_regfile__DOT____VdfgRegularize_h3f02bd51_0_2 
        = ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en) 
           & (2U == (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr)));
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
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry 
        = (0x10U <= ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum) 
                     + (0xfU & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val))));
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
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int 
        = ((0xff00U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val) 
                       << 8U)) | (0xffU & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val)));
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
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__falling_edge))) {
        ++(vlSymsp->__Vcoverage[906]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT____Vtogcov__falling_edge 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge;
    }
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_fall))) {
        ++(vlSymsp->__Vcoverage[1237]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT____Vtogcov__pin_fall 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall;
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
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_pass))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT____Vtogcov__any_pass 
            = vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass;
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
    if (((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry) 
         ^ (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_carry))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT____Vtogcov__frac_carry 
            = vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry;
    }
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
    vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider 
        = (0xffffU & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int) 
                      + ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry)
                          ? 1U : 0U)));
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
}

VL_ATTR_COLD void Vtx_rx_tb___024root___configure_coverage(Vtx_rx_tb___024root* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root___configure_coverage\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tx_rx_tb.v", 21, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tx_rx_tb.v", 22, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tx_rx_tb.v", 23, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "rx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tx_rx_tb.v", 24, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "tx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "tx_rx_tb.v", 27, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awaddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "tx_rx_tb.v", 28, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "tx_rx_tb.v", 29, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_awready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tx_rx_tb.v", 32, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tx_rx_tb.v", 33, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tx_rx_tb.v", 34, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tx_rx_tb.v", 35, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wstrb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tx_rx_tb.v", 35, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wstrb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tx_rx_tb.v", 35, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wstrb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tx_rx_tb.v", 35, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_wstrb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tx_rx_tb.v", 38, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_bvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tx_rx_tb.v", 39, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_bready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "tx_rx_tb.v", 42, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_araddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "tx_rx_tb.v", 43, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_arvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "tx_rx_tb.v", 44, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_arready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "tx_rx_tb.v", 47, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "tx_rx_tb.v", 48, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "tx_rx_tb.v", 49, 24, ".tx_rx_tb", "v_toggle/tx_rx_tb", "s_rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart_top.v", 8, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart_top.v", 9, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "uart_top.v", 12, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "rx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "uart_top.v", 13, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "tx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "uart_top.v", 16, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awaddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "uart_top.v", 17, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "uart_top.v", 18, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_awready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "uart_top.v", 21, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "uart_top.v", 22, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wstrb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "uart_top.v", 22, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wstrb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "uart_top.v", 22, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wstrb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "uart_top.v", 22, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wstrb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "uart_top.v", 23, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "uart_top.v", 24, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_wready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "uart_top.v", 27, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_bresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "uart_top.v", 27, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_bresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "uart_top.v", 28, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_bvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "uart_top.v", 29, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_bready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "uart_top.v", 32, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_araddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "uart_top.v", 33, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_arvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "uart_top.v", 34, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_arready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "uart_top.v", 37, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "uart_top.v", 38, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "uart_top.v", 38, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "uart_top.v", 39, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "uart_top.v", 40, 39, ".tx_rx_tb.dut", "v_toggle/uart_top", "s_rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "uart_top.v", 44, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "uart_top.v", 45, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "uart_top.v", 45, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "uart_top.v", 45, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "uart_top.v", 45, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "uart_top.v", 45, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "uart_top.v", 46, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "uart_top.v", 47, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "uart_top.v", 47, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "uart_top.v", 47, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "uart_top.v", 47, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "uart_top.v", 47, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "uart_top.v", 48, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "regfile_rd_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "uart_top.v", 49, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "clk_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "uart_top.v", 52, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "thr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "uart_top.v", 53, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dll_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "uart_top.v", 54, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlh_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "uart_top.v", 55, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "dlf_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "uart_top.v", 56, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "lcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "uart_top.v", 59, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "oversample_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "uart_top.v", 60, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "uart_top.v", 60, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "uart_top.v", 60, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "uart_top.v", 60, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "uart_top.v", 60, 17, ".tx_rx_tb.dut", "v_toggle/uart_top", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "uart_top.v", 116, 10, ".tx_rx_tb.dut", "v_toggle/uart_top", "tx_start_pulse", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "uart_top.v", 153, 16, ".tx_rx_tb.dut", "v_toggle/uart_top", "fc_feature_manifest[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "uart_top.v", 160, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "uart_top.v", 160, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "uart_top.v", 161, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "uart_top.v", 161, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "uart_top.v", 162, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "uart_top.v", 162, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "uart_top.v", 163, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "uart_top.v", 163, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "uart_top.v", 164, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "uart_top.v", 164, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "uart_top.v", 167, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "uart_top.v", 167, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "uart_top.v", 168, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "uart_top.v", 168, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "uart_top.v", 169, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "uart_top.v", 169, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "uart_top.v", 172, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "uart_top.v", 172, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "uart_top.v", 173, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "uart_top.v", 173, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "uart_top.v", 174, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "uart_top.v", 174, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "uart_top.v", 175, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "uart_top.v", 175, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "uart_top.v", 176, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "uart_top.v", 176, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "uart_top.v", 179, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "uart_top.v", 179, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "uart_top.v", 180, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "uart_top.v", 180, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "uart_top.v", 181, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "uart_top.v", 181, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "uart_top.v", 182, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "uart_top.v", 182, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "uart_top.v", 185, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "uart_top.v", 185, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "uart_top.v", 186, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "uart_top.v", 186, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "uart_top.v", 187, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "uart_top.v", 187, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "uart_top.v", 188, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "uart_top.v", 188, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "uart_top.v", 156, 9, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "156-157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "uart_top.v", 156, 10, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "uart_top.v", 155, 5, ".tx_rx_tb.dut", "v_line/uart_top", "block", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "uart_top.v", 195, 61, ".tx_rx_tb.dut.cov_wl_5", "v_user/uart_top", "cov_wl_5", "195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "uart_top.v", 195, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "uart_top.v", 195, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "uart_top.v", 196, 61, ".tx_rx_tb.dut.cov_wl_6", "v_user/uart_top", "cov_wl_6", "196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "uart_top.v", 196, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "uart_top.v", 196, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "uart_top.v", 197, 61, ".tx_rx_tb.dut.cov_wl_7", "v_user/uart_top", "cov_wl_7", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "uart_top.v", 197, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "uart_top.v", 197, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "uart_top.v", 198, 61, ".tx_rx_tb.dut.cov_wl_8", "v_user/uart_top", "cov_wl_8", "198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "uart_top.v", 198, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "uart_top.v", 198, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "uart_top.v", 199, 61, ".tx_rx_tb.dut.cov_wl_9", "v_user/uart_top", "cov_wl_9", "199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "uart_top.v", 199, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "199");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "uart_top.v", 199, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "uart_top.v", 200, 61, ".tx_rx_tb.dut.cov_sb_1", "v_user/uart_top", "cov_sb_1", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "uart_top.v", 200, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "uart_top.v", 200, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "uart_top.v", 201, 61, ".tx_rx_tb.dut.cov_sb_1p5", "v_user/uart_top", "cov_sb_1p5", "201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "uart_top.v", 201, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "uart_top.v", 201, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "uart_top.v", 202, 61, ".tx_rx_tb.dut.cov_sb_2", "v_user/uart_top", "cov_sb_2", "202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "uart_top.v", 202, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "202");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "uart_top.v", 202, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "uart_top.v", 203, 61, ".tx_rx_tb.dut.cov_par_none", "v_user/uart_top", "cov_par_none", "203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "uart_top.v", 203, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "203");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "uart_top.v", 203, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "uart_top.v", 204, 61, ".tx_rx_tb.dut.cov_par_odd", "v_user/uart_top", "cov_par_odd", "204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "uart_top.v", 204, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "uart_top.v", 204, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "uart_top.v", 205, 61, ".tx_rx_tb.dut.cov_par_even", "v_user/uart_top", "cov_par_even", "205");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "uart_top.v", 205, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "205");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "uart_top.v", 205, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "uart_top.v", 206, 61, ".tx_rx_tb.dut.cov_par_mark", "v_user/uart_top", "cov_par_mark", "206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "uart_top.v", 206, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "206");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "uart_top.v", 206, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "uart_top.v", 207, 61, ".tx_rx_tb.dut.cov_par_space", "v_user/uart_top", "cov_par_space", "207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "uart_top.v", 207, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "uart_top.v", 207, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "uart_top.v", 208, 61, ".tx_rx_tb.dut.cov_tx_break", "v_user/uart_top", "cov_tx_break", "208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "uart_top.v", 208, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "uart_top.v", 208, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "uart_top.v", 209, 61, ".tx_rx_tb.dut.cov_rx_frame_er", "v_user/uart_top", "cov_rx_frame_er", "209");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "uart_top.v", 209, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "209");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "uart_top.v", 209, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "uart_top.v", 210, 61, ".tx_rx_tb.dut.cov_rx_par_er", "v_user/uart_top", "cov_rx_par_er", "210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "uart_top.v", 210, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "uart_top.v", 210, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "uart_top.v", 211, 61, ".tx_rx_tb.dut.cov_rx_break_de", "v_user/uart_top", "cov_rx_break_de", "211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "uart_top.v", 211, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "uart_top.v", 211, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "uart_top.v", 212, 61, ".tx_rx_tb.dut.cov_os_16x", "v_user/uart_top", "cov_os_16x", "212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "uart_top.v", 212, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "uart_top.v", 212, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "uart_top.v", 213, 61, ".tx_rx_tb.dut.cov_os_8x", "v_user/uart_top", "cov_os_8x", "213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "uart_top.v", 213, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "uart_top.v", 213, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "uart_top.v", 214, 61, ".tx_rx_tb.dut.cov_os_4x", "v_user/uart_top", "cov_os_4x", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "uart_top.v", 214, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "uart_top.v", 214, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "uart_top.v", 215, 61, ".tx_rx_tb.dut.cov_os_3x", "v_user/uart_top", "cov_os_3x", "215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "uart_top.v", 215, 13, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "215");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "uart_top.v", 215, 14, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "uart_top.v", 194, 9, ".tx_rx_tb.dut", "v_branch/uart_top", "if", "194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "uart_top.v", 194, 10, ".tx_rx_tb.dut", "v_branch/uart_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "uart_top.v", 193, 5, ".tx_rx_tb.dut", "v_line/uart_top", "block", "193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "axi4lite_slave.v", 7, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "axi4lite_slave.v", 8, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "axi4lite_slave.v", 11, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awaddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "axi4lite_slave.v", 12, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "axi4lite_slave.v", 13, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_awready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "axi4lite_slave.v", 16, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "axi4lite_slave.v", 17, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wstrb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "axi4lite_slave.v", 17, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wstrb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "axi4lite_slave.v", 17, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wstrb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "axi4lite_slave.v", 17, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wstrb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "axi4lite_slave.v", 18, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "axi4lite_slave.v", 19, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_wready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "axi4lite_slave.v", 22, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_bresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "axi4lite_slave.v", 22, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_bresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "axi4lite_slave.v", 23, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_bvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "axi4lite_slave.v", 24, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_bready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "axi4lite_slave.v", 27, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_araddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "axi4lite_slave.v", 28, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_arvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "axi4lite_slave.v", 29, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_arready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "axi4lite_slave.v", 32, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "axi4lite_slave.v", 33, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "axi4lite_slave.v", 33, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "axi4lite_slave.v", 34, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "axi4lite_slave.v", 35, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "s_rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "axi4lite_slave.v", 38, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "axi4lite_slave.v", 39, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "axi4lite_slave.v", 39, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "axi4lite_slave.v", 39, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "axi4lite_slave.v", 39, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "axi4lite_slave.v", 39, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "axi4lite_slave.v", 40, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "axi4lite_slave.v", 41, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "axi4lite_slave.v", 41, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "axi4lite_slave.v", 41, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "axi4lite_slave.v", 41, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "axi4lite_slave.v", 41, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "axi4lite_slave.v", 42, 39, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "regfile_rd_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "axi4lite_slave.v", 46, 30, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_latch[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "axi4lite_slave.v", 47, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_latch[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "axi4lite_slave.v", 48, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_addr_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "axi4lite_slave.v", 49, 31, ".tx_rx_tb.dut.u_axi_slave", "v_toggle/axi4lite_slave", "wr_data_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "axi4lite_slave.v", 59, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "59-62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "axi4lite_slave.v", 59, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "64-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "axi4lite_slave.v", 68, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "axi4lite_slave.v", 68, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "axi4lite_slave.v", 53, 9, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "53-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "axi4lite_slave.v", 53, 10, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "axi4lite_slave.v", 52, 5, ".tx_rx_tb.dut.u_axi_slave", "v_line/axi4lite_slave", "block", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "axi4lite_slave.v", 82, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "82-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "axi4lite_slave.v", 82, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "87-88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "axi4lite_slave.v", 91, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "91-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "axi4lite_slave.v", 91, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "axi4lite_slave.v", 76, 9, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "76-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "axi4lite_slave.v", 76, 10, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "axi4lite_slave.v", 75, 5, ".tx_rx_tb.dut.u_axi_slave", "v_line/axi4lite_slave", "block", "75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "axi4lite_slave.v", 116, 61, ".tx_rx_tb.dut.u_axi_slave", "v_line/axi4lite_slave", "case", "116-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "axi4lite_slave.v", 109, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "109-112,114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "axi4lite_slave.v", 109, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "axi4lite_slave.v", 130, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "130-131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "axi4lite_slave.v", 130, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "axi4lite_slave.v", 99, 9, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "99-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "axi4lite_slave.v", 99, 10, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "106-107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "axi4lite_slave.v", 98, 5, ".tx_rx_tb.dut.u_axi_slave", "v_line/axi4lite_slave", "block", "98");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "axi4lite_slave.v", 153, 61, ".tx_rx_tb.dut.u_axi_slave", "v_line/axi4lite_slave", "case", "153-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "axi4lite_slave.v", 148, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "148-149,151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "axi4lite_slave.v", 148, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "axi4lite_slave.v", 167, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "167-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "axi4lite_slave.v", 167, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "axi4lite_slave.v", 172, 13, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "172-173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "axi4lite_slave.v", 172, 14, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "axi4lite_slave.v", 138, 9, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "if", "138-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "axi4lite_slave.v", 138, 10, ".tx_rx_tb.dut.u_axi_slave", "v_branch/axi4lite_slave", "else", "145-146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "axi4lite_slave.v", 137, 5, ".tx_rx_tb.dut.u_axi_slave", "v_line/axi4lite_slave", "block", "137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart_regfile.v", 4, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart_regfile.v", 5, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "uart_regfile.v", 7, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "uart_regfile.v", 8, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "uart_regfile.v", 8, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "uart_regfile.v", 8, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "uart_regfile.v", 8, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "uart_regfile.v", 8, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "uart_regfile.v", 9, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "uart_regfile.v", 11, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "uart_regfile.v", 11, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "uart_regfile.v", 11, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "uart_regfile.v", 11, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "uart_regfile.v", 11, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "uart_regfile.v", 12, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rd_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "uart_regfile.v", 14, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "uart_regfile.v", 15, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "uart_regfile.v", 16, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "uart_regfile.v", 17, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "uart_regfile.v", 18, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "uart_regfile.v", 19, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "uart_regfile.v", 20, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "uart_regfile.v", 21, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "uart_regfile.v", 28, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "uart_regfile.v", 29, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "uart_regfile.v", 30, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "uart_regfile.v", 31, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "uart_regfile.v", 32, 24, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "uart_regfile.v", 49, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlab", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "uart_regfile.v", 52, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "thr_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "uart_regfile.v", 53, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dll_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "uart_regfile.v", 54, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "ier_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "uart_regfile.v", 55, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlh_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "uart_regfile.v", 56, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "fcr_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "uart_regfile.v", 57, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "lcr_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "uart_regfile.v", 58, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mcr_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "uart_regfile.v", 59, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "dlf_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "uart_regfile.v", 60, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "mode_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "uart_regfile.v", 61, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "clk_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "uart_regfile.v", 62, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "rxthr_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "uart_regfile.v", 63, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "txthr_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "uart_regfile.v", 64, 10, ".tx_rx_tb.dut.u_regfile", "v_toggle/uart_regfile", "timeout_wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "uart_regfile.v", 121, 29, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "uart_regfile.v", 122, 25, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "122");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "uart_regfile.v", 123, 25, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "uart_regfile.v", 124, 21, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "uart_regfile.v", 125, 21, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "uart_regfile.v", 126, 21, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "uart_regfile.v", 127, 21, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "uart_regfile.v", 128, 21, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "128");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "uart_regfile.v", 129, 22, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "uart_regfile.v", 130, 21, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "130");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "uart_regfile.v", 131, 23, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "uart_regfile.v", 132, 23, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "uart_regfile.v", 133, 25, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "case", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "uart_regfile.v", 119, 5, ".tx_rx_tb.dut.u_regfile", "v_line/uart_regfile", "block", "119-120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "generic_register.v", 8, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "generic_register.v", 9, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "generic_register.v", 10, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_toggle/generic_register__Rz2_Sz3", "reg_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "generic_register.v", 19, 13, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_branch/generic_register__Rz2_Sz3", "if", "19,22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "generic_register.v", 19, 14, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_branch/generic_register__Rz2_Sz3", "else", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "generic_register.v", 16, 9, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_branch/generic_register__Rz2_Sz3", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "generic_register.v", 16, 10, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_branch/generic_register__Rz2_Sz3", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "generic_register.v", 15, 5, ".tx_rx_tb.dut.u_regfile.u_fcr", "v_line/generic_register__Rz2_Sz3", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "generic_register.v", 8, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "generic_register.v", 9, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "generic_register.v", 10, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_toggle/generic_register__Rz4", "reg_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "generic_register.v", 19, 13, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_branch/generic_register__Rz4", "if", "19,22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "generic_register.v", 19, 14, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_branch/generic_register__Rz4", "else", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "generic_register.v", 16, 9, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_branch/generic_register__Rz4", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "generic_register.v", 16, 10, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_branch/generic_register__Rz4", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "generic_register.v", 15, 5, ".tx_rx_tb.dut.u_regfile.u_lcr", "v_line/generic_register__Rz4", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "generic_register.v", 8, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "generic_register.v", 9, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "generic_register.v", 10, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_toggle/generic_register__Rz5", "reg_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "generic_register.v", 19, 13, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_branch/generic_register__Rz5", "if", "19,22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "generic_register.v", 19, 14, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_branch/generic_register__Rz5", "else", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "generic_register.v", 16, 9, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_branch/generic_register__Rz5", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "generic_register.v", 16, 10, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_branch/generic_register__Rz5", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "generic_register.v", 15, 5, ".tx_rx_tb.dut.u_regfile.u_rxthr", "v_line/generic_register__Rz5", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "generic_register.v", 8, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "generic_register.v", 9, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "generic_register.v", 10, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "generic_register.v", 11, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "generic_register.v", 12, 31, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_toggle/generic_register__Rz6", "reg_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "generic_register.v", 19, 13, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_branch/generic_register__Rz6", "if", "19,22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "generic_register.v", 19, 14, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_branch/generic_register__Rz6", "else", "23-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "generic_register.v", 16, 9, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_branch/generic_register__Rz6", "if", "16-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "generic_register.v", 16, 10, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_branch/generic_register__Rz6", "else", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "generic_register.v", 15, 5, ".tx_rx_tb.dut.u_regfile.u_timeout", "v_line/generic_register__Rz6", "block", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "baudrategenerator.v", 5, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "baudrategenerator.v", 6, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "baudrategenerator.v", 7, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dll_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "baudrategenerator.v", 8, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlh_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "baudrategenerator.v", 9, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "dlf_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "baudrategenerator.v", 10, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "os_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "baudrategenerator.v", 10, 24, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "os_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "baudrategenerator.v", 12, 25, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "oversample_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "baudrategenerator.v", 13, 26, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "baudrategenerator.v", 13, 26, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "baudrategenerator.v", 13, 26, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "baudrategenerator.v", 13, 26, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "baudrategenerator.v", 13, 26, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "baudrategenerator.v", 17, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_int[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "baudrategenerator.v", 20, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_frac[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "baudrategenerator.v", 20, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_frac[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "baudrategenerator.v", 20, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_frac[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "baudrategenerator.v", 20, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "divider_frac[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "baudrategenerator.v", 33, 15, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "frac_accum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "baudrategenerator.v", 33, 15, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "frac_accum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "baudrategenerator.v", 33, 15, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "frac_accum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "baudrategenerator.v", 33, 15, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "frac_accum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[690]), first, "baudrategenerator.v", 33, 15, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "frac_accum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[691]), first, "baudrategenerator.v", 34, 15, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "frac_carry", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "baudrategenerator.v", 37, 16, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "count[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "baudrategenerator.v", 40, 17, ".tx_rx_tb.dut.u_baud_gen", "v_toggle/baudrategenerator", "effective_divider[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "baudrategenerator.v", 48, 14, ".tx_rx_tb.dut.u_baud_gen", "v_line/baudrategenerator", "if", "48-50,52-53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "baudrategenerator.v", 48, 15, ".tx_rx_tb.dut.u_baud_gen", "v_line/baudrategenerator", "else", "55-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "baudrategenerator.v", 43, 9, ".tx_rx_tb.dut.u_baud_gen", "v_line/baudrategenerator", "elsif", "43-46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[727]), first, "baudrategenerator.v", 42, 5, ".tx_rx_tb.dut.u_baud_gen", "v_line/baudrategenerator", "block", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "os_sel_decoder.v", 3, 23, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_toggle/os_sel_decoder", "os_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "os_sel_decoder.v", 3, 23, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_toggle/os_sel_decoder", "os_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "os_sel_decoder.v", 4, 23, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_toggle/os_sel_decoder", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "os_sel_decoder.v", 4, 23, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_toggle/os_sel_decoder", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "os_sel_decoder.v", 4, 23, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_toggle/os_sel_decoder", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "os_sel_decoder.v", 4, 23, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_toggle/os_sel_decoder", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "os_sel_decoder.v", 4, 23, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_toggle/os_sel_decoder", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "os_sel_decoder.v", 9, 18, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_line/os_sel_decoder", "case", "9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "os_sel_decoder.v", 10, 18, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_line/os_sel_decoder", "case", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "os_sel_decoder.v", 11, 18, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_line/os_sel_decoder", "case", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "os_sel_decoder.v", 12, 18, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_line/os_sel_decoder", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "os_sel_decoder.v", 7, 5, ".tx_rx_tb.dut.u_baud_gen.u_os_decoder", "v_line/os_sel_decoder", "block", "7-8");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart_transmitter.v", 4, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart_transmitter.v", 5, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "uart_transmitter.v", 6, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_start", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "uart_transmitter.v", 7, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "oversample_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "uart_transmitter.v", 8, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_transmitter.v", 10, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "word_len_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_transmitter.v", 10, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "word_len_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_transmitter.v", 10, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "word_len_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_transmitter.v", 11, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_bits_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_transmitter.v", 11, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_bits_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_transmitter.v", 12, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_transmitter.v", 12, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_transmitter.v", 12, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "uart_transmitter.v", 13, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "break_ctrl", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "uart_transmitter.v", 14, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "uart_transmitter.v", 14, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "uart_transmitter.v", 14, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "uart_transmitter.v", 14, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "uart_transmitter.v", 14, 24, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "uart_transmitter.v", 16, 25, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "uart_transmitter.v", 17, 25, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "uart_transmitter.v", 18, 25, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "tx_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "uart_transmitter.v", 27, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "uart_transmitter.v", 27, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "uart_transmitter.v", 27, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "uart_transmitter.v", 28, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "shift_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "uart_transmitter.v", 29, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "bit_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "uart_transmitter.v", 29, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "bit_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "uart_transmitter.v", 29, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "bit_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "uart_transmitter.v", 29, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "bit_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "uart_transmitter.v", 30, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "os_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "uart_transmitter.v", 30, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "os_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "uart_transmitter.v", 30, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "os_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "uart_transmitter.v", 30, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "os_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "uart_transmitter.v", 30, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "os_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "uart_transmitter.v", 30, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "os_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "uart_transmitter.v", 31, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "uart_transmitter.v", 31, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "uart_transmitter.v", 31, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "uart_transmitter.v", 31, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "uart_transmitter.v", 31, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "uart_transmitter.v", 31, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "uart_transmitter.v", 33, 15, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_data_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "uart_transmitter.v", 38, 14, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "38-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "uart_transmitter.v", 38, 15, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "uart_transmitter.v", 35, 9, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "elsif", "35-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "uart_transmitter.v", 34, 5, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "block", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "uart_transmitter.v", 43, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "data_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "uart_transmitter.v", 43, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "data_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "uart_transmitter.v", 43, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "data_bits[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "uart_transmitter.v", 43, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "data_bits[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "uart_transmitter.v", 48, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_ticks[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "uart_transmitter.v", 48, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_ticks[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "uart_transmitter.v", 48, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_ticks[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "uart_transmitter.v", 48, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_ticks[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "uart_transmitter.v", 48, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_ticks[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "uart_transmitter.v", 48, 16, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "stop_ticks[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "uart_transmitter.v", 55, 10, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_enabled", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "uart_transmitter.v", 55, 26, ".tx_rx_tb.dut.u_tx", "v_toggle/uart_transmitter", "parity_bit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "uart_transmitter.v", 86, 25, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "86-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "uart_transmitter.v", 86, 26, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "uart_transmitter.v", 83, 25, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "case", "83-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "uart_transmitter.v", 97, 29, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "97-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "uart_transmitter.v", 97, 30, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "102-103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "uart_transmitter.v", 96, 25, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "uart_transmitter.v", 96, 26, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "uart_transmitter.v", 94, 26, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "case", "94-95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "uart_transmitter.v", 116, 37, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "116-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "uart_transmitter.v", 116, 38, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "119-121");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "uart_transmitter.v", 115, 33, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "uart_transmitter.v", 115, 34, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "124-125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "uart_transmitter.v", 111, 29, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "111-113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "uart_transmitter.v", 111, 30, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "128-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "uart_transmitter.v", 110, 25, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "uart_transmitter.v", 110, 26, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "uart_transmitter.v", 108, 25, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "case", "108-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "uart_transmitter.v", 137, 29, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "137-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "uart_transmitter.v", 137, 30, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "142-143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "uart_transmitter.v", 136, 25, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "uart_transmitter.v", 136, 26, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "uart_transmitter.v", 134, 27, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "case", "134-135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "uart_transmitter.v", 151, 29, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "151-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "uart_transmitter.v", 151, 30, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "uart_transmitter.v", 150, 25, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[813]), first, "uart_transmitter.v", 150, 26, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[814]), first, "uart_transmitter.v", 148, 25, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "case", "148-149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[815]), first, "uart_transmitter.v", 78, 13, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "78-79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[816]), first, "uart_transmitter.v", 78, 14, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[817]), first, "uart_transmitter.v", 65, 9, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "if", "65-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[818]), first, "uart_transmitter.v", 65, 10, ".tx_rx_tb.dut.u_tx", "v_branch/uart_transmitter", "else", "75-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[819]), first, "uart_transmitter.v", 64, 5, ".tx_rx_tb.dut.u_tx", "v_line/uart_transmitter", "block", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "word_len_decoder.v", 3, 23, ".tx_rx_tb.dut.u_tx.u_word_len", "v_toggle/word_len_decoder", "word_len_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "word_len_decoder.v", 3, 23, ".tx_rx_tb.dut.u_tx.u_word_len", "v_toggle/word_len_decoder", "word_len_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "word_len_decoder.v", 3, 23, ".tx_rx_tb.dut.u_tx.u_word_len", "v_toggle/word_len_decoder", "word_len_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_word_len", "v_toggle/word_len_decoder", "data_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_word_len", "v_toggle/word_len_decoder", "data_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_word_len", "v_toggle/word_len_decoder", "data_bits[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_word_len", "v_toggle/word_len_decoder", "data_bits[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[820]), first, "word_len_decoder.v", 9, 19, ".tx_rx_tb.dut.u_tx.u_word_len", "v_line/word_len_decoder", "case", "9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[821]), first, "word_len_decoder.v", 10, 19, ".tx_rx_tb.dut.u_tx.u_word_len", "v_line/word_len_decoder", "case", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "word_len_decoder.v", 11, 19, ".tx_rx_tb.dut.u_tx.u_word_len", "v_line/word_len_decoder", "case", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "word_len_decoder.v", 12, 19, ".tx_rx_tb.dut.u_tx.u_word_len", "v_line/word_len_decoder", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "word_len_decoder.v", 13, 19, ".tx_rx_tb.dut.u_tx.u_word_len", "v_line/word_len_decoder", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "word_len_decoder.v", 14, 13, ".tx_rx_tb.dut.u_tx.u_word_len", "v_line/word_len_decoder", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "word_len_decoder.v", 7, 5, ".tx_rx_tb.dut.u_tx.u_word_len", "v_line/word_len_decoder", "block", "7-8");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "stop_bits_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_bits_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "stop_bits_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_bits_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "stop_bits_decoder.v", 12, 18, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_line/stop_bits_decoder", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "stop_bits_decoder.v", 13, 18, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_line/stop_bits_decoder", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "stop_bits_decoder.v", 14, 18, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_line/stop_bits_decoder", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "stop_bits_decoder.v", 15, 13, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_line/stop_bits_decoder", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "stop_bits_decoder.v", 9, 5, ".tx_rx_tb.dut.u_tx.u_stop_bits", "v_line/stop_bits_decoder", "block", "9-10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "parity_decoder.v", 3, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "parity_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "parity_decoder.v", 3, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "parity_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "parity_decoder.v", 3, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "parity_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "data_bits_in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "num_data_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "num_data_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "num_data_bits[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "num_data_bits[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "parity_decoder.v", 6, 24, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "parity_enabled", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "parity_decoder.v", 7, 24, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "parity_bit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "ones_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "ones_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "ones_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "ones_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_tx.u_parity", "v_toggle/parity_decoder", "masked_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "parity_decoder.v", 21, 13, ".tx_rx_tb.dut.u_tx.u_parity", "v_branch/parity_decoder", "if", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "parity_decoder.v", 21, 14, ".tx_rx_tb.dut.u_tx.u_parity", "v_branch/parity_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "parity_decoder.v", 20, 9, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "block", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "parity_decoder.v", 25, 19, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "case", "25-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "parity_decoder.v", 29, 19, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "case", "29-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "parity_decoder.v", 33, 19, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "case", "33-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "parity_decoder.v", 37, 19, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "case", "37-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "parity_decoder.v", 41, 19, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "case", "41-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "parity_decoder.v", 45, 13, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "case", "45-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "parity_decoder.v", 15, 5, ".tx_rx_tb.dut.u_tx.u_parity", "v_line/parity_decoder", "block", "15,17,19-20,24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart_receiver.v", 4, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart_receiver.v", 5, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "uart_receiver.v", 6, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "oversample_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "uart_receiver.v", 7, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_receiver.v", 9, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "word_len_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_receiver.v", 9, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "word_len_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_receiver.v", 9, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "word_len_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_receiver.v", 10, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_bits_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_receiver.v", 10, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_bits_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_receiver.v", 11, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "parity_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_receiver.v", 11, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "parity_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_receiver.v", 11, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "parity_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "uart_receiver.v", 12, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "uart_receiver.v", 12, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "uart_receiver.v", 12, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "uart_receiver.v", 12, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "uart_receiver.v", 12, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "uart_receiver.v", 14, 24, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[864]), first, "uart_receiver.v", 15, 25, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[865]), first, "uart_receiver.v", 16, 25, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_busy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[866]), first, "uart_receiver.v", 17, 25, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "frame_error", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[867]), first, "uart_receiver.v", 18, 25, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "parity_error", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "uart_receiver.v", 19, 25, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "break_detect", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "uart_receiver.v", 28, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "uart_receiver.v", 28, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "uart_receiver.v", 28, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "uart_receiver.v", 29, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "shift_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "uart_receiver.v", 30, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "bit_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "uart_receiver.v", 30, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "bit_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "uart_receiver.v", 30, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "bit_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "uart_receiver.v", 30, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "bit_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "uart_receiver.v", 31, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "os_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[886]), first, "uart_receiver.v", 31, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "os_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[887]), first, "uart_receiver.v", 31, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "os_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[888]), first, "uart_receiver.v", 31, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "os_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[889]), first, "uart_receiver.v", 31, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "os_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[890]), first, "uart_receiver.v", 31, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "os_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[891]), first, "uart_receiver.v", 32, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[892]), first, "uart_receiver.v", 32, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[893]), first, "uart_receiver.v", 32, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[894]), first, "uart_receiver.v", 32, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[895]), first, "uart_receiver.v", 32, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[896]), first, "uart_receiver.v", 32, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[897]), first, "uart_receiver.v", 33, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "zero_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[898]), first, "uart_receiver.v", 33, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "zero_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[899]), first, "uart_receiver.v", 33, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "zero_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[900]), first, "uart_receiver.v", 33, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "zero_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[901]), first, "uart_receiver.v", 33, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "zero_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[902]), first, "uart_receiver.v", 33, 15, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "zero_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[903]), first, "uart_receiver.v", 35, 9, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_ff1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[904]), first, "uart_receiver.v", 35, 17, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_ff2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[905]), first, "uart_receiver.v", 35, 25, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_prev", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[904]), first, "uart_receiver.v", 36, 10, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "rx_sync", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[906]), first, "uart_receiver.v", 37, 10, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "falling_edge", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[907]), first, "uart_receiver.v", 39, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "data_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[908]), first, "uart_receiver.v", 39, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "data_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[909]), first, "uart_receiver.v", 39, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "data_bits[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[910]), first, "uart_receiver.v", 39, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "data_bits[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[911]), first, "uart_receiver.v", 44, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_ticks[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[912]), first, "uart_receiver.v", 44, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_ticks[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[913]), first, "uart_receiver.v", 44, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_ticks[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[914]), first, "uart_receiver.v", 44, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_ticks[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[915]), first, "uart_receiver.v", 44, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_ticks[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[916]), first, "uart_receiver.v", 44, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "stop_ticks[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[917]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[918]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[919]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[920]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[921]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[922]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[923]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[924]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[925]), first, "uart_receiver.v", 51, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "aligned_shift_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[926]), first, "uart_receiver.v", 53, 10, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "parity_enabled", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[927]), first, "uart_receiver.v", 53, 26, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "expected_parity_bit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[928]), first, "uart_receiver.v", 54, 10, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "received_parity_bit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[929]), first, "uart_receiver.v", 64, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "midpoint[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[930]), first, "uart_receiver.v", 64, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "midpoint[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[931]), first, "uart_receiver.v", 64, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "midpoint[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[932]), first, "uart_receiver.v", 64, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "midpoint[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[933]), first, "uart_receiver.v", 64, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "midpoint[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[934]), first, "uart_receiver.v", 64, 16, ".tx_rx_tb.dut.u_rx", "v_toggle/uart_receiver", "midpoint[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[935]), first, "uart_receiver.v", 67, 9, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "67-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[936]), first, "uart_receiver.v", 67, 10, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "72-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[937]), first, "uart_receiver.v", 66, 5, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "block", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[938]), first, "uart_receiver.v", 100, 21, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "100-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[939]), first, "uart_receiver.v", 100, 22, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[940]), first, "uart_receiver.v", 98, 21, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "case", "98-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[941]), first, "uart_receiver.v", 113, 29, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "113-116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[942]), first, "uart_receiver.v", 113, 30, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[943]), first, "uart_receiver.v", 112, 25, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[944]), first, "uart_receiver.v", 112, 26, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[945]), first, "uart_receiver.v", 110, 21, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "110-111");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[946]), first, "uart_receiver.v", 110, 22, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[947]), first, "uart_receiver.v", 108, 22, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "case", "108-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[948]), first, "uart_receiver.v", 134, 29, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[949]), first, "uart_receiver.v", 134, 30, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[950]), first, "uart_receiver.v", 137, 33, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "137-138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[951]), first, "uart_receiver.v", 137, 34, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "140-142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[952]), first, "uart_receiver.v", 136, 29, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[953]), first, "uart_receiver.v", 136, 30, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "145-146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[954]), first, "uart_receiver.v", 130, 25, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "130-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[955]), first, "uart_receiver.v", 130, 26, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[956]), first, "uart_receiver.v", 128, 21, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "128-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[957]), first, "uart_receiver.v", 128, 22, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[958]), first, "uart_receiver.v", 127, 21, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "case", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[959]), first, "uart_receiver.v", 155, 25, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "155-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[960]), first, "uart_receiver.v", 155, 26, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[961]), first, "uart_receiver.v", 153, 21, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "153-154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[962]), first, "uart_receiver.v", 153, 22, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[963]), first, "uart_receiver.v", 152, 23, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "case", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[964]), first, "uart_receiver.v", 170, 29, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[965]), first, "uart_receiver.v", 170, 30, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[966]), first, "uart_receiver.v", 176, 38, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "if", "176-178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[967]), first, "uart_receiver.v", 176, 39, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "else", "180-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[968]), first, "uart_receiver.v", 173, 33, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "elsif", "173-174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[969]), first, "uart_receiver.v", 186, 33, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[970]), first, "uart_receiver.v", 186, 34, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "189-190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[971]), first, "uart_receiver.v", 172, 29, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "172,193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[972]), first, "uart_receiver.v", 172, 30, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "195-196");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[973]), first, "uart_receiver.v", 167, 25, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "167-168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[974]), first, "uart_receiver.v", 167, 26, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[975]), first, "uart_receiver.v", 165, 21, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "165-166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[976]), first, "uart_receiver.v", 165, 22, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[977]), first, "uart_receiver.v", 164, 21, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "case", "164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[978]), first, "uart_receiver.v", 80, 9, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "if", "80-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[979]), first, "uart_receiver.v", 80, 10, ".tx_rx_tb.dut.u_rx", "v_branch/uart_receiver", "else", "94-95,97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[980]), first, "uart_receiver.v", 79, 5, ".tx_rx_tb.dut.u_rx", "v_line/uart_receiver", "block", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "word_len_decoder.v", 3, 23, ".tx_rx_tb.dut.u_rx.u_word_len", "v_toggle/word_len_decoder", "word_len_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "word_len_decoder.v", 3, 23, ".tx_rx_tb.dut.u_rx.u_word_len", "v_toggle/word_len_decoder", "word_len_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "word_len_decoder.v", 3, 23, ".tx_rx_tb.dut.u_rx.u_word_len", "v_toggle/word_len_decoder", "word_len_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[907]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_word_len", "v_toggle/word_len_decoder", "data_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[908]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_word_len", "v_toggle/word_len_decoder", "data_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[909]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_word_len", "v_toggle/word_len_decoder", "data_bits[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[910]), first, "word_len_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_word_len", "v_toggle/word_len_decoder", "data_bits[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[981]), first, "word_len_decoder.v", 9, 19, ".tx_rx_tb.dut.u_rx.u_word_len", "v_line/word_len_decoder", "case", "9");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[982]), first, "word_len_decoder.v", 10, 19, ".tx_rx_tb.dut.u_rx.u_word_len", "v_line/word_len_decoder", "case", "10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[983]), first, "word_len_decoder.v", 11, 19, ".tx_rx_tb.dut.u_rx.u_word_len", "v_line/word_len_decoder", "case", "11");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[984]), first, "word_len_decoder.v", 12, 19, ".tx_rx_tb.dut.u_rx.u_word_len", "v_line/word_len_decoder", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[985]), first, "word_len_decoder.v", 13, 19, ".tx_rx_tb.dut.u_rx.u_word_len", "v_line/word_len_decoder", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[986]), first, "word_len_decoder.v", 14, 13, ".tx_rx_tb.dut.u_rx.u_word_len", "v_line/word_len_decoder", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[987]), first, "word_len_decoder.v", 7, 5, ".tx_rx_tb.dut.u_rx.u_word_len", "v_line/word_len_decoder", "block", "7-8");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "stop_bits_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_bits_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "stop_bits_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_bits_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "stop_bits_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[911]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[912]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[913]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[914]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[915]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[916]), first, "stop_bits_decoder.v", 6, 23, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_toggle/stop_bits_decoder", "stop_ticks[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[988]), first, "stop_bits_decoder.v", 12, 18, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_line/stop_bits_decoder", "case", "12");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[989]), first, "stop_bits_decoder.v", 13, 18, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_line/stop_bits_decoder", "case", "13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[990]), first, "stop_bits_decoder.v", 14, 18, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_line/stop_bits_decoder", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[991]), first, "stop_bits_decoder.v", 15, 13, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_line/stop_bits_decoder", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[992]), first, "stop_bits_decoder.v", 9, 5, ".tx_rx_tb.dut.u_rx.u_stop_bits", "v_line/stop_bits_decoder", "block", "9-10");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "parity_decoder.v", 3, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "parity_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "parity_decoder.v", 3, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "parity_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "parity_decoder.v", 3, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "parity_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[917]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[918]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[919]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[920]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[921]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[922]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[923]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[924]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[925]), first, "parity_decoder.v", 4, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "data_bits_in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[907]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "num_data_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[908]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "num_data_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[909]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "num_data_bits[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[910]), first, "parity_decoder.v", 5, 23, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "num_data_bits[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[926]), first, "parity_decoder.v", 6, 24, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "parity_enabled", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[927]), first, "parity_decoder.v", 7, 24, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "parity_bit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[993]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "ones_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[994]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "ones_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[995]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "ones_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[996]), first, "parity_decoder.v", 12, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "ones_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[997]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[998]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[999]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1000]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1001]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1002]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1003]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1004]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1005]), first, "parity_decoder.v", 13, 15, ".tx_rx_tb.dut.u_rx.u_parity", "v_toggle/parity_decoder", "masked_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1006]), first, "parity_decoder.v", 21, 13, ".tx_rx_tb.dut.u_rx.u_parity", "v_branch/parity_decoder", "if", "21");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1007]), first, "parity_decoder.v", 21, 14, ".tx_rx_tb.dut.u_rx.u_parity", "v_branch/parity_decoder", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1008]), first, "parity_decoder.v", 20, 9, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "block", "20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1009]), first, "parity_decoder.v", 25, 19, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "case", "25-27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1010]), first, "parity_decoder.v", 29, 19, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "case", "29-31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1011]), first, "parity_decoder.v", 33, 19, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "case", "33-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1012]), first, "parity_decoder.v", 37, 19, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "case", "37-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1013]), first, "parity_decoder.v", 41, 19, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "case", "41-43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1014]), first, "parity_decoder.v", 45, 13, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "case", "45-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1015]), first, "parity_decoder.v", 15, 5, ".tx_rx_tb.dut.u_rx.u_parity", "v_line/parity_decoder", "block", "15,17,19-20,24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart_spec_top.v", 4, 16, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart_spec_top.v", 5, 16, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "uart_spec_top.v", 8, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "tx_pin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "uart_spec_top.v", 9, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rx_pin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "uart_spec_top.v", 10, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "oversample_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "uart_spec_top.v", 11, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "uart_spec_top.v", 11, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "uart_spec_top.v", 11, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "uart_spec_top.v", 11, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "uart_spec_top.v", 11, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_spec_top.v", 14, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "word_len_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_spec_top.v", 14, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "word_len_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_spec_top.v", 14, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "word_len_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_spec_top.v", 15, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "stop_bits_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_spec_top.v", 15, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "stop_bits_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_spec_top.v", 16, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "parity_sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_spec_top.v", 16, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "parity_sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_spec_top.v", 16, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "parity_sel[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "uart_spec_top.v", 19, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "uart_spec_top.v", 20, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "uart_spec_top.v", 20, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "uart_spec_top.v", 20, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "uart_spec_top.v", 20, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "uart_spec_top.v", 20, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "uart_spec_top.v", 21, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "uart_spec_top.v", 22, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "uart_spec_top.v", 23, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "uart_spec_top.v", 23, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "uart_spec_top.v", 23, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "uart_spec_top.v", 23, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "uart_spec_top.v", 23, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rd_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "uart_spec_top.v", 24, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "lcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "uart_spec_top.v", 25, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "fcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "uart_spec_top.v", 26, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dll_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "uart_spec_top.v", 27, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "dlh_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "uart_spec_top.v", 28, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rxthr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "uart_spec_top.v", 29, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "txthr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "uart_spec_top.v", 30, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "timeout_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "uart_spec_top.v", 31, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "mode_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "uart_spec_top.v", 32, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "clk_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "uart_spec_top.v", 35, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awaddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "uart_spec_top.v", 35, 42, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "uart_spec_top.v", 35, 62, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "awready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "uart_spec_top.v", 36, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "uart_spec_top.v", 36, 42, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "uart_spec_top.v", 36, 62, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "uart_spec_top.v", 37, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wstrb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "uart_spec_top.v", 37, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wstrb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "uart_spec_top.v", 37, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wstrb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "uart_spec_top.v", 37, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "wstrb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "uart_spec_top.v", 38, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "bresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "uart_spec_top.v", 38, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "bresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "uart_spec_top.v", 38, 42, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "bvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "uart_spec_top.v", 38, 62, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "bready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "uart_spec_top.v", 39, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "araddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "uart_spec_top.v", 39, 42, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "arvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "uart_spec_top.v", 39, 62, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "arready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "uart_spec_top.v", 40, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "uart_spec_top.v", 41, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "uart_spec_top.v", 41, 23, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "uart_spec_top.v", 41, 42, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "uart_spec_top.v", 41, 62, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1016]), first, "uart_spec_top.v", 44, 17, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "all_pass", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1017]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1018]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1019]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1020]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1021]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1022]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1023]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1024]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1025]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1026]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1027]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1028]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1029]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1030]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1031]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1032]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1033]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1034]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1035]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1036]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1037]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1038]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1039]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1040]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1041]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1042]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1043]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1044]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1045]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1046]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1047]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1048]), first, "uart_spec_top.v", 45, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_pass_count[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1049]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1050]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1051]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1052]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1053]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1054]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1055]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1056]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1057]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1058]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1059]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1060]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1061]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1062]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1063]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1064]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1065]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1066]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1067]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1068]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1069]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1070]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1071]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1072]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1073]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1074]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1075]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1076]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1077]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1078]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1079]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1080]), first, "uart_spec_top.v", 46, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "total_fail_count[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1081]), first, "uart_spec_top.v", 50, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_start_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1082]), first, "uart_spec_top.v", 50, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_data_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1083]), first, "uart_spec_top.v", 50, 37, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_par_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1084]), first, "uart_spec_top.v", 50, 49, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_stop_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1085]), first, "uart_spec_top.v", 50, 62, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_idle_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1086]), first, "uart_spec_top.v", 51, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_start_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1087]), first, "uart_spec_top.v", 51, 25, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_data_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1088]), first, "uart_spec_top.v", 51, 39, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_par_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1089]), first, "uart_spec_top.v", 51, 52, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_stop_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1090]), first, "uart_spec_top.v", 51, 66, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "pc_idle_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1091]), first, "uart_spec_top.v", 73, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_lcr_rst_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "uart_spec_top.v", 73, 25, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_fcr_rst_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1093]), first, "uart_spec_top.v", 73, 40, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_rxthr_rst_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1094]), first, "uart_spec_top.v", 73, 57, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_timeout_rst_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1095]), first, "uart_spec_top.v", 74, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_fcr_sc_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1096]), first, "uart_spec_top.v", 74, 25, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_dlab_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1097]), first, "uart_spec_top.v", 74, 40, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_rsv_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1098]), first, "uart_spec_top.v", 75, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_lcr_rst_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1099]), first, "uart_spec_top.v", 75, 27, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_fcr_rst_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1100]), first, "uart_spec_top.v", 75, 44, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_fcr_sc_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1101]), first, "uart_spec_top.v", 76, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_dlab_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1102]), first, "uart_spec_top.v", 76, 24, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "rc_rsv_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1103]), first, "uart_spec_top.v", 101, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_aw_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1104]), first, "uart_spec_top.v", 101, 20, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_w_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1105]), first, "uart_spec_top.v", 101, 29, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_ar_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1106]), first, "uart_spec_top.v", 101, 39, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_br_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1107]), first, "uart_spec_top.v", 101, 49, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_rr_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1108]), first, "uart_spec_top.v", 101, 59, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_rx_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1109]), first, "uart_spec_top.v", 102, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_aw_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1110]), first, "uart_spec_top.v", 102, 22, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_w_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1111]), first, "uart_spec_top.v", 102, 33, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_ar_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1112]), first, "uart_spec_top.v", 102, 45, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_br_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1113]), first, "uart_spec_top.v", 102, 57, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_rr_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1114]), first, "uart_spec_top.v", 102, 69, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "ac_rx_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1115]), first, "uart_spec_top.v", 126, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "any_fail", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1116]), first, "uart_spec_top.v", 133, 10, ".tx_rx_tb.spec_suite", "v_toggle/uart_spec_top", "any_pass", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1117]), first, "uart_spec_top.v", 149, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1118]), first, "uart_spec_top.v", 149, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1119]), first, "uart_spec_top.v", 150, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1120]), first, "uart_spec_top.v", 150, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1121]), first, "uart_spec_top.v", 144, 9, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "144-146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1122]), first, "uart_spec_top.v", 144, 10, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1123]), first, "uart_spec_top.v", 143, 5, ".tx_rx_tb.spec_suite", "v_line/uart_spec_top", "block", "143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1124]), first, "uart_spec_top.v", 156, 9, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "156-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1125]), first, "uart_spec_top.v", 156, 10, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1126]), first, "uart_spec_top.v", 164, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1127]), first, "uart_spec_top.v", 164, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1128]), first, "uart_spec_top.v", 165, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1129]), first, "uart_spec_top.v", 165, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1130]), first, "uart_spec_top.v", 166, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1131]), first, "uart_spec_top.v", 166, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1132]), first, "uart_spec_top.v", 167, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1133]), first, "uart_spec_top.v", 167, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1134]), first, "uart_spec_top.v", 168, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "168");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1135]), first, "uart_spec_top.v", 168, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1136]), first, "uart_spec_top.v", 169, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1137]), first, "uart_spec_top.v", 169, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1138]), first, "uart_spec_top.v", 170, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1139]), first, "uart_spec_top.v", 170, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1140]), first, "uart_spec_top.v", 171, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "171");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1141]), first, "uart_spec_top.v", 171, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1142]), first, "uart_spec_top.v", 172, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1143]), first, "uart_spec_top.v", 172, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1144]), first, "uart_spec_top.v", 173, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1145]), first, "uart_spec_top.v", 173, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1146]), first, "uart_spec_top.v", 174, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "174");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1147]), first, "uart_spec_top.v", 174, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1148]), first, "uart_spec_top.v", 175, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1149]), first, "uart_spec_top.v", 175, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1150]), first, "uart_spec_top.v", 176, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "176");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1151]), first, "uart_spec_top.v", 176, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1152]), first, "uart_spec_top.v", 177, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1153]), first, "uart_spec_top.v", 177, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "uart_spec_top.v", 178, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1155]), first, "uart_spec_top.v", 178, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1156]), first, "uart_spec_top.v", 179, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1157]), first, "uart_spec_top.v", 179, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1158]), first, "uart_spec_top.v", 181, 13, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "181-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1159]), first, "uart_spec_top.v", 181, 14, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1160]), first, "uart_spec_top.v", 163, 9, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "if", "163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1161]), first, "uart_spec_top.v", 163, 10, ".tx_rx_tb.spec_suite", "v_branch/uart_spec_top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1162]), first, "uart_spec_top.v", 155, 5, ".tx_rx_tb.spec_suite", "v_line/uart_spec_top", "block", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart_protocol_checker.v", 9, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart_protocol_checker.v", 10, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "uart_protocol_checker.v", 11, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "uart_pin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "uart_protocol_checker.v", 12, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "oversample_tick", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_protocol_checker.v", 15, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_word_len[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_protocol_checker.v", 15, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_word_len[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_protocol_checker.v", 15, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_word_len[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_protocol_checker.v", 16, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_stop_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_protocol_checker.v", 16, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_stop_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_protocol_checker.v", 17, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_parity[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_protocol_checker.v", 17, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_parity[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_protocol_checker.v", 17, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "expected_parity[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "uart_protocol_checker.v", 18, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "oversample_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "uart_protocol_checker.v", 18, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "oversample_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "uart_protocol_checker.v", 18, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "oversample_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "uart_protocol_checker.v", 18, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "oversample_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "uart_protocol_checker.v", 18, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "oversample_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1081]), first, "uart_protocol_checker.v", 21, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_start_bit_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1082]), first, "uart_protocol_checker.v", 22, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_data_bits_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1083]), first, "uart_protocol_checker.v", 23, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_parity_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1084]), first, "uart_protocol_checker.v", 24, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_stop_bit_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1085]), first, "uart_protocol_checker.v", 25, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_idle_line_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1086]), first, "uart_protocol_checker.v", 27, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_start_bit_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1087]), first, "uart_protocol_checker.v", 28, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_data_bits_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1088]), first, "uart_protocol_checker.v", 29, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_parity_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1089]), first, "uart_protocol_checker.v", 30, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_stop_bit_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1090]), first, "uart_protocol_checker.v", 31, 16, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "spec_idle_line_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1163]), first, "uart_protocol_checker.v", 41, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "state[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1164]), first, "uart_protocol_checker.v", 41, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "state[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1165]), first, "uart_protocol_checker.v", 41, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "state[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1166]), first, "uart_protocol_checker.v", 42, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "os_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1167]), first, "uart_protocol_checker.v", 42, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "os_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1168]), first, "uart_protocol_checker.v", 42, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "os_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1169]), first, "uart_protocol_checker.v", 42, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "os_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1170]), first, "uart_protocol_checker.v", 42, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "os_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1171]), first, "uart_protocol_checker.v", 42, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "os_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1172]), first, "uart_protocol_checker.v", 43, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "bit_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1173]), first, "uart_protocol_checker.v", 43, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "bit_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1174]), first, "uart_protocol_checker.v", 43, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "bit_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1175]), first, "uart_protocol_checker.v", 43, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "bit_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1176]), first, "uart_protocol_checker.v", 44, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "stop_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1177]), first, "uart_protocol_checker.v", 44, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "stop_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1178]), first, "uart_protocol_checker.v", 44, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "stop_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1179]), first, "uart_protocol_checker.v", 44, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "stop_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1180]), first, "uart_protocol_checker.v", 44, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "stop_count[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1181]), first, "uart_protocol_checker.v", 44, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "stop_count[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1182]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1183]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1184]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1185]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1186]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1187]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1188]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1189]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1190]), first, "uart_protocol_checker.v", 45, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "captured_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1191]), first, "uart_protocol_checker.v", 46, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "prev_pin", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1192]), first, "uart_protocol_checker.v", 49, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_data_bits[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1193]), first, "uart_protocol_checker.v", 49, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_data_bits[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1194]), first, "uart_protocol_checker.v", 49, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_data_bits[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1195]), first, "uart_protocol_checker.v", 49, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_data_bits[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1196]), first, "uart_protocol_checker.v", 52, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1197]), first, "uart_protocol_checker.v", 53, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1198]), first, "uart_protocol_checker.v", 54, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1199]), first, "uart_protocol_checker.v", 55, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1200]), first, "uart_protocol_checker.v", 56, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1201]), first, "uart_protocol_checker.v", 57, 13, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1202]), first, "uart_protocol_checker.v", 50, 5, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "block", "50-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1203]), first, "uart_protocol_checker.v", 62, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_stop_ticks[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1204]), first, "uart_protocol_checker.v", 62, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_stop_ticks[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1205]), first, "uart_protocol_checker.v", 62, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_stop_ticks[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1206]), first, "uart_protocol_checker.v", 62, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_stop_ticks[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1207]), first, "uart_protocol_checker.v", 62, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_stop_ticks[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1208]), first, "uart_protocol_checker.v", 62, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_stop_ticks[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1209]), first, "uart_protocol_checker.v", 65, 18, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1210]), first, "uart_protocol_checker.v", 66, 18, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1211]), first, "uart_protocol_checker.v", 67, 18, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1212]), first, "uart_protocol_checker.v", 68, 13, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1213]), first, "uart_protocol_checker.v", 63, 5, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "block", "63-64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1214]), first, "uart_protocol_checker.v", 73, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "ones_count[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1215]), first, "uart_protocol_checker.v", 73, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "ones_count[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1216]), first, "uart_protocol_checker.v", 73, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "ones_count[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1217]), first, "uart_protocol_checker.v", 73, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "ones_count[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1218]), first, "uart_protocol_checker.v", 74, 15, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "exp_parity_bit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1219]), first, "uart_protocol_checker.v", 79, 13, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1220]), first, "uart_protocol_checker.v", 79, 14, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1221]), first, "uart_protocol_checker.v", 78, 9, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "block", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1222]), first, "uart_protocol_checker.v", 81, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1223]), first, "uart_protocol_checker.v", 82, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1224]), first, "uart_protocol_checker.v", 83, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1225]), first, "uart_protocol_checker.v", 84, 19, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1226]), first, "uart_protocol_checker.v", 85, 13, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1227]), first, "uart_protocol_checker.v", 76, 5, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "block", "76-78,80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1228]), first, "uart_protocol_checker.v", 89, 10, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "parity_enabled", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1229]), first, "uart_protocol_checker.v", 90, 10, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "falling_edge", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1230]), first, "uart_protocol_checker.v", 91, 10, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "midpoint", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1231]), first, "uart_protocol_checker.v", 94, 9, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "pin_ff1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1232]), first, "uart_protocol_checker.v", 94, 18, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "pin_ff2", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1233]), first, "uart_protocol_checker.v", 94, 27, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "pin_prev", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1234]), first, "uart_protocol_checker.v", 96, 9, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "96-97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1235]), first, "uart_protocol_checker.v", 96, 10, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "99-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1236]), first, "uart_protocol_checker.v", 95, 5, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "block", "95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1232]), first, "uart_protocol_checker.v", 105, 10, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "pin_sync", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1237]), first, "uart_protocol_checker.v", 106, 10, ".tx_rx_tb.spec_suite.u_proto_chk", "v_toggle/uart_protocol_checker", "pin_fall", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1238]), first, "uart_protocol_checker.v", 133, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1239]), first, "uart_protocol_checker.v", 133, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1240]), first, "uart_protocol_checker.v", 136, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "136-138");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1241]), first, "uart_protocol_checker.v", 136, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1242]), first, "uart_protocol_checker.v", 132, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1243]), first, "uart_protocol_checker.v", 147, 29, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "147,149-152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1244]), first, "uart_protocol_checker.v", 147, 30, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "154,156-157");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1245]), first, "uart_protocol_checker.v", 146, 25, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1246]), first, "uart_protocol_checker.v", 146, 26, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1247]), first, "uart_protocol_checker.v", 144, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "144-145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1248]), first, "uart_protocol_checker.v", 144, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1249]), first, "uart_protocol_checker.v", 143, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "143");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1250]), first, "uart_protocol_checker.v", 171, 29, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "171,173-175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1251]), first, "uart_protocol_checker.v", 171, 30, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "177-178");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1252]), first, "uart_protocol_checker.v", 167, 25, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "167-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1253]), first, "uart_protocol_checker.v", 167, 26, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1254]), first, "uart_protocol_checker.v", 165, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "165-166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1255]), first, "uart_protocol_checker.v", 165, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1256]), first, "uart_protocol_checker.v", 164, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1257]), first, "uart_protocol_checker.v", 191, 29, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "191,193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1258]), first, "uart_protocol_checker.v", 191, 30, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "195,197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1259]), first, "uart_protocol_checker.v", 188, 25, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "188-189,200-201");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1260]), first, "uart_protocol_checker.v", 188, 26, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1261]), first, "uart_protocol_checker.v", 186, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "186-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1262]), first, "uart_protocol_checker.v", 186, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1263]), first, "uart_protocol_checker.v", 185, 23, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1264]), first, "uart_protocol_checker.v", 210, 25, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "210-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1265]), first, "uart_protocol_checker.v", 210, 26, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1266]), first, "uart_protocol_checker.v", 215, 29, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "215-216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1267]), first, "uart_protocol_checker.v", 215, 30, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1268]), first, "uart_protocol_checker.v", 214, 25, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "214,218-220");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1269]), first, "uart_protocol_checker.v", 214, 26, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "222-223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1270]), first, "uart_protocol_checker.v", 208, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1271]), first, "uart_protocol_checker.v", 208, 22, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1272]), first, "uart_protocol_checker.v", 207, 21, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "case", "207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1273]), first, "uart_protocol_checker.v", 109, 9, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "if", "109-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1274]), first, "uart_protocol_checker.v", 109, 10, ".tx_rx_tb.spec_suite.u_proto_chk", "v_branch/uart_protocol_checker", "else", "121,123-127,129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1275]), first, "uart_protocol_checker.v", 108, 5, ".tx_rx_tb.spec_suite.u_proto_chk", "v_line/uart_protocol_checker", "block", "108");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "uart_regfile_spec_checker.v", 5, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "uart_regfile_spec_checker.v", 6, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "uart_regfile_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "uart_regfile_spec_checker.v", 10, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "uart_regfile_spec_checker.v", 10, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "uart_regfile_spec_checker.v", 10, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "uart_regfile_spec_checker.v", 10, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "uart_regfile_spec_checker.v", 10, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "uart_regfile_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "uart_regfile_spec_checker.v", 12, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "uart_regfile_spec_checker.v", 13, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "uart_regfile_spec_checker.v", 13, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "uart_regfile_spec_checker.v", 13, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "uart_regfile_spec_checker.v", 13, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "uart_regfile_spec_checker.v", 13, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rd_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "uart_regfile_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "lcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "uart_regfile_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "uart_regfile_spec_checker.v", 18, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "uart_regfile_spec_checker.v", 19, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlh_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "uart_regfile_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rxthr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "uart_regfile_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "txthr_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "uart_regfile_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "timeout_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "uart_regfile_spec_checker.v", 23, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "mode_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "uart_regfile_spec_checker.v", 24, 23, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "clk_val[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1091]), first, "uart_regfile_spec_checker.v", 27, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_lcr_reset_value_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "uart_regfile_spec_checker.v", 28, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_fcr_reset_value_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1093]), first, "uart_regfile_spec_checker.v", 29, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_rxthr_reset_value_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1094]), first, "uart_regfile_spec_checker.v", 30, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_timeout_reset_value_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1095]), first, "uart_regfile_spec_checker.v", 31, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_fcr_self_clear_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1096]), first, "uart_regfile_spec_checker.v", 32, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_dlab_dll_access_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1276]), first, "uart_regfile_spec_checker.v", 33, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_dlab_ier_access_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1097]), first, "uart_regfile_spec_checker.v", 34, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_reserved_bits_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1098]), first, "uart_regfile_spec_checker.v", 37, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_lcr_reset_value_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1099]), first, "uart_regfile_spec_checker.v", 38, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_fcr_reset_value_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1100]), first, "uart_regfile_spec_checker.v", 39, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_fcr_self_clear_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1101]), first, "uart_regfile_spec_checker.v", 40, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_dlab_dll_access_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1102]), first, "uart_regfile_spec_checker.v", 41, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "spec_reserved_bits_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1277]), first, "uart_regfile_spec_checker.v", 46, 9, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "rst_prev", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1278]), first, "uart_regfile_spec_checker.v", 53, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "53-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1279]), first, "uart_regfile_spec_checker.v", 53, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1280]), first, "uart_regfile_spec_checker.v", 59, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "59-60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1281]), first, "uart_regfile_spec_checker.v", 59, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1282]), first, "uart_regfile_spec_checker.v", 65, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1283]), first, "uart_regfile_spec_checker.v", 65, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1284]), first, "uart_regfile_spec_checker.v", 69, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1285]), first, "uart_regfile_spec_checker.v", 69, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1286]), first, "uart_regfile_spec_checker.v", 51, 9, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1287]), first, "uart_regfile_spec_checker.v", 51, 10, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1288]), first, "uart_regfile_spec_checker.v", 47, 5, ".tx_rx_tb.spec_suite.u_reg_chk", "v_line/uart_regfile_spec_checker", "block", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1289]), first, "uart_regfile_spec_checker.v", 76, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_written_with_reset_bits", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1290]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1291]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1292]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1293]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1294]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1295]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1296]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1297]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1298]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1299]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1300]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1301]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1302]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1303]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1304]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1305]), first, "uart_regfile_spec_checker.v", 77, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "fcr_prev[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1306]), first, "uart_regfile_spec_checker.v", 88, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "88-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1307]), first, "uart_regfile_spec_checker.v", 88, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1308]), first, "uart_regfile_spec_checker.v", 96, 17, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "96-97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1309]), first, "uart_regfile_spec_checker.v", 96, 18, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1310]), first, "uart_regfile_spec_checker.v", 93, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "93-94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1311]), first, "uart_regfile_spec_checker.v", 93, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1312]), first, "uart_regfile_spec_checker.v", 80, 9, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "80-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1313]), first, "uart_regfile_spec_checker.v", 80, 10, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "84-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1314]), first, "uart_regfile_spec_checker.v", 79, 5, ".tx_rx_tb.spec_suite.u_reg_chk", "v_line/uart_regfile_spec_checker", "block", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1315]), first, "uart_regfile_spec_checker.v", 107, 9, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dlab_was_set", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1316]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1317]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1318]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1319]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1320]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1321]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "uart_regfile_spec_checker.v", 108, 16, ".tx_rx_tb.spec_suite.u_reg_chk", "v_toggle/uart_regfile_spec_checker", "dll_before[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "uart_regfile_spec_checker.v", 117, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "117-119");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "uart_regfile_spec_checker.v", 117, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "uart_regfile_spec_checker.v", 124, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "uart_regfile_spec_checker.v", 124, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "uart_regfile_spec_checker.v", 133, 17, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "133-134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "uart_regfile_spec_checker.v", 133, 18, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "136-137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "uart_regfile_spec_checker.v", 131, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "131-132");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "uart_regfile_spec_checker.v", 131, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "uart_regfile_spec_checker.v", 111, 9, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "111-113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "uart_regfile_spec_checker.v", 111, 10, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "uart_regfile_spec_checker.v", 110, 5, ".tx_rx_tb.spec_suite.u_reg_chk", "v_line/uart_regfile_spec_checker", "block", "110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "uart_regfile_spec_checker.v", 146, 13, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "146-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "uart_regfile_spec_checker.v", 146, 14, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "149-150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "uart_regfile_spec_checker.v", 145, 9, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "if", "145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "uart_regfile_spec_checker.v", 145, 10, ".tx_rx_tb.spec_suite.u_reg_chk", "v_branch/uart_regfile_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "uart_regfile_spec_checker.v", 144, 5, ".tx_rx_tb.spec_suite.u_reg_chk", "v_line/uart_regfile_spec_checker", "block", "144");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "axi_spec_checker.v", 5, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "axi_spec_checker.v", 6, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rst", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "axi_spec_checker.v", 9, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awaddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "axi_spec_checker.v", 10, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "axi_spec_checker.v", 11, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "axi_spec_checker.v", 14, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "axi_spec_checker.v", 15, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wstrb[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "axi_spec_checker.v", 15, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wstrb[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "axi_spec_checker.v", 15, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wstrb[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "axi_spec_checker.v", 15, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wstrb[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "axi_spec_checker.v", 16, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "axi_spec_checker.v", 17, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "axi_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "bresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "axi_spec_checker.v", 20, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "bresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "axi_spec_checker.v", 21, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "bvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "axi_spec_checker.v", 22, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "bready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "axi_spec_checker.v", 25, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "araddr[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "axi_spec_checker.v", 26, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "arvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "axi_spec_checker.v", 27, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "arready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "axi_spec_checker.v", 30, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rdata[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "axi_spec_checker.v", 31, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rresp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "axi_spec_checker.v", 31, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rresp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "axi_spec_checker.v", 32, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rvalid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "axi_spec_checker.v", 33, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "rready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1103]), first, "axi_spec_checker.v", 36, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_awvalid_stable_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1104]), first, "axi_spec_checker.v", 37, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_wvalid_stable_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1105]), first, "axi_spec_checker.v", 38, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_arvalid_stable_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1106]), first, "axi_spec_checker.v", 39, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_bresp_ok_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1107]), first, "axi_spec_checker.v", 40, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_rresp_ok_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1108]), first, "axi_spec_checker.v", 41, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_no_x_on_rdata_ok", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1109]), first, "axi_spec_checker.v", 43, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_awvalid_stable_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1110]), first, "axi_spec_checker.v", 44, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_wvalid_stable_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1111]), first, "axi_spec_checker.v", 45, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_arvalid_stable_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1112]), first, "axi_spec_checker.v", 46, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_bresp_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1113]), first, "axi_spec_checker.v", 47, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_rresp_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1114]), first, "axi_spec_checker.v", 48, 16, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "spec_x_on_rdata_FAIL", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "axi_spec_checker.v", 51, 9, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "awvalid_prev", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "axi_spec_checker.v", 51, 23, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "wvalid_prev", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "axi_spec_checker.v", 51, 36, ".tx_rx_tb.spec_suite.u_axi_chk", "v_toggle/axi_spec_checker", "arvalid_prev", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "axi_spec_checker.v", 76, 18, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "76-77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "axi_spec_checker.v", 76, 19, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "axi_spec_checker.v", 73, 13, ".tx_rx_tb.spec_suite.u_axi_chk", "v_line/axi_spec_checker", "elsif", "73-74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "axi_spec_checker.v", 84, 18, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "84-85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "axi_spec_checker.v", 84, 19, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "axi_spec_checker.v", 81, 13, ".tx_rx_tb.spec_suite.u_axi_chk", "v_line/axi_spec_checker", "elsif", "81-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "axi_spec_checker.v", 92, 18, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "92-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "axi_spec_checker.v", 92, 19, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "axi_spec_checker.v", 89, 13, ".tx_rx_tb.spec_suite.u_axi_chk", "v_line/axi_spec_checker", "elsif", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "axi_spec_checker.v", 98, 17, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "98-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "axi_spec_checker.v", 98, 18, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "axi_spec_checker.v", 97, 13, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "axi_spec_checker.v", 97, 14, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "axi_spec_checker.v", 106, 17, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "106-107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "axi_spec_checker.v", 106, 18, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "axi_spec_checker.v", 105, 13, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "axi_spec_checker.v", 105, 14, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "axi_spec_checker.v", 114, 17, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "114-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "axi_spec_checker.v", 114, 18, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "axi_spec_checker.v", 113, 13, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "axi_spec_checker.v", 113, 14, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "axi_spec_checker.v", 54, 9, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "if", "54-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "axi_spec_checker.v", 54, 10, ".tx_rx_tb.spec_suite.u_axi_chk", "v_branch/axi_spec_checker", "else", "63-69,122-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "axi_spec_checker.v", 53, 5, ".tx_rx_tb.spec_suite.u_axi_chk", "v_line/axi_spec_checker", "block", "53");
}
