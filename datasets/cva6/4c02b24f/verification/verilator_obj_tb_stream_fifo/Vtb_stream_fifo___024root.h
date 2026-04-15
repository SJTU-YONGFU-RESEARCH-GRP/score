// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_stream_fifo.h for the primary calling header

#ifndef VERILATED_VTB_STREAM_FIFO___024ROOT_H_
#define VERILATED_VTB_STREAM_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_stream_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_stream_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_stream_fifo__DOT__clk_i;
    CData/*0:0*/ tb_stream_fifo__DOT__rst_ni;
    CData/*0:0*/ tb_stream_fifo__DOT__flush_i;
    CData/*0:0*/ tb_stream_fifo__DOT__valid_i;
    CData/*0:0*/ tb_stream_fifo__DOT__ready_i;
    CData/*0:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__gate_clock;
    CData/*1:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_n;
    CData/*1:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q;
    CData/*1:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_n;
    CData/*1:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_q;
    CData/*2:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_n;
    CData/*2:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_stream_fifo__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_stream_fifo__DOT__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_stream_fifo__DOT__data_i;
    VlWide<4>/*127:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n;
    VlWide<4>/*127:0*/ tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4ea73642__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_stream_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_stream_fifo___024root(Vtb_stream_fifo__Syms* symsp, const char* v__name);
    ~Vtb_stream_fifo___024root();
    VL_UNCOPYABLE(Vtb_stream_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
