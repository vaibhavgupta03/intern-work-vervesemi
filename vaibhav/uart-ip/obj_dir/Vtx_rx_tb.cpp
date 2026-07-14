// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtx_rx_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtx_rx_tb::Vtx_rx_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtx_rx_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rx{vlSymsp->TOP.rx}
    , tx{vlSymsp->TOP.tx}
    , s_awvalid{vlSymsp->TOP.s_awvalid}
    , s_awready{vlSymsp->TOP.s_awready}
    , s_wvalid{vlSymsp->TOP.s_wvalid}
    , s_wready{vlSymsp->TOP.s_wready}
    , s_wstrb{vlSymsp->TOP.s_wstrb}
    , s_bvalid{vlSymsp->TOP.s_bvalid}
    , s_bready{vlSymsp->TOP.s_bready}
    , s_arvalid{vlSymsp->TOP.s_arvalid}
    , s_arready{vlSymsp->TOP.s_arready}
    , s_rvalid{vlSymsp->TOP.s_rvalid}
    , s_rready{vlSymsp->TOP.s_rready}
    , s_awaddr{vlSymsp->TOP.s_awaddr}
    , s_wdata{vlSymsp->TOP.s_wdata}
    , s_araddr{vlSymsp->TOP.s_araddr}
    , s_rdata{vlSymsp->TOP.s_rdata}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk}
    , __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr{vlSymsp->TOP.__PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtx_rx_tb::Vtx_rx_tb(const char* _vcname__)
    : Vtx_rx_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtx_rx_tb::~Vtx_rx_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtx_rx_tb___024root___eval_debug_assertions(Vtx_rx_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtx_rx_tb___024root___eval_static(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___eval_initial(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___eval_settle(Vtx_rx_tb___024root* vlSelf);
void Vtx_rx_tb___024root___eval(Vtx_rx_tb___024root* vlSelf);

void Vtx_rx_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtx_rx_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtx_rx_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtx_rx_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtx_rx_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtx_rx_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtx_rx_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtx_rx_tb::eventsPending() { return false; }

uint64_t Vtx_rx_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtx_rx_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtx_rx_tb___024root___eval_final(Vtx_rx_tb___024root* vlSelf);

VL_ATTR_COLD void Vtx_rx_tb::final() {
    Vtx_rx_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtx_rx_tb::hierName() const { return vlSymsp->name(); }
const char* Vtx_rx_tb::modelName() const { return "Vtx_rx_tb"; }
unsigned Vtx_rx_tb::threads() const { return 1; }
void Vtx_rx_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtx_rx_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtx_rx_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtx_rx_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtx_rx_tb___024root__trace_init_top(Vtx_rx_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtx_rx_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtx_rx_tb___024root*>(voidSelf);
    Vtx_rx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtx_rx_tb___024root__trace_decl_types(tracep);
    Vtx_rx_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtx_rx_tb___024root__trace_register(Vtx_rx_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtx_rx_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtx_rx_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtx_rx_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
