// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtx_rx_tb.h for the primary calling header

#include "Vtx_rx_tb__pch.h"
#include "Vtx_rx_tb__Syms.h"
#include "Vtx_rx_tb_generic_register__Rz1.h"

void Vtx_rx_tb_generic_register__Rz1___ctor_var_reset(Vtx_rx_tb_generic_register__Rz1* vlSelf);

Vtx_rx_tb_generic_register__Rz1::Vtx_rx_tb_generic_register__Rz1(Vtx_rx_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtx_rx_tb_generic_register__Rz1___ctor_var_reset(this);
}

void Vtx_rx_tb_generic_register__Rz1___configure_coverage(Vtx_rx_tb_generic_register__Rz1* vlSelf, bool first);

void Vtx_rx_tb_generic_register__Rz1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtx_rx_tb_generic_register__Rz1___configure_coverage(this, first);
}

Vtx_rx_tb_generic_register__Rz1::~Vtx_rx_tb_generic_register__Rz1() {
}

// Coverage
void Vtx_rx_tb_generic_register__Rz1::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
