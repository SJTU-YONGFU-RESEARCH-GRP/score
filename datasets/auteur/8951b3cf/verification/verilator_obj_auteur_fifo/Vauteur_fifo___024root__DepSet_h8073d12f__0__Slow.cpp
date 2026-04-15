// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vauteur_fifo.h for the primary calling header

#include "Vauteur_fifo__pch.h"
#include "Vauteur_fifo___024root.h"

VL_ATTR_COLD void Vauteur_fifo___024root___eval_static(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vauteur_fifo___024root___eval_initial(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vauteur_fifo___024root___eval_final(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__stl(Vauteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vauteur_fifo___024root___eval_phase__stl(Vauteur_fifo___024root* vlSelf);

VL_ATTR_COLD void Vauteur_fifo___024root___eval_settle(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vauteur_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/datasets/auteur/8951b3cf/source_snapshot/hw/auteur_fifo.sv", 14, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vauteur_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__stl(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vauteur_fifo___024root___stl_sequent__TOP__0(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->auteur_fifo__DOT__gate_clock = 1U;
    vlSelf->auteur_fifo__DOT__read_pointer_n = vlSelf->auteur_fifo__DOT__read_pointer_q;
    if (vlSelf->pop_i) {
        vlSelf->auteur_fifo__DOT__read_pointer_n = 
            (7U & ((IData)(1U) + (IData)(vlSelf->auteur_fifo__DOT__read_pointer_q)));
    }
    vlSelf->auteur_fifo__DOT__write_pointer_n = vlSelf->auteur_fifo__DOT__write_pointer_q;
    vlSelf->data_o = (1U & ((IData)(vlSelf->auteur_fifo__DOT__mem_q) 
                            >> (IData)(vlSelf->auteur_fifo__DOT__read_pointer_q)));
    vlSelf->auteur_fifo__DOT__mem_n = vlSelf->auteur_fifo__DOT__mem_q;
    if (vlSelf->push_i) {
        vlSelf->auteur_fifo__DOT__gate_clock = 0U;
        vlSelf->auteur_fifo__DOT__write_pointer_n = 
            (7U & ((IData)(1U) + (IData)(vlSelf->auteur_fifo__DOT__write_pointer_q)));
        vlSelf->auteur_fifo__DOT__mem_n = (((~ ((IData)(1U) 
                                                << (IData)(vlSelf->auteur_fifo__DOT__write_pointer_q))) 
                                            & (IData)(vlSelf->auteur_fifo__DOT__mem_n)) 
                                           | (0xffU 
                                              & ((IData)(vlSelf->data_i) 
                                                 << (IData)(vlSelf->auteur_fifo__DOT__write_pointer_q))));
    }
}

VL_ATTR_COLD void Vauteur_fifo___024root___eval_stl(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vauteur_fifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vauteur_fifo___024root___eval_triggers__stl(Vauteur_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vauteur_fifo___024root___eval_phase__stl(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vauteur_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vauteur_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__ico(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__act(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__nba(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vauteur_fifo___024root___ctor_var_reset(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->flush_i = VL_RAND_RESET_I(1);
    vlSelf->data_i = VL_RAND_RESET_I(1);
    vlSelf->push_i = VL_RAND_RESET_I(1);
    vlSelf->data_o = VL_RAND_RESET_I(1);
    vlSelf->pop_i = VL_RAND_RESET_I(1);
    vlSelf->auteur_fifo__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->auteur_fifo__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->auteur_fifo__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->auteur_fifo__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->auteur_fifo__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->auteur_fifo__DOT__mem_n = VL_RAND_RESET_I(8);
    vlSelf->auteur_fifo__DOT__mem_q = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
}
