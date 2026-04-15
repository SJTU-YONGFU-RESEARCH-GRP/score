// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_auteur_fifo.h for the primary calling header

#include "Vtb_auteur_fifo__pch.h"
#include "Vtb_auteur_fifo__Syms.h"
#include "Vtb_auteur_fifo___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_auteur_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_tb_auteur_fifo__DOT__pulse_push__0__v;
    __Vtask_tb_auteur_fifo__DOT__pulse_push__0__v = 0;
    CData/*7:0*/ __Vtask_tb_auteur_fifo__DOT__pulse_push__1__v;
    __Vtask_tb_auteur_fifo__DOT__pulse_push__1__v = 0;
    CData/*7:0*/ __Vtask_tb_auteur_fifo__DOT__pulse_push__2__v;
    __Vtask_tb_auteur_fifo__DOT__pulse_push__2__v = 0;
    // Body
    vlSelf->tb_auteur_fifo__DOT__rst_ni = 0U;
    vlSelf->tb_auteur_fifo__DOT__flush_i = 0U;
    vlSelf->tb_auteur_fifo__DOT__push_i = 0U;
    vlSelf->tb_auteur_fifo__DOT__pop_i = 0U;
    vlSelf->tb_auteur_fifo__DOT__data_i = 0U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       51);
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       51);
    vlSelf->tb_auteur_fifo__DOT__rst_ni = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       53);
    __Vtask_tb_auteur_fifo__DOT__pulse_push__0__v = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       35);
    vlSelf->tb_auteur_fifo__DOT__data_i = __Vtask_tb_auteur_fifo__DOT__pulse_push__0__v;
    vlSelf->tb_auteur_fifo__DOT__push_i = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       38);
    vlSelf->tb_auteur_fifo__DOT__push_i = 0U;
    vlSelf->tb_auteur_fifo__DOT__data_i = 0U;
    __Vtask_tb_auteur_fifo__DOT__pulse_push__1__v = 2U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       35);
    vlSelf->tb_auteur_fifo__DOT__data_i = __Vtask_tb_auteur_fifo__DOT__pulse_push__1__v;
    vlSelf->tb_auteur_fifo__DOT__push_i = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       38);
    vlSelf->tb_auteur_fifo__DOT__push_i = 0U;
    vlSelf->tb_auteur_fifo__DOT__data_i = 0U;
    __Vtask_tb_auteur_fifo__DOT__pulse_push__2__v = 3U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       35);
    vlSelf->tb_auteur_fifo__DOT__data_i = __Vtask_tb_auteur_fifo__DOT__pulse_push__2__v;
    vlSelf->tb_auteur_fifo__DOT__push_i = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       38);
    vlSelf->tb_auteur_fifo__DOT__push_i = 0U;
    vlSelf->tb_auteur_fifo__DOT__data_i = 0U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       58);
    if (VL_UNLIKELY((1U != (0xffU & (IData)((vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_q 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_q), 3U)))))))) {
        VL_WRITEF_NX("FAIL auteur_fifo TB: expected first head 8'h01, got %x\n[%0t] %%Fatal: tb_auteur_fifo.sv:62: Assertion failed in %Ntb_auteur_fifo: tb_auteur_fifo\n",0,
                     8,(0xffU & (IData)((vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_q 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_q), 3U))))),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 62, "");
    }
    vlSelf->tb_auteur_fifo__DOT__pop_i = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       66);
    vlSelf->tb_auteur_fifo__DOT__pop_i = 0U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       68);
    if (VL_UNLIKELY((2U != (0xffU & (IData)((vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_q 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_q), 3U)))))))) {
        VL_WRITEF_NX("FAIL auteur_fifo TB: expected 8'h02 after first pop, got %x\n[%0t] %%Fatal: tb_auteur_fifo.sv:71: Assertion failed in %Ntb_auteur_fifo: tb_auteur_fifo\n",0,
                     8,(0xffU & (IData)((vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_q 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_q), 3U))))),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 71, "");
    }
    vlSelf->tb_auteur_fifo__DOT__pop_i = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       75);
    vlSelf->tb_auteur_fifo__DOT__pop_i = 0U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       77);
    if (VL_UNLIKELY((3U != (0xffU & (IData)((vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_q 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_q), 3U)))))))) {
        VL_WRITEF_NX("FAIL auteur_fifo TB: expected 8'h03 after second pop, got %x\n[%0t] %%Fatal: tb_auteur_fifo.sv:80: Assertion failed in %Ntb_auteur_fifo: tb_auteur_fifo\n",0,
                     8,(0xffU & (IData)((vlSelf->tb_auteur_fifo__DOT__dut__DOT__mem_q 
                                         >> (0x3fU 
                                             & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->tb_auteur_fifo__DOT__dut__DOT__read_pointer_q), 3U))))),
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 80, "");
    }
    vlSelf->tb_auteur_fifo__DOT__pop_i = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       84);
    vlSelf->tb_auteur_fifo__DOT__pop_i = 0U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       86);
    vlSelf->tb_auteur_fifo__DOT__flush_i = 1U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       89);
    vlSelf->tb_auteur_fifo__DOT__flush_i = 0U;
    co_await vlSelf->__VtrigSched_hebeca4a0__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_auteur_fifo.clk_i)", 
                                                       "/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 
                                                       91);
    VL_WRITEF_NX("PASS auteur_fifo TB\n",0);
    VL_FINISH_MT("/home/yongfu/proj/score/scripts/assets/auteur/tb_auteur_fifo.sv", 94, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_auteur_fifo___024root___dump_triggers__act(Vtb_auteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_auteur_fifo___024root___eval_triggers__act(Vtb_auteur_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_auteur_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_auteur_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_auteur_fifo__DOT__clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_auteur_fifo__DOT__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->tb_auteur_fifo__DOT__rst_ni)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_auteur_fifo__DOT__rst_ni__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_auteur_fifo__DOT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_auteur_fifo__DOT__clk_i__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_auteur_fifo__DOT__clk_i__0 
        = vlSelf->tb_auteur_fifo__DOT__clk_i;
    vlSelf->__Vtrigprevexpr___TOP__tb_auteur_fifo__DOT__rst_ni__0 
        = vlSelf->tb_auteur_fifo__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_auteur_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
