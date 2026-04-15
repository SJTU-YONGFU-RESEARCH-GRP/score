// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vauteur_fifo.h for the primary calling header

#include "Vauteur_fifo__pch.h"
#include "Vauteur_fifo___024root.h"

VL_INLINE_OPT void Vauteur_fifo___024root___ico_sequent__TOP__0(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->auteur_fifo__DOT__gate_clock = 1U;
    vlSelf->auteur_fifo__DOT__read_pointer_n = vlSelf->auteur_fifo__DOT__read_pointer_q;
    if (vlSelf->pop_i) {
        vlSelf->auteur_fifo__DOT__read_pointer_n = 
            (7U & ((IData)(1U) + (IData)(vlSelf->auteur_fifo__DOT__read_pointer_q)));
    }
    vlSelf->auteur_fifo__DOT__write_pointer_n = vlSelf->auteur_fifo__DOT__write_pointer_q;
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

void Vauteur_fifo___024root___eval_ico(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vauteur_fifo___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vauteur_fifo___024root___eval_triggers__ico(Vauteur_fifo___024root* vlSelf);

bool Vauteur_fifo___024root___eval_phase__ico(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vauteur_fifo___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vauteur_fifo___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vauteur_fifo___024root___eval_act(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vauteur_fifo___024root___nba_sequent__TOP__0(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst_ni) {
        if (vlSelf->flush_i) {
            vlSelf->auteur_fifo__DOT__read_pointer_q = 0U;
            vlSelf->auteur_fifo__DOT__write_pointer_q = 0U;
        } else {
            vlSelf->auteur_fifo__DOT__read_pointer_q 
                = vlSelf->auteur_fifo__DOT__read_pointer_n;
            vlSelf->auteur_fifo__DOT__write_pointer_q 
                = vlSelf->auteur_fifo__DOT__write_pointer_n;
        }
        if ((1U & (~ (IData)(vlSelf->auteur_fifo__DOT__gate_clock)))) {
            vlSelf->auteur_fifo__DOT__mem_q = vlSelf->auteur_fifo__DOT__mem_n;
        }
    } else {
        vlSelf->auteur_fifo__DOT__read_pointer_q = 0U;
        vlSelf->auteur_fifo__DOT__write_pointer_q = 0U;
        vlSelf->auteur_fifo__DOT__mem_q = 0U;
    }
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

void Vauteur_fifo___024root___eval_nba(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vauteur_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vauteur_fifo___024root___eval_triggers__act(Vauteur_fifo___024root* vlSelf);

bool Vauteur_fifo___024root___eval_phase__act(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vauteur_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vauteur_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vauteur_fifo___024root___eval_phase__nba(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vauteur_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__ico(Vauteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__nba(Vauteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vauteur_fifo___024root___dump_triggers__act(Vauteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vauteur_fifo___024root___eval(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vauteur_fifo___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/datasets/auteur/8951b3cf/source_snapshot/hw/auteur_fifo.sv", 14, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vauteur_fifo___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vauteur_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/datasets/auteur/8951b3cf/source_snapshot/hw/auteur_fifo.sv", 14, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vauteur_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/yongfu/proj/score/datasets/auteur/8951b3cf/source_snapshot/hw/auteur_fifo.sv", 14, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vauteur_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vauteur_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vauteur_fifo___024root___eval_debug_assertions(Vauteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vauteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vauteur_fifo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->flush_i & 0xfeU))) {
        Verilated::overWidthError("flush_i");}
    if (VL_UNLIKELY((vlSelf->data_i & 0xfeU))) {
        Verilated::overWidthError("data_i");}
    if (VL_UNLIKELY((vlSelf->push_i & 0xfeU))) {
        Verilated::overWidthError("push_i");}
    if (VL_UNLIKELY((vlSelf->pop_i & 0xfeU))) {
        Verilated::overWidthError("pop_i");}
}
#endif  // VL_DEBUG
