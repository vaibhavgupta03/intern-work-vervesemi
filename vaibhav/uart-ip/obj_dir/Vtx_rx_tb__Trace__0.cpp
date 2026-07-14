// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtx_rx_tb__Syms.h"


void Vtx_rx_tb___024root__trace_chg_0_sub_0(Vtx_rx_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtx_rx_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root__trace_chg_0\n"); );
    // Init
    Vtx_rx_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtx_rx_tb___024root*>(voidSelf);
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtx_rx_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtx_rx_tb___024root__trace_chg_0_sub_0(Vtx_rx_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_rresp),2);
        bufp->chgCData(oldp+1,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_addr),5);
        bufp->chgSData(oldp+2,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr.reg_val),16);
        bufp->chgSData(oldp+3,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh.reg_val),16);
        bufp->chgSData(oldp+4,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier.reg_val),16);
        bufp->chgSData(oldp+5,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr.reg_val),16);
        bufp->chgSData(oldp+6,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode.reg_val),16);
        bufp->chgSData(oldp+7,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr.reg_val),16);
        bufp->chgBit(oldp+8,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff1));
        bufp->chgBit(oldp+9,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_prev));
        bufp->chgSData(oldp+10,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_data_reg),9);
        bufp->chgBit(oldp+11,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff1));
        bufp->chgBit(oldp+12,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_prev));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+13,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_ok));
        bufp->chgBit(oldp+14,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_ok));
        bufp->chgBit(oldp+15,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rxthr_rst_ok));
        bufp->chgBit(oldp+16,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_timeout_rst_ok));
        bufp->chgBit(oldp+17,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_ok));
        bufp->chgBit(oldp+18,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_lcr_rst_FAIL));
        bufp->chgBit(oldp+19,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_rst_FAIL));
        bufp->chgBit(oldp+20,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_rsv_FAIL));
        bufp->chgBit(oldp+21,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__rst_prev));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+22,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__s_bresp),2);
        bufp->chgBit(oldp+23,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_en));
        bufp->chgCData(oldp+24,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_addr),5);
        bufp->chgSData(oldp+25,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data),16);
        bufp->chgSData(oldp+26,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val),16);
        bufp->chgSData(oldp+27,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll.reg_val),16);
        bufp->chgSData(oldp+28,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val),16);
        bufp->chgCData(oldp+29,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor),5);
        bufp->chgBit(oldp+30,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__tx_start_pulse));
        bufp->chgIData(oldp+31,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__fc_feature_manifest),21);
        bufp->chgIData(oldp+32,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_latch),32);
        bufp->chgSData(oldp+33,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_latch),16);
        bufp->chgBit(oldp+34,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_addr_done));
        bufp->chgBit(oldp+35,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_axi_slave__DOT__wr_data_done));
        bufp->chgCData(oldp+36,((3U & ((IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk.reg_val) 
                                       >> 2U))),2);
        bufp->chgSData(oldp+37,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__divider_int),16);
        bufp->chgSData(oldp+38,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_val),16);
        bufp->chgSData(oldp+39,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_val),16);
        bufp->chgSData(oldp+40,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_val),16);
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                     >> 9U))));
        bufp->chgBit(oldp+42,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__thr_wr_en));
        bufp->chgBit(oldp+43,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dll_wr_en));
        bufp->chgBit(oldp+44,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__ier_wr_en));
        bufp->chgBit(oldp+45,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlh_wr_en));
        bufp->chgBit(oldp+46,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__fcr_wr_en));
        bufp->chgBit(oldp+47,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__lcr_wr_en));
        bufp->chgBit(oldp+48,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mcr_wr_en));
        bufp->chgBit(oldp+49,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__dlf_wr_en));
        bufp->chgBit(oldp+50,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__mode_wr_en));
        bufp->chgBit(oldp+51,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__clk_wr_en));
        bufp->chgBit(oldp+52,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__rxthr_wr_en));
        bufp->chgBit(oldp+53,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__txthr_wr_en));
        bufp->chgBit(oldp+54,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__timeout_wr_en));
        bufp->chgSData(oldp+55,((0xe7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data))),16);
        bufp->chgCData(oldp+56,((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))),3);
        bufp->chgCData(oldp+57,((3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                       >> 3U))),2);
        bufp->chgCData(oldp+58,((7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                       >> 5U))),3);
        bufp->chgSData(oldp+59,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_data),9);
        bufp->chgBit(oldp+60,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_valid));
        bufp->chgBit(oldp+61,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_busy));
        bufp->chgBit(oldp+62,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__frame_error));
        bufp->chgBit(oldp+63,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_error));
        bufp->chgBit(oldp+64,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__break_detect));
        bufp->chgCData(oldp+65,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__state),3);
        bufp->chgSData(oldp+66,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__shift_reg),9);
        bufp->chgCData(oldp+67,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__bit_count),4);
        bufp->chgCData(oldp+68,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__os_count),6);
        bufp->chgCData(oldp+69,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_count),6);
        bufp->chgCData(oldp+70,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__zero_count),6);
        bufp->chgBit(oldp+71,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__rx_ff2));
        bufp->chgBit(oldp+72,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__falling_edge));
        bufp->chgCData(oldp+73,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__data_bits),4);
        bufp->chgCData(oldp+74,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__stop_ticks),6);
        bufp->chgSData(oldp+75,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__aligned_shift_reg),9);
        bufp->chgBit(oldp+76,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__parity_enabled));
        bufp->chgBit(oldp+77,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__expected_parity_bit));
        bufp->chgBit(oldp+78,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__received_parity_bit));
        bufp->chgCData(oldp+79,((0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U))),6);
        bufp->chgCData(oldp+80,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__ones_count),4);
        bufp->chgSData(oldp+81,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_rx__DOT__u_parity__DOT__masked_data),9);
        bufp->chgSData(oldp+82,((0x1ffU & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_wr_data))),9);
        bufp->chgBit(oldp+83,((1U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                     >> 8U))));
        bufp->chgBit(oldp+84,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_done));
        bufp->chgBit(oldp+85,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__tx_busy));
        bufp->chgCData(oldp+86,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__state),3);
        bufp->chgSData(oldp+87,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__shift_reg),9);
        bufp->chgCData(oldp+88,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__bit_count),4);
        bufp->chgCData(oldp+89,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__os_count),6);
        bufp->chgCData(oldp+90,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_count),6);
        bufp->chgCData(oldp+91,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__data_bits),4);
        bufp->chgCData(oldp+92,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__stop_ticks),6);
        bufp->chgBit(oldp+93,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_enabled));
        bufp->chgBit(oldp+94,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__parity_bit));
        bufp->chgCData(oldp+95,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__ones_count),4);
        bufp->chgSData(oldp+96,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_tx__DOT__u_parity__DOT__masked_data),9);
        bufp->chgCData(oldp+97,((7U & (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val))),3);
        bufp->chgCData(oldp+98,((3U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                       >> 3U))),2);
        bufp->chgCData(oldp+99,((7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                       >> 5U))),3);
        bufp->chgBit(oldp+100,((1U & (~ (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail)))));
        bufp->chgIData(oldp+101,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_pass_count),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__total_fail_count),32);
        bufp->chgBit(oldp+103,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_ok));
        bufp->chgBit(oldp+104,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_ok));
        bufp->chgBit(oldp+105,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_ok));
        bufp->chgBit(oldp+106,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_ok));
        bufp->chgBit(oldp+107,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_ok));
        bufp->chgBit(oldp+108,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_start_FAIL));
        bufp->chgBit(oldp+109,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_data_FAIL));
        bufp->chgBit(oldp+110,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_par_FAIL));
        bufp->chgBit(oldp+111,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_stop_FAIL));
        bufp->chgBit(oldp+112,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__pc_idle_FAIL));
        bufp->chgBit(oldp+113,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_ok));
        bufp->chgBit(oldp+114,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_ok));
        bufp->chgBit(oldp+115,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_fcr_sc_FAIL));
        bufp->chgBit(oldp+116,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__rc_dlab_FAIL));
        bufp->chgBit(oldp+117,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_ok));
        bufp->chgBit(oldp+118,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_ok));
        bufp->chgBit(oldp+119,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_ok));
        bufp->chgBit(oldp+120,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_ok));
        bufp->chgBit(oldp+121,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_ok));
        bufp->chgBit(oldp+122,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_ok));
        bufp->chgBit(oldp+123,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_aw_FAIL));
        bufp->chgBit(oldp+124,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_w_FAIL));
        bufp->chgBit(oldp+125,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_ar_FAIL));
        bufp->chgBit(oldp+126,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_br_FAIL));
        bufp->chgBit(oldp+127,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rr_FAIL));
        bufp->chgBit(oldp+128,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__ac_rx_FAIL));
        bufp->chgBit(oldp+129,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_fail));
        bufp->chgBit(oldp+130,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__any_pass));
        bufp->chgBit(oldp+131,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__awvalid_prev));
        bufp->chgBit(oldp+132,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__wvalid_prev));
        bufp->chgBit(oldp+133,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_axi_chk__DOT__arvalid_prev));
        bufp->chgCData(oldp+134,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__state),3);
        bufp->chgCData(oldp+135,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count),6);
        bufp->chgCData(oldp+136,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__bit_count),4);
        bufp->chgCData(oldp+137,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__stop_count),6);
        bufp->chgSData(oldp+138,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__captured_data),9);
        bufp->chgCData(oldp+139,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_data_bits),4);
        bufp->chgCData(oldp+140,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_stop_ticks),6);
        bufp->chgCData(oldp+141,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__ones_count),4);
        bufp->chgBit(oldp+142,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__exp_parity_bit));
        bufp->chgBit(oldp+143,((0U != (7U & ((IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__lcr_val) 
                                             >> 5U)))));
        bufp->chgBit(oldp+144,(((IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__os_count) 
                                == (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_factor), 1U)))));
        bufp->chgBit(oldp+145,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_ff2));
        bufp->chgBit(oldp+146,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__pin_fall));
        bufp->chgBit(oldp+147,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_written_with_reset_bits));
        bufp->chgSData(oldp+148,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__fcr_prev),16);
        bufp->chgBit(oldp+149,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dlab_was_set));
        bufp->chgSData(oldp+150,(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_reg_chk__DOT__dll_before),16);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+151,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__oversample_tick));
        bufp->chgCData(oldp+152,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_accum),5);
        bufp->chgSData(oldp+153,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__count),16);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+154,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__regfile_rd_data),16);
        bufp->chgSData(oldp+155,(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val),16);
        bufp->chgCData(oldp+156,((0xfU & (IData)(vlSymsp->TOP__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf.reg_val))),4);
        bufp->chgBit(oldp+157,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__frac_carry));
        bufp->chgSData(oldp+158,(vlSelfRef.tx_rx_tb__DOT__dut__DOT__u_baud_gen__DOT__effective_divider),16);
    }
    bufp->chgBit(oldp+159,(vlSelfRef.clk));
    bufp->chgBit(oldp+160,(vlSelfRef.rst));
    bufp->chgBit(oldp+161,(vlSelfRef.rx));
    bufp->chgBit(oldp+162,(vlSelfRef.tx));
    bufp->chgIData(oldp+163,(vlSelfRef.s_awaddr),32);
    bufp->chgBit(oldp+164,(vlSelfRef.s_awvalid));
    bufp->chgBit(oldp+165,(vlSelfRef.s_awready));
    bufp->chgIData(oldp+166,(vlSelfRef.s_wdata),32);
    bufp->chgBit(oldp+167,(vlSelfRef.s_wvalid));
    bufp->chgBit(oldp+168,(vlSelfRef.s_wready));
    bufp->chgCData(oldp+169,(vlSelfRef.s_wstrb),4);
    bufp->chgBit(oldp+170,(vlSelfRef.s_bvalid));
    bufp->chgBit(oldp+171,(vlSelfRef.s_bready));
    bufp->chgIData(oldp+172,(vlSelfRef.s_araddr),32);
    bufp->chgBit(oldp+173,(vlSelfRef.s_arvalid));
    bufp->chgBit(oldp+174,(vlSelfRef.s_arready));
    bufp->chgIData(oldp+175,(vlSelfRef.s_rdata),32);
    bufp->chgBit(oldp+176,(vlSelfRef.s_rvalid));
    bufp->chgBit(oldp+177,(vlSelfRef.s_rready));
    bufp->chgBit(oldp+178,(((~ (IData)(vlSelfRef.tx)) 
                            & (IData)(vlSelfRef.tx_rx_tb__DOT__spec_suite__DOT__u_proto_chk__DOT__prev_pin))));
}

void Vtx_rx_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtx_rx_tb___024root__trace_cleanup\n"); );
    // Init
    Vtx_rx_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtx_rx_tb___024root*>(voidSelf);
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
