// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_tracer_smoke_top.h for the primary calling header

#include "Vrv_tracer_smoke_top___024root.h"
#include "Vrv_tracer_smoke_top__Syms.h"

//==========

VL_INLINE_OPT void Vrv_tracer_smoke_top___024root___sequent__TOP__1(Vrv_tracer_smoke_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_q 
        = (1U & ((~ (IData)(vlSelf->rst_ni)) | (IData)(vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_d)));
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_d 
        = vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_q;
}

VL_INLINE_OPT void Vrv_tracer_smoke_top___024root___combo__TOP__3(Vrv_tracer_smoke_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___combo__TOP__3\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en 
            = vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__trace_activated_q;
    }
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en));
    if ((1U & (~ (IData)(vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated)))) {
        vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__i_pulp_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en = 1U;
    }
    vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__clk 
        = ((IData)(vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated) 
           & (IData)(vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__i_pulp_clock_gating__DOT__i_tc_clk_gating__DOT__clk_en));
}

void Vrv_tracer_smoke_top___024root___eval(Vrv_tracer_smoke_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vrv_tracer_smoke_top___024root___sequent__TOP__1(vlSelf);
    }
    Vrv_tracer_smoke_top___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vclklast__TOP__rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated 
        = vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__clk_gated;
    vlSelf->__Vclklast__TOP__rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__clk 
        = vlSelf->rv_tracer_smoke_top__DOT__i_rv_tracer__DOT__i_te_reg__DOT__i_edge_detect_on__DOT__i_sync_wedge__DOT__clk;
}

QData Vrv_tracer_smoke_top___024root___change_request_1(Vrv_tracer_smoke_top___024root* vlSelf);

VL_INLINE_OPT QData Vrv_tracer_smoke_top___024root___change_request(Vrv_tracer_smoke_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___change_request\n"); );
    // Body
    return (Vrv_tracer_smoke_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vrv_tracer_smoke_top___024root___change_request_1(Vrv_tracer_smoke_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrv_tracer_smoke_top___024root___eval_debug_assertions(Vrv_tracer_smoke_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrv_tracer_smoke_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv_tracer_smoke_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
