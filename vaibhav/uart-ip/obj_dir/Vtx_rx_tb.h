// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTX_RX_TB_H_
#define VERILATED_VTX_RX_TB_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

class Vtx_rx_tb__Syms;
class Vtx_rx_tb___024root;
class VerilatedVcdC;
class Vtx_rx_tb_generic_register__Rz1;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtx_rx_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtx_rx_tb__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&rx,0,0);
    VL_OUT8(&tx,0,0);
    VL_IN8(&s_awvalid,0,0);
    VL_OUT8(&s_awready,0,0);
    VL_IN8(&s_wvalid,0,0);
    VL_OUT8(&s_wready,0,0);
    VL_IN8(&s_wstrb,3,0);
    VL_OUT8(&s_bvalid,0,0);
    VL_IN8(&s_bready,0,0);
    VL_IN8(&s_arvalid,0,0);
    VL_OUT8(&s_arready,0,0);
    VL_OUT8(&s_rvalid,0,0);
    VL_IN8(&s_rready,0,0);
    VL_IN(&s_awaddr,31,0);
    VL_IN(&s_wdata,31,0);
    VL_IN(&s_araddr,31,0);
    VL_OUT(&s_rdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_thr;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dll;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_ier;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlh;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mcr;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_dlf;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_mode;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_clk;
    Vtx_rx_tb_generic_register__Rz1* const __PVT__tx_rx_tb__DOT__dut__DOT__u_regfile__DOT__u_txthr;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtx_rx_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtx_rx_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtx_rx_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtx_rx_tb();
  private:
    VL_UNCOPYABLE(Vtx_rx_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
