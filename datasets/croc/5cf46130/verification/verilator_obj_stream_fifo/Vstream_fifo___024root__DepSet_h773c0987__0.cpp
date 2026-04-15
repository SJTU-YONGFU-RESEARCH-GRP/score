// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstream_fifo.h for the primary calling header

#include "Vstream_fifo__pch.h"
#include "Vstream_fifo___024root.h"

VL_INLINE_OPT void Vstream_fifo___024root___ico_sequent__TOP__0(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ stream_fifo__DOT__push;
    stream_fifo__DOT__push = 0;
    CData/*0:0*/ stream_fifo__DOT__pop;
    stream_fifo__DOT__pop = 0;
    // Body
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

void Vstream_fifo___024root___eval_ico(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vstream_fifo___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vstream_fifo___024root___eval_triggers__ico(Vstream_fifo___024root* vlSelf);

bool Vstream_fifo___024root___eval_phase__ico(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vstream_fifo___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vstream_fifo___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vstream_fifo___024root___eval_act(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_act\n"); );
}

extern const VlWide<8>/*255:0*/ Vstream_fifo__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vstream_fifo___024root___nba_sequent__TOP__0(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ stream_fifo__DOT__push;
    stream_fifo__DOT__push = 0;
    CData/*0:0*/ stream_fifo__DOT__pop;
    stream_fifo__DOT__pop = 0;
    // Body
    if (vlSelf->rst_ni) {
        if (vlSelf->flush_i) {
            vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q = 0U;
            vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_q = 0U;
            vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q = 0U;
        } else {
            vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_n;
            vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_q 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_n;
            vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_n;
        }
        if ((1U & (~ (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__gate_clock)))) {
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[0U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[0U];
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[1U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[1U];
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[2U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[2U];
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[3U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[3U];
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[4U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[4U];
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[5U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[5U];
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[6U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[6U];
            vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[7U] 
                = vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_n[7U];
        }
    } else {
        vlSelf->stream_fifo__DOT__fifo_i__DOT__read_pointer_q = 0U;
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[0U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[1U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[2U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[3U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[4U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[5U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[6U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__mem_q[7U] 
            = Vstream_fifo__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->stream_fifo__DOT__fifo_i__DOT__write_pointer_q = 0U;
        vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q = 0U;
    }
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
    vlSelf->usage_o = (7U & (IData)(vlSelf->stream_fifo__DOT__fifo_i__DOT__status_cnt_q));
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

void Vstream_fifo___024root___eval_nba(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstream_fifo___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vstream_fifo___024root___eval_triggers__act(Vstream_fifo___024root* vlSelf);

bool Vstream_fifo___024root___eval_phase__act(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstream_fifo___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstream_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstream_fifo___024root___eval_phase__nba(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstream_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__ico(Vstream_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__nba(Vstream_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstream_fifo___024root___dump_triggers__act(Vstream_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vstream_fifo___024root___eval(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval\n"); );
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
            Vstream_fifo___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/datasets/croc/5cf46130/source_snapshot/rtl/common_cells/stream_fifo.sv", 13, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vstream_fifo___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstream_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/yongfu/proj/score/datasets/croc/5cf46130/source_snapshot/rtl/common_cells/stream_fifo.sv", 13, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstream_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/yongfu/proj/score/datasets/croc/5cf46130/source_snapshot/rtl/common_cells/stream_fifo.sv", 13, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstream_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstream_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstream_fifo___024root___eval_debug_assertions(Vstream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstream_fifo___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->flush_i & 0xfeU))) {
        Verilated::overWidthError("flush_i");}
    if (VL_UNLIKELY((vlSelf->testmode_i & 0xfeU))) {
        Verilated::overWidthError("testmode_i");}
    if (VL_UNLIKELY((vlSelf->valid_i & 0xfeU))) {
        Verilated::overWidthError("valid_i");}
    if (VL_UNLIKELY((vlSelf->ready_i & 0xfeU))) {
        Verilated::overWidthError("ready_i");}
}
#endif  // VL_DEBUG
