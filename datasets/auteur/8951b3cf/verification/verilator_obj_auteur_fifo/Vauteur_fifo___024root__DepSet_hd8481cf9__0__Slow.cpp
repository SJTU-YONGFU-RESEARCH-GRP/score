// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vauteur_fifo.h for the primary calling header

#include "Vauteur_fifo__pch.h"
#include "Vauteur_fifo__Syms.h"
#include "Vauteur_fifo___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__stl(Vauteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vauteur_fifo___024root___eval_triggers__stl(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vauteur_fifo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
