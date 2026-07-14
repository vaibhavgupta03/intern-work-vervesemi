// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtx_rx_tb.h for the primary calling header

#ifndef VERILATED_VTX_RX_TB_GENERIC_REGISTER__RZ1_H_
#define VERILATED_VTX_RX_TB_GENERIC_REGISTER__RZ1_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtx_rx_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtx_rx_tb_generic_register__Rz1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(wr_en,0,0);
    CData/*0:0*/ __Vtogcov__clk;
    CData/*0:0*/ __Vtogcov__rst;
    CData/*0:0*/ __Vtogcov__wr_en;
    VL_IN16(wr_data,15,0);
    VL_OUT16(reg_val,15,0);
    SData/*15:0*/ __Vtogcov__wr_data;
    SData/*15:0*/ __Vtogcov__reg_val;
    SData/*15:0*/ __Vdly__reg_val;

    // INTERNAL VARIABLES
    Vtx_rx_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtx_rx_tb_generic_register__Rz1(Vtx_rx_tb__Syms* symsp, const char* v__name);
    ~Vtx_rx_tb_generic_register__Rz1();
    VL_UNCOPYABLE(Vtx_rx_tb_generic_register__Rz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
