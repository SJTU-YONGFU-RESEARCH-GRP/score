// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_tracer_smoke_top.h for the primary calling header

#include "Vrv_tracer_smoke_top__pch.h"
#include "Vrv_tracer_smoke_top___024root.h"

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___eval_static(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___eval_initial(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___eval_final(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___dump_triggers__stl(Vrv_tracer_smoke_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrv_tracer_smoke_top___024root___eval_phase__stl(Vrv_tracer_smoke_top___024root* vlSelf);

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___eval_settle(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval_settle\n"); );
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
            Vrv_tracer_smoke_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/scripts/assets/rv_tracer/rv_tracer_smoke_top.sv", 9, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrv_tracer_smoke_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___dump_triggers__stl(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___stl_sequent__TOP__0(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated;
    rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated = 0;
    CData/*0:0*/ rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__i_pulp_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en;
    rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__i_pulp_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en = 0;
    // Body
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_d 
        = vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_q;
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en 
            = vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_q;
    }
    rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en));
    if ((1U & (~ (IData)(rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated)))) {
        rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__i_pulp_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en = 1U;
    }
}

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___eval_stl(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vrv_tracer_smoke_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___eval_triggers__stl(Vrv_tracer_smoke_top___024root* vlSelf);

VL_ATTR_COLD bool Vrv_tracer_smoke_top___024root___eval_phase__stl(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrv_tracer_smoke_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vrv_tracer_smoke_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___dump_triggers__ico(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___dump_triggers__act(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___dump_triggers__nba(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv_tracer_smoke_top___024root___ctor_var_reset(Vrv_tracer_smoke_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_d = VL_RAND_RESET_I(1);
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_q = VL_RAND_RESET_I(1);
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
}
