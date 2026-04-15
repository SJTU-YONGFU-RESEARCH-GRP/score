// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstream_fifo.h for the primary calling header

#include "Vstream_fifo__pch.h"
#include "Vstream_fifo___024root.h"

VL_ATTR_COLD void Vstream_fifo___024root___eval_static(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vstream_fifo___024root___eval_initial(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vstream_fifo___024root___eval_final(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__stl(Vstream_fifo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstream_fifo___024root___eval_phase__stl(Vstream_fifo___024root* vlSelf);

VL_ATTR_COLD void Vstream_fifo___024root___eval_settle(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_settle\n"); );
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
            Vstream_fifo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/datasets/cva6/4c02b24f/source_snapshot/.bender/git/checkouts/common_cells-7e395bb92335c3c4/src/stream_fifo.sv", 13, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstream_fifo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__stl(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstream_fifo___024root___stl_sequent__TOP__0(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ stream_fifo__DOT__push;
    stream_fifo__DOT__push = 0;
    CData/*0:0*/ stream_fifo__DOT__pop;
    stream_fifo__DOT__pop = 0;
    // Body
    vlSelf->usage_o = (7U & (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q));
    vlSelf->data_o = (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q), 5U)))
                        ? 0U : (vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[
                                (((IData)(0x1fU) + 
                                  (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q), 5U))))) 
                      | (vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[
                         (7U & (VL_SHIFTL_III(8,32,32, (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q), 5U))));
    vlSelf->valid_o = (0U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q));
    vlSelf->ready_o = (8U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q));
    stream_fifo__DOT__pop = ((IData)(vlSelf->valid_o) 
                             & (IData)(vlSelf->ready_i));
    stream_fifo__DOT__push = ((IData)(vlSelf->ready_o) 
                              & (IData)(vlSelf->valid_i));
    vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q;
    vlSelf->stream_fifo__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_q;
    vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(stream_fifo__DOT__pop) & (0U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q)));
    }
    if (((IData)(stream_fifo__DOT__push) & (8U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->stream_fifo__DOT__fifo_i__DOT__gate_clock = 0U;
        vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_q)));
        vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(stream_fifo__DOT__pop) & (0U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(stream_fifo__DOT__push) & (IData)(stream_fifo__DOT__pop)) 
          & (8U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[0U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[0U];
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[1U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[1U];
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[2U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[2U];
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[3U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[3U];
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[4U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[4U];
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[5U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[5U];
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[6U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[6U];
    vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[7U] 
        = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[7U];
    if (((IData)(stream_fifo__DOT__push) & (8U != (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q)))) {
        VL_ASSIGNSEL_WI(256,32,(0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_q), 5U)), vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n, vlSelf->data_i);
    }
}

VL_ATTR_COLD void Vstream_fifo___024root___eval_stl(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstream_fifo___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vstream_fifo___024root___eval_triggers__stl(Vstream_fifo___024root* vlSelf);

VL_ATTR_COLD bool Vstream_fifo___024root___eval_phase__stl(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstream_fifo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstream_fifo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__ico(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__act(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__nba(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i or negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstream_fifo___024root___ctor_var_reset(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->flush_i = VL_RAND_RESET_I(1);
    vlSelf->testmode_i = VL_RAND_RESET_I(1);
    vlSelf->usage_o = VL_RAND_RESET_I(3);
    vlSelf->data_i = VL_RAND_RESET_I(32);
    vlSelf->valid_i = VL_RAND_RESET_I(1);
    vlSelf->ready_o = VL_RAND_RESET_I(1);
    vlSelf->data_o = VL_RAND_RESET_I(32);
    vlSelf->valid_o = VL_RAND_RESET_I(1);
    vlSelf->ready_i = VL_RAND_RESET_I(1);
    vlSelf->stream_fifo__DOT__fifo_i__DOT__gate_clock = VL_RAND_RESET_I(1);
    vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_n = VL_RAND_RESET_I(3);
    vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_q = VL_RAND_RESET_I(3);
    vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_n = VL_RAND_RESET_I(4);
    vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(256, vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n);
    VL_RAND_RESET_W(256, vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
}
