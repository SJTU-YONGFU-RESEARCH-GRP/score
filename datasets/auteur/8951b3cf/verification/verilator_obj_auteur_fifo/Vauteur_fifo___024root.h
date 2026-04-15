// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vauteur_fifo.h for the primary calling header

#ifndef VERILATED_VAUTEUR_FIFO___024ROOT_H_
#define VERILATED_VAUTEUR_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vauteur_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vauteur_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(flush_i,0,0);
    VL_IN8(data_i,0,0);
    VL_IN8(push_i,0,0);
    VL_OUT8(data_o,0,0);
    VL_IN8(pop_i,0,0);
    CData/*0:0*/ auteur_fifo__DOT__gate_clock;
    CData/*2:0*/ auteur_fifo__DOT__read_pointer_n;
    CData/*2:0*/ auteur_fifo__DOT__read_pointer_q;
    CData/*2:0*/ auteur_fifo__DOT__write_pointer_n;
    CData/*2:0*/ auteur_fifo__DOT__write_pointer_q;
    CData/*7:0*/ auteur_fifo__DOT__mem_n;
    CData/*7:0*/ auteur_fifo__DOT__mem_q;
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
    Vauteur_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vauteur_fifo___024root(Vauteur_fifo__Syms* symsp, const char* v__name);
    ~Vauteur_fifo___024root();
    VL_UNCOPYABLE(Vauteur_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
