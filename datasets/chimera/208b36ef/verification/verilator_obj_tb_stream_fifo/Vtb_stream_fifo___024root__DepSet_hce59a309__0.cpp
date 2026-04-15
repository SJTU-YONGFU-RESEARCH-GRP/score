// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_stream_fifo.h for the primary calling header

#include "Vtb_stream_fifo__pch.h"
#include "Vtb_stream_fifo__Syms.h"
#include "Vtb_stream_fifo___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_stream_fifo__DOT__push_word__0__v;
    __Vtask_tb_stream_fifo__DOT__push_word__0__v = 0;
    IData/*31:0*/ __Vtask_tb_stream_fifo__DOT__push_word__1__v;
    __Vtask_tb_stream_fifo__DOT__push_word__1__v = 0;
    IData/*31:0*/ __Vtask_tb_stream_fifo__DOT__push_word__2__v;
    __Vtask_tb_stream_fifo__DOT__push_word__2__v = 0;
    IData/*31:0*/ __Vtask_tb_stream_fifo__DOT__pop_expect__3__v;
    __Vtask_tb_stream_fifo__DOT__pop_expect__3__v = 0;
    IData/*31:0*/ __Vtask_tb_stream_fifo__DOT__pop_expect__4__v;
    __Vtask_tb_stream_fifo__DOT__pop_expect__4__v = 0;
    IData/*31:0*/ __Vtask_tb_stream_fifo__DOT__pop_expect__5__v;
    __Vtask_tb_stream_fifo__DOT__pop_expect__5__v = 0;
    // Body
    vlSelf->tb_stream_fifo__DOT__rst_ni = 0U;
    vlSelf->tb_stream_fifo__DOT__flush_i = 0U;
    vlSelf->tb_stream_fifo__DOT__data_i = 0U;
    vlSelf->tb_stream_fifo__DOT__valid_i = 0U;
    vlSelf->tb_stream_fifo__DOT__ready_i = 0U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       83);
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       83);
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       83);
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       83);
    vlSelf->tb_stream_fifo__DOT__rst_ni = 1U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       85);
    __Vtask_tb_stream_fifo__DOT__push_word__0__v = 1U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       52);
    vlSelf->tb_stream_fifo__DOT__data_i = __Vtask_tb_stream_fifo__DOT__push_word__0__v;
    vlSelf->tb_stream_fifo__DOT__valid_i = 1U;
    while ((4U == (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q))) {
        co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_stream_fifo.clk_i)", 
                                                           "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                           55);
    }
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       56);
    vlSelf->tb_stream_fifo__DOT__valid_i = 0U;
    vlSelf->tb_stream_fifo__DOT__data_i = 0U;
    __Vtask_tb_stream_fifo__DOT__push_word__1__v = 2U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       52);
    vlSelf->tb_stream_fifo__DOT__data_i = __Vtask_tb_stream_fifo__DOT__push_word__1__v;
    vlSelf->tb_stream_fifo__DOT__valid_i = 1U;
    while ((4U == (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q))) {
        co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_stream_fifo.clk_i)", 
                                                           "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                           55);
    }
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       56);
    vlSelf->tb_stream_fifo__DOT__valid_i = 0U;
    vlSelf->tb_stream_fifo__DOT__data_i = 0U;
    __Vtask_tb_stream_fifo__DOT__push_word__2__v = 3U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       52);
    vlSelf->tb_stream_fifo__DOT__data_i = __Vtask_tb_stream_fifo__DOT__push_word__2__v;
    vlSelf->tb_stream_fifo__DOT__valid_i = 1U;
    while ((4U == (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q))) {
        co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_stream_fifo.clk_i)", 
                                                           "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                           55);
    }
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       56);
    vlSelf->tb_stream_fifo__DOT__valid_i = 0U;
    vlSelf->tb_stream_fifo__DOT__data_i = 0U;
    __Vtask_tb_stream_fifo__DOT__pop_expect__3__v = 1U;
    while ((0U == (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q))) {
        co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_stream_fifo.clk_i)", 
                                                           "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                           64);
    }
    if (VL_UNLIKELY(((((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))
                        ? 0U : (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                                (((IData)(0x1fU) + 
                                  (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))))) 
                      | (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                         (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))) 
                     != __Vtask_tb_stream_fifo__DOT__pop_expect__3__v))) {
        VL_WRITEF_NX("FAIL stream_fifo TB: expected %x got %x\n[%0t] %%Fatal: tb_stream_fifo.sv:67: Assertion failed in %Ntb_stream_fifo.pop_expect: tb_stream_fifo\n",0,
                     32,__Vtask_tb_stream_fifo__DOT__pop_expect__3__v,
                     32,(((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))
                           ? 0U : (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                                   (((IData)(0x1fU) 
                                     + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))))) 
                         | (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                            (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 67, "");
    }
    vlSelf->tb_stream_fifo__DOT__ready_i = 1U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       70);
    vlSelf->tb_stream_fifo__DOT__ready_i = 0U;
    __Vtask_tb_stream_fifo__DOT__pop_expect__4__v = 2U;
    while ((0U == (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q))) {
        co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_stream_fifo.clk_i)", 
                                                           "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                           64);
    }
    if (VL_UNLIKELY(((((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))
                        ? 0U : (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                                (((IData)(0x1fU) + 
                                  (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))))) 
                      | (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                         (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))) 
                     != __Vtask_tb_stream_fifo__DOT__pop_expect__4__v))) {
        VL_WRITEF_NX("FAIL stream_fifo TB: expected %x got %x\n[%0t] %%Fatal: tb_stream_fifo.sv:67: Assertion failed in %Ntb_stream_fifo.pop_expect: tb_stream_fifo\n",0,
                     32,__Vtask_tb_stream_fifo__DOT__pop_expect__4__v,
                     32,(((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))
                           ? 0U : (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                                   (((IData)(0x1fU) 
                                     + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))))) 
                         | (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                            (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 67, "");
    }
    vlSelf->tb_stream_fifo__DOT__ready_i = 1U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       70);
    vlSelf->tb_stream_fifo__DOT__ready_i = 0U;
    __Vtask_tb_stream_fifo__DOT__pop_expect__5__v = 3U;
    while ((0U == (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__status_cnt_q))) {
        co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_stream_fifo.clk_i)", 
                                                           "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                           64);
    }
    if (VL_UNLIKELY(((((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))
                        ? 0U : (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                                (((IData)(0x1fU) + 
                                  (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))) 
                                 >> 5U)] << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))))) 
                      | (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                         (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U) 
                                >> 5U))] >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))) 
                     != __Vtask_tb_stream_fifo__DOT__pop_expect__5__v))) {
        VL_WRITEF_NX("FAIL stream_fifo TB: expected %x got %x\n[%0t] %%Fatal: tb_stream_fifo.sv:67: Assertion failed in %Ntb_stream_fifo.pop_expect: tb_stream_fifo\n",0,
                     32,__Vtask_tb_stream_fifo__DOT__pop_expect__5__v,
                     32,(((0U == (0x1fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))
                           ? 0U : (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                                   (((IData)(0x1fU) 
                                     + (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U))))) 
                         | (vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__mem_q[
                            (3U & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_stream_fifo__DOT__dut__DOT__fifo_i__DOT__read_pointer_q), 5U)))),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 67, "");
    }
    vlSelf->tb_stream_fifo__DOT__ready_i = 1U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       70);
    vlSelf->tb_stream_fifo__DOT__ready_i = 0U;
    vlSelf->tb_stream_fifo__DOT__flush_i = 1U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       96);
    vlSelf->tb_stream_fifo__DOT__flush_i = 0U;
    co_await vlSelf->__VtrigSched_h4ea73642__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_stream_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 
                                                       98);
    VL_WRITEF_NX("PASS stream_fifo TB\n",0);
    VL_FINISH_MT("/home/yongfu/proj/score/scripts/assets/chimera/tb_stream_fifo.sv", 101, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_stream_fifo___024root___dump_triggers__act(Vtb_stream_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_stream_fifo___024root___eval_triggers__act(Vtb_stream_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_stream_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_stream_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_stream_fifo__DOT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_stream_fifo__DOT__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->tb_stream_fifo__DOT__rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_stream_fifo__DOT__rst_ni__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_stream_fifo__DOT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_stream_fifo__DOT__clk_i__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_stream_fifo__DOT__clk_i__0 
        = vlSelf->tb_stream_fifo__DOT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__tb_stream_fifo__DOT__rst_ni__0 
        = vlSelf->tb_stream_fifo__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_stream_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
