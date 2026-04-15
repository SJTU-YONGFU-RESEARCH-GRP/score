// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstream_fifo.h for the primary calling header

#ifndef VERILATED_VSTREAM_FIFO___024ROOT_H_
#define VERILATED_VSTREAM_FIFO___024ROOT_H_  // guard

#include "verilated.h"


class Vstream_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstream_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(flush_i,0,0);
    VL_IN8(testmode_i,0,0);
    VL_OUT8(usage_o,2,0);
    VL_IN8(valid_i,0,0);
    VL_OUT8(ready_o,0,0);
    VL_OUT8(valid_o,0,0);
    VL_IN8(ready_i,0,0);
    CData/*0:0*/ stream_fifo__DOT__fifo_i__DOT__gate_clock;
    CData/*2:0*/ stream_fifo__DOT__fifo_i__DOT__read_pointer_n;
    CData/*2:0*/ stream_fifo__DOT__fifo_i__DOT__read_pointer_q;
    CData/*2:0*/ stream_fifo__DOT__fifo_i__DOT__write_pointer_n;
    CData/*2:0*/ stream_fifo__DOT__fifo_i__DOT__write_pointer_q;
    CData/*3:0*/ stream_fifo__DOT__fifo_i__DOT__status_cnt_n;
    CData/*3:0*/ stream_fifo__DOT__fifo_i__DOT__status_cnt_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(data_i,31,0);
    VL_OUT(data_o,31,0);
    VlWide<8>/*255:0*/ stream_fifo__DOT__fifo_i__DOT__mem_n;
    VlWide<8>/*255:0*/ stream_fifo__DOT__fifo_i__DOT__mem_q;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vstream_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vstream_fifo___024root(Vstream_fifo__Syms* symsp, const char* v__name);
    ~Vstream_fifo___024root();
    VL_UNCOPYABLE(Vstream_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
