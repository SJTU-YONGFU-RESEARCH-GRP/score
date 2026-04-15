// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_auteur_fifo.h for the primary calling header

#include "Vtb_auteur_fifo__pch.h"
#include "Vtb_auteur_fifo___024root.h"

VL_ATTR_COLD void Vtb_auteur_fifo___024root___eval_static(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_auteur_fifo___024root___eval_initial__TOP(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_auteur_fifo__DOT__clk_i = 0U;
}

VL_ATTR_COLD void Vtb_auteur_fifo___024root___eval_final(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_auteur_fifo___024root___dump_triggers__stl(Vtb_auteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_auteur_fifo___024root___eval_phase__stl(Vtb_auteur_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_auteur_fifo___024root___eval_settle(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_settle\n"); );
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
            Vtb_auteur_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_auteur_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_auteur_fifo___024root___dump_triggers__stl(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_auteur_fifo___024root___act_sequent__TOP__0(Vtb_auteur_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_auteur_fifo___024root___eval_stl(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_auteur_fifo___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_auteur_fifo___024root___eval_triggers__stl(Vtb_auteur_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vtb_auteur_fifo___024root___eval_phase__stl(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_auteur_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_auteur_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_auteur_fifo___024root___dump_triggers__act(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_auteur_fifo.clk_i or negedge tb_auteur_fifo.rst_ni)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_auteur_fifo.clk_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_auteur_fifo___024root___dump_triggers__nba(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_auteur_fifo.clk_i or negedge tb_auteur_fifo.rst_ni)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_auteur_fifo.clk_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_auteur_fifo___024root___ctor_var_reset(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_auteur_fifo__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->tb_auteur_fifo__DOT__rst_ni = VL_RAND_RESET_I(1);
    vlSelf->tb_auteur_fifo__DOT__flush_i = VL_RAND_RESET_I(1);
    vlSelf->tb_auteur_fifo__DOT__data_i = VL_RAND_RESET_I(8);
    vlSelf->tb_auteur_fifo__DOT__push_i = VL_RAND_RESET_I(1);
    vlSelf->tb_auteur_fifo__DOT__pop_i = VL_RAND_RESET_I(1);
    vlSelf->tb_auteur_fifo__DOT__dut__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->tb_auteur_fifo__DOT__dut__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->tb_auteur_fifo__DOT__dut__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_n = VL_RAND_RESET_Q(64);
    vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_q = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__tb_auteur_fifo__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_auteur_fifo__DOT__rst_ni__0 = VL_RAND_RESET_I(1);
}
