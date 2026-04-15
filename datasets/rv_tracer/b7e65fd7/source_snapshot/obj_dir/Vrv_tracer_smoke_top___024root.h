// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv_tracer_smoke_top.h for the primary calling header

#ifndef VERILATED_VRV_TRACER_SMOKE_TOP___024ROOT_H_
#define VERILATED_VRV_TRACER_SMOKE_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vrv_tracer_smoke_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv_tracer_smoke_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    CData/*0:0*/ rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_d;
    CData/*0:0*/ rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_q;
    CData/*0:0*/ rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrv_tracer_smoke_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv_tracer_smoke_top___024root(Vrv_tracer_smoke_top__Syms* symsp, const char* v__name);
    ~Vrv_tracer_smoke_top___024root();
    VL_UNCOPYABLE(Vrv_tracer_smoke_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
