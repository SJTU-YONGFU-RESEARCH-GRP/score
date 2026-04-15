// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstream_fifo.h for the primary calling header

#include "Vstream_fifo__pch.h"
#include "Vstream_fifo__Syms.h"
#include "Vstream_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__ico(Vstream_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vstream_fifo___024root___eval_triggers__ico(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstream_fifo___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__act(Vstream_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vstream_fifo___024root___eval_triggers__act(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_ni__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstream_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
