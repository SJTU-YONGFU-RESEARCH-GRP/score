// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_stream_fifo.h for the primary calling header

#include "Vtb_stream_fifo__pch.h"
#include "Vtb_stream_fifo___024root.h"

VL_ATTR_COLD void Vtb_stream_fifo___024root___eval_initial__TOP(Vtb_stream_fifo___024root* vlSelf);
VlCoroutine Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_stream_fifo___024root* vlSelf);
VlCoroutine Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_stream_fifo___024root* vlSelf);

void Vtb_stream_fifo___024root___eval_initial(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_initial\n"); );
    // Body
    Vtb_stream_fifo___024root___eval_initial__TOP(vlSelf);
    Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_stream_fifo__DOT__clk_i__0 
        = vlSelf->tb_stream_fifo__DOT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__tb_stream_fifo__DOT__rst_ni__0 
        = vlSelf->tb_stream_fifo__DOT__rst_ni;
}

VL_INLINE_OPT VlCoroutine Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                           48);
        vlSelf->tb_stream_fifo__DOT__clk_i = (1U & 
                                              (~ (IData)(vlSelf->tb_stream_fifo__DOT__clk_i)));
    }
}

VL_INLINE_OPT void Vtb_stream_fifo___024root___act_sequent__TOP__0(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_stream_fifo__DOT__dut__DOT__push;
    tb_stream_fifo__DOT__dut__DOT__push = 0;
    CData/*0:0*/ tb_stream_fifo__DOT__dut__DOT__pop;
    tb_stream_fifo__DOT__dut__DOT__pop = 0;
    // Body
    tb_stream_fifo__DOT__dut__DOT__pop = ((0U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)) 
                                          & (IData)(vlSelf->tb_stream_fifo__DOT__ready_i));
    tb_stream_fifo__DOT__dut__DOT__push = ((4U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)) 
                                           & (IData)(vlSelf->tb_stream_fifo__DOT__valid_i));
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q;
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_q;
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(tb_stream_fifo__DOT__dut__DOT__pop) 
         & (0U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q)));
    }
    if (((IData)(tb_stream_fifo__DOT__dut__DOT__push) 
         & (4U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__gate_clock = 0U;
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_q)));
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(tb_stream_fifo__DOT__dut__DOT__pop) 
         & (0U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(tb_stream_fifo__DOT__dut__DOT__push) 
           & (IData)(tb_stream_fifo__DOT__dut__DOT__pop)) 
          & (4U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[0U] 
        = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[0U];
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[1U] 
        = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[1U];
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[2U] 
        = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[2U];
    vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[3U] 
        = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[3U];
    if (((IData)(tb_stream_fifo__DOT__dut__DOT__push) 
         & (4U != (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q)))) {
        VL_ASSIGNSEL_WI(128,32,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_q), 5U)), vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n, vlSelf->tb_stream_fifo__DOT__data_i);
    }
}

void Vtb_stream_fifo___024root___eval_act(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_stream_fifo___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_stream_fifo___024root___nba_sequent__TOP__0(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_stream_fifo__DOT__rst_ni) {
        if (vlSelf->tb_stream_fifo__DOT__flush_i) {
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q = 0U;
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_q = 0U;
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q = 0U;
        } else {
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q 
                = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_n;
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_q 
                = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_n;
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q 
                = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_n;
        }
        if ((1U & (~ (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__gate_clock)))) {
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[0U] 
                = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[0U];
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[1U] 
                = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[1U];
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[2U] 
                = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[2U];
            vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[3U] 
                = vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_n[3U];
        }
    } else {
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q = 0U;
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[0U] = 0U;
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[1U] = 0U;
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[2U] = 0U;
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[3U] = 0U;
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__write_pointer_q = 0U;
        vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q = 0U;
    }
}

void Vtb_stream_fifo___024root___eval_nba(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_stream_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_stream_fifo___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_stream_fifo___024root___timing_resume(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4ea73642__0.resume("@(posedge tb_stream_fifo.clk_i)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_stream_fifo___024root___timing_commit(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4ea73642__0.commit("@(posedge tb_stream_fifo.clk_i)");
    }
}

void Vtb_stream_fifo___024root___eval_triggers__act(Vtb_stream_fifo___024root* vlSelf);

bool Vtb_stream_fifo___024root___eval_phase__act(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_stream_fifo___024root___eval_triggers__act(vlSelf);
    Vtb_stream_fifo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_stream_fifo___024root___timing_resume(vlSelf);
        Vtb_stream_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_stream_fifo___024root___eval_phase__nba(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_stream_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_stream_fifo___024root___dump_triggers__nba(Vtb_stream_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_stream_fifo___024root___dump_triggers__act(Vtb_stream_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_stream_fifo___024root___eval(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_stream_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_stream_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_stream_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_stream_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_stream_fifo___024root___eval_debug_assertions(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
