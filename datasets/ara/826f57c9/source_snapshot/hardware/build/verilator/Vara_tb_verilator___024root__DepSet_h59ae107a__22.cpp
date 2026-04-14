// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__307(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__307\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                    ? 8U : 9U))) << 0x2cU) 
                 | (((QData)((IData)(((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                       ? 6U : 7U))) 
                     << 0x28U) | (((QData)((IData)(
                                                   ((0x10U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                     ? 4U
                                                     : 5U))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 ((4U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                   ? 2U
                                                                   : 3U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                      ? 0U
                                                                      : 1U) 
                                                                    << 0x1cU) 
                                                                   | ((0xf000000U 
                                                                       & (((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                            ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                            : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                          << 0x18U)) 
                                                                      | ((0xf00000U 
                                                                          & (((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                               ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                               : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                             << 0x14U)) 
                                                                         | ((0xf0000U 
                                                                             & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                            | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                               | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__308(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__308\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0x300U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 0xbU) | (((IData)((0U != (0xc0U 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                               << 0xaU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x30U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                            << 9U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 8U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                                  << 7U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x6000U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 6U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1800U 
                                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                        << 5U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x600U 
                                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                           << 4U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x180U 
                                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                              << 3U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x60U 
                                                                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                 << 2U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x18U 
                                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                    << 1U) 
                                                                   | (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (6U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__0__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__309(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__309\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                    ? 8U : 9U))) << 0x2cU) 
                 | (((QData)((IData)(((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                       ? 6U : 7U))) 
                     << 0x28U) | (((QData)((IData)(
                                                   ((0x10U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                     ? 4U
                                                     : 5U))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 ((4U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                   ? 2U
                                                                   : 3U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                      ? 0U
                                                                      : 1U) 
                                                                    << 0x1cU) 
                                                                   | ((0xf000000U 
                                                                       & (((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                            ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                            : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                          << 0x18U)) 
                                                                      | ((0xf00000U 
                                                                          & (((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                               ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                               : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                             << 0x14U)) 
                                                                         | ((0xf0000U 
                                                                             & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                            | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                               | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__310(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__310\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0x300U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 0xbU) | (((IData)((0U != (0xc0U 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                               << 0xaU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x30U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                            << 9U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 8U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                                  << 7U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x6000U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 6U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1800U 
                                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                        << 5U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x600U 
                                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                           << 4U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x180U 
                                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                              << 3U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x60U 
                                                                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                 << 2U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x18U 
                                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                    << 1U) 
                                                                   | (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (6U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__1__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__311(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__311\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                    ? 8U : 9U))) << 0x2cU) 
                 | (((QData)((IData)(((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                       ? 6U : 7U))) 
                     << 0x28U) | (((QData)((IData)(
                                                   ((0x10U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                     ? 4U
                                                     : 5U))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 ((4U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                   ? 2U
                                                                   : 3U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                      ? 0U
                                                                      : 1U) 
                                                                    << 0x1cU) 
                                                                   | ((0xf000000U 
                                                                       & (((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                            ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                            : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                          << 0x18U)) 
                                                                      | ((0xf00000U 
                                                                          & (((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                               ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                               : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                             << 0x14U)) 
                                                                         | ((0xf0000U 
                                                                             & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                            | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                               | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__312(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__312\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0x300U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 0xbU) | (((IData)((0U != (0xc0U 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                               << 0xaU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x30U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                            << 9U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 8U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                                  << 7U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x6000U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 6U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1800U 
                                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                        << 5U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x600U 
                                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                           << 4U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x180U 
                                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                              << 3U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x60U 
                                                                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                 << 2U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x18U 
                                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                    << 1U) 
                                                                   | (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (6U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__2__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__313(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__313\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                    ? 8U : 9U))) << 0x2cU) 
                 | (((QData)((IData)(((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                       ? 6U : 7U))) 
                     << 0x28U) | (((QData)((IData)(
                                                   ((0x10U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                     ? 4U
                                                     : 5U))) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 ((4U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                   ? 2U
                                                                   : 3U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp))
                                                                      ? 0U
                                                                      : 1U) 
                                                                    << 0x1cU) 
                                                                   | ((0xf000000U 
                                                                       & (((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                            ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                            : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                          << 0x18U)) 
                                                                      | ((0xf00000U 
                                                                          & (((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                               ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                               : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                             << 0x14U)) 
                                                                         | ((0xf0000U 
                                                                             & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                            | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                               | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__314(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__314\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0x300U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 0xbU) | (((IData)((0U != (0xc0U 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                               << 0xaU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x30U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                            << 9U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xcU 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 8U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__in_tmp)))) 
                                                  << 7U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x6000U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 6U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1800U 
                                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                        << 5U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x600U 
                                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                           << 4U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x180U 
                                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                              << 3U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x60U 
                                                                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                 << 2U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x18U 
                                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                    << 1U) 
                                                                   | (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (6U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk2__BRA__3__KET____DOT__leading_zero_e16_i__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__315(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__315\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & ((0x800000U 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 0xdU) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x13U))
                                                   : 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_2[1U] = ((((0x2000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                            << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                         << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      >> 2U))) << 0x1cU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & ((0x800000U 
                                                       & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 0xdU) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x13U))
                                                       : 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 8U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x18U)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x7c0U & (((0x20000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xfU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x11U))
                                  : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x16U))) 
                                << 6U)) | ((0x3eU & 
                                            (((0x8000000U 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                           | (1U & 
                                              (((0x2000000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                 ? 
                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                               >> 4U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_4[2U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x58U | ((0xf8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U]) 
                    | (((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                         ? 0x14U : 0x15U) >> 3U)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__316(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__316\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x4000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp 
                                << 4U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x300000U 
                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                            << 0x19U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc0000U 
                                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                               << 0x18U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                  << 0x17U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                     << 0x16U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3000U 
                                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                        << 0x15U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xc00U 
                                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                           << 0x14U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x300U 
                                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                              << 0x13U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xc0U 
                                                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                 << 0x12U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x30U 
                                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                    << 0x11U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                       << 0x10U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                          << 0xfU) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                             << 0xeU) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__0__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__317(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__317\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & ((0x800000U 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                   ? 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 0xdU) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x13U))
                                                   : 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_2[1U] = ((((0x2000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                            << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                      >> 0x1dU)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                         << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      >> 2U))) << 0x1cU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & ((0x800000U 
                                                       & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 0xdU) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x13U))
                                                       : 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                        << 8U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                          >> 0x18U)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x7c0U & (((0x20000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                  ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xfU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x11U))
                                  : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                      << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  >> 0x16U))) 
                                << 6U)) | ((0x3eU & 
                                            (((0x8000000U 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                               ? ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                           | (1U & 
                                              (((0x2000000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)
                                                 ? 
                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                               >> 4U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_4[2U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U] 
        = (0x58U | ((0xf8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__index_nodes[4U]) 
                    | (((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp)
                         ? 0x14U : 0x15U) >> 3U)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__318(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__318\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x4000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp 
                                << 4U)) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0x300000U 
                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                            << 0x19U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc0000U 
                                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                               << 0x18U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                  << 0x17U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc000U 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                     << 0x16U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3000U 
                                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                        << 0x15U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xc00U 
                                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                           << 0x14U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x300U 
                                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                              << 0x13U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xc0U 
                                                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                 << 0x12U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x30U 
                                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                    << 0x11U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                       << 0x10U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__in_tmp))) 
                                                                          << 0xfU) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                             << 0xeU) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__genblk3__BRA__1__KET____DOT__leading_zero_e32_i__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__319(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__319\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<6>/*191:0*/ __Vtemp_18;
    VlWide<6>/*191:0*/ __Vtemp_20;
    VlWide<6>/*191:0*/ __Vtemp_23;
    VlWide<8>/*255:0*/ __Vtemp_29;
    VlWide<9>/*287:0*/ __Vtemp_34;
    VlWide<9>/*287:0*/ __Vtemp_39;
    VlWide<11>/*351:0*/ __Vtemp_45;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x3fU 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                              >> 0x13U)))
                                                   ? 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 0xeU) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x12U))
                                                   : 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x36U) | (((QData)((IData)(
                                                            (0x3fU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                            >> 0x11U)))
                                                                 ? 
                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 6U))
                                                                 : 
                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x14U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xcU)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                               >> 0xfU)))
                                                                    ? 
                                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1aU))
                                                                    : 
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                       ? 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x12U) 
                                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xeU))
                                                                       : 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                          ? 
                                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1eU) 
                                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 2U))
                                                                          : 
                                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x18U) 
                                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 8U)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & (((1U 
                                                                             & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                             ? 
                                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xaU) 
                                                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                             : 
                                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 4U) 
                                                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                ? 
                                                                               ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                : 
                                                                               ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))));
    __Vtemp_2[1U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                      >> 0x15U))) ? 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                         << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                   >> 0x1eU)) : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 4U))) 
                      << 0x1cU) | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                             >> 0x13U)))
                                                                  ? 
                                                                 ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xeU) 
                                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x12U))
                                                                  : 
                                                                 ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0x11U)))
                                                                     ? 
                                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x1aU) 
                                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 6U))
                                                                     : 
                                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x14U) 
                                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xcU)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xfU)))
                                                                        ? 
                                                                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1aU))
                                                                        : 
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                           ? 
                                                                          ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0x12U) 
                                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0xeU))
                                                                           : 
                                                                          ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                              ? 
                                                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x18U) 
                                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 8U)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_4[2U] = ((0x3f00U & (((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x19U)))
                                   ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0xaU) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   >> 0x16U))
                                   : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                       << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                 >> 0x1cU))) 
                                 << 8U)) | ((0xfcU 
                                             & (((1U 
                                                  & (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x17U)))
                                                  ? 
                                                 ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x16U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xaU))
                                                  : 
                                                 ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x10U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0x10U))) 
                                                << 2U)) 
                                            | (3U & 
                                               (((1U 
                                                  & (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x15U)))
                                                  ? 
                                                 ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 2U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                     >> 0x1eU))
                                                  : 
                                                 ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 4U))) 
                                                >> 4U))));
    __Vtemp_7[2U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                      >> 0x1fU))) ? 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                         << 6U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                   >> 0x1aU)) : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U]) 
                      << 0x1aU) | ((0x3f00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x1dU)))
                                                    ? 
                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0x12U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0xcU) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                   | ((0xfc000U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x1bU)))
                                                     ? 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                      << 0x18U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        >> 8U))) 
                                                   << 0xeU)) 
                                      | __Vtemp_4[2U])));
    __Vtemp_10[3U] = ((0x3f000U & (((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                   >> 0x25U)))
                                     ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                         << 2U) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                   >> 0x1eU))
                                     : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                         << 0x1cU) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                           >> 4U))) 
                                   << 0xcU)) | ((0xfc0U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                 >> 0x23U)))
                                                      ? 
                                                     ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                       << 0xeU) 
                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                         >> 0x12U))
                                                      : 
                                                     ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                       << 8U) 
                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                         >> 0x18U))) 
                                                    << 6U)) 
                                                | (0x3fU 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x21U)))
                                                       ? 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          >> 6U))
                                                       : 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                        << 0x14U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                          >> 0xcU))))));
    __Vtemp_13[3U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                       >> 0x2bU))) ? 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                          << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       >> 2U)) : ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   << 0x18U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     >> 8U))) 
                       << 0x1eU) | ((0x3f000000U & 
                                     (((1U & (IData)(
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                      >> 0x29U)))
                                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                            << 0xaU) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              >> 0x16U))
                                        : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                            << 4U) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                              >> 0x1cU))) 
                                      << 0x18U)) | 
                                    ((0xfc0000U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x27U)))
                                                     ? 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                      << 0x16U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        >> 0xaU))
                                                     : 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                      << 0x10U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        >> 0x10U))) 
                                                   << 0x12U)) 
                                     | __Vtemp_10[3U])));
    __Vtemp_15[4U] = ((0xfc00U & (((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                  >> 0x2fU)))
                                    ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                        << 6U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                  >> 0x1aU))
                                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U]) 
                                  << 0xaU)) | ((0x3f0U 
                                                & (((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x2dU)))
                                                     ? 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      << 0x12U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        >> 0xeU))
                                                     : 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      << 0xcU) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        >> 0x14U))) 
                                                   << 4U)) 
                                               | (0xfU 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x2bU)))
                                                       ? 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                          >> 2U))
                                                       : 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                        << 0x18U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                          >> 8U))) 
                                                     >> 2U))));
    __Vtemp_18[4U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                       >> 0x35U))) ? 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                          << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                    >> 0x1eU)) : ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x1cU) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 4U))) 
                       << 0x1cU) | ((0xfc00000U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x33U)))
                                                     ? 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                      << 0xeU) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                        >> 0x12U))
                                                     : 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                      << 8U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                        >> 0x18U))) 
                                                   << 0x16U)) 
                                    | ((0x3f0000U & 
                                        (((1U & (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                         >> 0x31U)))
                                           ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                               << 0x1aU) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                 >> 6U))
                                           : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                               << 0x14U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                 >> 0xcU))) 
                                         << 0x10U)) 
                                       | __Vtemp_15[4U])));
    __Vtemp_20[5U] = ((0x3f00U & (((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                  >> 0x39U)))
                                    ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                        << 0xaU) | 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                        >> 0x16U)) : 
                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                     << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                               >> 0x1cU))) 
                                  << 8U)) | ((0xfcU 
                                              & (((1U 
                                                   & (IData)(
                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                              >> 0x37U)))
                                                   ? 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    << 0x16U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      >> 0xaU))
                                                   : 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    << 0x10U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      >> 0x10U))) 
                                                 << 2U)) 
                                             | (3U 
                                                & (((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x35U)))
                                                     ? 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      << 2U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                        >> 0x1eU))
                                                     : 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                      << 0x1cU) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                        >> 4U))) 
                                                   >> 4U))));
    __Vtemp_23[5U] = ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp))
                         ? 0U : 1U) << 0x1aU) | ((0x3f00000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x3dU)))
                                                       ? 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        << 0x12U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                          >> 0xeU))
                                                       : 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        << 0xcU) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                          >> 0x14U))) 
                                                     << 0x14U)) 
                                                 | ((0xfc000U 
                                                     & (((1U 
                                                          & (IData)(
                                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
                                                                     >> 0x3bU)))
                                                          ? 
                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                           << 0x1eU) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                             >> 2U))
                                                          : 
                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                           << 0x18U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                             >> 8U))) 
                                                        << 0xeU)) 
                                                    | __Vtemp_20[5U])));
    __Vtemp_29[6U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                       >> 0xcU))) ? 0xcU
                         : 0xdU) << 0x1eU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0xaU)))
                                                 ? 0xaU
                                                 : 0xbU) 
                                               << 0x18U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 8U)))
                                                    ? 8U
                                                    : 9U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 6U)))
                                                       ? 6U
                                                       : 7U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 4U)))
                                                          ? 4U
                                                          : 5U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 2U)))
                                                           ? 2U
                                                           : 3U))))));
    __Vtemp_34[7U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                       >> 0x16U))) ? 0x16U
                         : 0x17U) << 0x1cU) | ((((1U 
                                                  & (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                             >> 0x14U)))
                                                  ? 0x14U
                                                  : 0x15U) 
                                                << 0x16U) 
                                               | ((((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                >> 0x12U)))
                                                     ? 0x12U
                                                     : 0x13U) 
                                                   << 0x10U) 
                                                  | ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                   >> 0x10U)))
                                                        ? 0x10U
                                                        : 0x11U) 
                                                      << 0xaU) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 0xeU)))
                                                           ? 0xeU
                                                           : 0xfU) 
                                                         << 4U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                        >> 0xcU)))
                                                             ? 0xcU
                                                             : 0xdU) 
                                                           >> 2U))))));
    __Vtemp_39[8U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                       >> 0x20U))) ? 0x20U
                         : 0x21U) << 0x1aU) | ((((1U 
                                                  & (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                             >> 0x1eU)))
                                                  ? 0x1eU
                                                  : 0x1fU) 
                                                << 0x14U) 
                                               | ((((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                >> 0x1cU)))
                                                     ? 0x1cU
                                                     : 0x1dU) 
                                                   << 0xeU) 
                                                  | ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                   >> 0x1aU)))
                                                        ? 0x1aU
                                                        : 0x1bU) 
                                                      << 8U) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 0x18U)))
                                                           ? 0x18U
                                                           : 0x19U) 
                                                         << 2U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                        >> 0x16U)))
                                                             ? 0x16U
                                                             : 0x17U) 
                                                           >> 4U))))));
    __Vtemp_45[9U] = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                       >> 0x2cU))) ? 0x2cU
                         : 0x2dU) << 0x1eU) | ((((1U 
                                                  & (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                             >> 0x2aU)))
                                                  ? 0x2aU
                                                  : 0x2bU) 
                                                << 0x18U) 
                                               | ((((1U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                >> 0x28U)))
                                                     ? 0x28U
                                                     : 0x29U) 
                                                   << 0x12U) 
                                                  | ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                   >> 0x26U)))
                                                        ? 0x26U
                                                        : 0x27U) 
                                                      << 0xcU) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 0x24U)))
                                                           ? 0x24U
                                                           : 0x25U) 
                                                         << 6U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x22U)))
                                                            ? 0x22U
                                                            : 0x23U))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[2U] 
        = __Vtemp_7[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[3U] 
        = __Vtemp_13[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[4U] 
        = __Vtemp_18[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[5U] 
        = __Vtemp_23[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[6U] 
        = __Vtemp_29[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[7U] 
        = __Vtemp_34[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[8U] 
        = __Vtemp_39[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[9U] 
        = __Vtemp_45[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                            >> 0x32U))) ? 0x32U : 0x33U) 
            << 0x10U) | ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                          >> 0x30U)))
                            ? 0x30U : 0x31U) << 0xaU) 
                         | ((((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x2eU)))
                               ? 0x2eU : 0x2fU) << 4U) 
                            | (((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp 
                                               >> 0x2cU)))
                                 ? 0x2cU : 0x2dU) >> 2U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = (0xfc000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0xbU]);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__320(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__320\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((0ULL != (0xc000000000000ULL 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                  << 0x38U) | (((QData)((IData)((0ULL 
                                                 != 
                                                 (0x3000000000000ULL 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                << 0x37U) | (((QData)((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0xc00000000000ULL 
                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0x300000000000ULL 
                                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(
                                                                    (0ULL 
                                                                     != 
                                                                     (0xc0000000000ULL 
                                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       (0ULL 
                                                                        != 
                                                                        (0x30000000000ULL 
                                                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          (0ULL 
                                                                           != 
                                                                           (0xc000000000ULL 
                                                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                          << 0x32U) 
                                                         | (((QData)((IData)(
                                                                             (0ULL 
                                                                              != 
                                                                              (0x3000000000ULL 
                                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                             << 0x31U) 
                                                            | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                   << 0x2fU) 
                                                                  | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                      << 0x2eU) 
                                                                     | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                         << 0x2dU) 
                                                                        | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                            << 0x2cU) 
                                                                           | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                               << 0x2bU) 
                                                                              | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xcULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (3ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__321(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__321\n"); );
    // Body
    if ((1U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                      >> 3U)))) {
        vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay 
            = (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U]);
        vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                         >> 0xfU)));
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                              || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                                  || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)
                                  : 0U))));
        vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                      || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                     || (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                    || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)));
        }
        if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[0U] 
            = vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay 
            = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result 
            = (0x3ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                          << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                         >> 0xfU)));
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                              || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                                  || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)
                                  : 0U))));
        vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                      || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                     || (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                    || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)));
        }
        if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[1U] 
            = vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay 
            = (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U]);
        vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                         >> 0xfU)));
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                              || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                                  || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)
                                  : 0U))));
        vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                      || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                     || (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                    || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)));
        }
        if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[2U] 
            = vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay 
            = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result 
            = (0x3ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                          << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub = 0U;
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay) 
                                                         >> 0xfU)));
        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                              || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                                  || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)
                                  : 0U))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                      || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                     || (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result))) 
                    || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__779__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__779__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay)));
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__778__vfpu_result)))));
        if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__778__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__778__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__778__vfrec7_out;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[3U] 
            = vlSelf->__Vfunc_vfrec7_fp16__778__Vfuncout;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o 
            = (((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                  [3U] << 0x10U) | 
                                 (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                  [2U])))) << 0x20U) 
               | (QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                   [1U] << 0x10U) | 
                                  (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                   [0U])))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag 
            = (0x1fU & (((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                            [3U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                            >> 3U))))) 
                          | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                              [2U] >> 0x10U) & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                              >> 2U)))))) 
                         | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                             [1U] >> 0x10U) & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                             >> 1U)))))) 
                        | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                            [0U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count 
            = (0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay 
            = (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U]);
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & VL_SHIFTL_III(32,10,6, (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay), 
                                             (0x3fU 
                                              & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))))));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
               || (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
              || (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
             || (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
                    || (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count 
            = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16) 
                       >> 4U));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay 
            = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result 
            = (0x3ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                          << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & VL_SHIFTL_III(32,10,6, (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay), 
                                             (0x3fU 
                                              & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))))));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
               || (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
              || (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
             || (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
                    || (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count 
            = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16) 
                       >> 8U));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay 
            = (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U]);
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & VL_SHIFTL_III(32,10,6, (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay), 
                                             (0x3fU 
                                              & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))))));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
               || (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
              || (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
             || (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
                    || (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[2U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count 
            = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16) 
                       >> 0xcU));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay 
            = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result 
            = (0x3ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                          << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & VL_SHIFTL_III(32,10,6, (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay), 
                                             (0x3fU 
                                              & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))))));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
               || (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
              || (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) 
             || (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)) 
                    || (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__785__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__785__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__vfrsqrt7_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[3U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__784__Vfuncout;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o 
            = (((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                  [3U] << 0x10U) | 
                                 (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                  [2U])))) << 0x20U) 
               | (QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                   [1U] << 0x10U) | 
                                  (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                   [0U])))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag 
            = (0x1fU & (((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                            [3U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                            >> 3U))))) 
                          | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                              [2U] >> 0x10U) & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                              >> 2U)))))) 
                         | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                             [1U] >> 0x10U) & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                             >> 1U)))))) 
                        | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                            [0U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
    } else if ((2U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                             >> 3U)))) {
        vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U];
        vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__780__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process)) 
                                                       & (~ 
                                                          (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                                           >> 0x1fU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process)) 
                                                      & (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                                         >> 0x1fU)));
        if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay)) {
            if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay)) {
                vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub 
                    = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub) 
                       | (0x7ffffeU & (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                       << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub 
                = (0x7f800000U | ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub) 
                                  | (0x7ffffcU & (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                                  << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i 
            = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i) 
               | (0x7fffffffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                                  || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))
                                  ? vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub
                                  : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                                      || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))
                                      ? vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay
                                      : 0U))));
        vlSelf->__Vfunc_vfrec7_fp32__780__select_vfrec7_out 
            = (IData)(((0U == (0x600000U & vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay)) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x80000000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                      || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) 
                     || (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) 
                    || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                = ((0x807fffffU & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep) 
                   | (0x7f800000U & (((IData)(0xfeU) 
                                      + (~ (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i 
                                            >> 0x17U))) 
                                     << 0x17U)));
            vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select 
                = (0x7fU & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i 
                            >> 0x10U));
            vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__781__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                = ((0xff80ffffU & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__781__Vfuncout) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = ((0U == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                    >> 0x17U))) ? (
                                                   (0x1f80007fffULL 
                                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                                                   | ((QData)((IData)(
                                                                      (0x80U 
                                                                       | (0x7fU 
                                                                          & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                                                             >> 0x10U))))) 
                                                      << 0xfU))
                    : ((0xffU == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                           >> 0x17U)))
                        ? ((0x1f80003fffULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                           | ((QData)((IData)((0x80U 
                                               | (0x7fU 
                                                  & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                                     >> 0x10U))))) 
                              << 0xeU)) : ((0x1f80007fffULL 
                                            & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                                           | ((QData)((IData)(
                                                              (0xffffU 
                                                               & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                                                  >> 0xfU)))) 
                                              << 0xfU))));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        if (vlSelf->__Vfunc_vfrec7_fp32__780__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp32__780__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp32__780__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp32__780__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                            = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out) 
                               | (IData)((IData)((0x7f7fffffU 
                                                  | ((IData)(
                                                             (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                                                              >> 0x1fU)) 
                                                     << 0x1fU)))));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                        = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out) 
                           | (IData)((IData)((0x7f800000U 
                                              | ((IData)(
                                                         (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                                                          >> 0x1fU)) 
                                                 << 0x1fU)))));
                }
                vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                    = (0x100000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                    = (0x400000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp32__780__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32[0U] 
            = vlSelf->__Vfunc_vfrec7_fp32__780__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U];
        vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub = 0U;
        if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay)) {
            if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay)) {
                vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub 
                    = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub) 
                       | (0x7ffffeU & (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                       << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub 
                = (0x7f800000U | ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub) 
                                  | (0x7ffffcU & (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                                  << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp32__780__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process)) 
                                                       & (~ 
                                                          (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                                           >> 0x1fU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__fp_rm_process)) 
                                                      & (vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                                         >> 0x1fU)));
        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i 
            = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i) 
               | (0x7fffffffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                                  || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))
                                  ? vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_sub
                                  : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                                      || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))
                                      ? vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay
                                      : 0U))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x80000000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                      || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) 
                     || (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result))) 
                    || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                = ((0x807fffffU & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep) 
                   | (0x7f800000U & (((IData)(0xfeU) 
                                      + (~ (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i 
                                            >> 0x17U))) 
                                     << 0x17U)));
            vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select 
                = (0x7fU & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_i 
                            >> 0x10U));
            vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__781__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__781__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                = ((0xff80ffffU & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__781__Vfuncout) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = ((0U == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                    >> 0x17U))) ? (
                                                   (0x1f80007fffULL 
                                                    & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                                                   | ((QData)((IData)(
                                                                      (0x80U 
                                                                       | (0x7fU 
                                                                          & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                                                             >> 0x10U))))) 
                                                      << 0xfU))
                    : ((0xffU == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                           >> 0x17U)))
                        ? ((0x1f80003fffULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                           | ((QData)((IData)((0x80U 
                                               | (0x7fU 
                                                  & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                                     >> 0x10U))))) 
                              << 0xeU)) : ((0x1f80007fffULL 
                                            & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                                           | ((QData)((IData)(
                                                              (0xffffU 
                                                               & (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_n_excep 
                                                                  >> 0xfU)))) 
                                              << 0xfU))));
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        vlSelf->__Vfunc_vfrec7_fp32__780__select_vfrec7_out 
            = (IData)(((0U == (0x600000U & vlSelf->__Vfunc_vfrec7_fp32__780__operand_a_delay)) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__780__vfpu_result)))));
        if (vlSelf->__Vfunc_vfrec7_fp32__780__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp32__780__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp32__780__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp32__780__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                            = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out) 
                               | (IData)((IData)((0x7f7fffffU 
                                                  | ((IData)(
                                                             (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                                                              >> 0x1fU)) 
                                                     << 0x1fU)))));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                        = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out) 
                           | (IData)((IData)((0x7f800000U 
                                              | ((IData)(
                                                         (vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o 
                                                          >> 0x1fU)) 
                                                 << 0x1fU)))));
                }
                vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                    = (0x100000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                    = (0x400000000ULL | vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp32__780__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp32__780__vfrec7_out;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32[1U] 
            = vlSelf->__Vfunc_vfrec7_fp32__780__Vfuncout;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                [1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                                                   [0U])));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag 
            = (0x1fU & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                  [1U] >> 0x20U)) & 
                         (- (IData)((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                           >> 2U))))) 
                        | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                    [0U] >> 0x20U)) 
                           & (- (IData)((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__leading_zeros_count 
            = (0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e32));
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U];
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o = 0ULL;
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i 
                = (0x1ffU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i) 
                   | (0x7fffffU & VL_SHIFTL_III(23,23,9, vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay, 
                                                (0x1ffU 
                                                 & ((IData)(1U) 
                                                    - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i))))));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i 
                = (0xffU & (vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay 
                            >> 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i) 
                   | (0x7fffffU & vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                = (0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i);
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)) 
               || (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) 
              || (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) 
             || (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)) 
                    || (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_o 
                = (0x1ffU & ((IData)(0x17dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = ((0x1f807fffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o) 
                   | ((QData)((IData)((0xffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_o) 
                                                >> 1U)))) 
                      << 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & (vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                                                 >> 0x11U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__787__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = ((0x1fff80ffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o) 
                   | ((QData)((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__Vfuncout)) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__786__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__leading_zeros_count 
            = (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e32) 
                        >> 5U));
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U];
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o = 0ULL;
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i 
                = (0x1ffU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i) 
                   | (0x7fffffU & VL_SHIFTL_III(23,23,9, vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay, 
                                                (0x1ffU 
                                                 & ((IData)(1U) 
                                                    - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i))))));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i 
                = (0xffU & (vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay 
                            >> 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i) 
                   | (0x7fffffU & vlSelf->__Vfunc_vfrsqrt7_fp32__786__operand_a_delay));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                = (0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i);
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)) 
               || (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) 
              || (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) 
             || (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)) 
                    || (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_o 
                = (0x1ffU & ((IData)(0x17dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = ((0x1f807fffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o) 
                   | ((QData)((IData)((0xffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_o) 
                                                >> 1U)))) 
                      << 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & (vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                                                 >> 0x11U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__787__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__787__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = ((0x1fff80ffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o) 
                   | ((QData)((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__787__Vfuncout)) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_i 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp32__786__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__786__vfrsqrt7_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__786__Vfuncout;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                [1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                                                   [0U])));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag 
            = (0x1fU & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                  [1U] >> 0x20U)) & 
                         (- (IData)((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                           >> 2U))))) 
                        | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                    [0U] >> 0x20U)) 
                           & (- (IData)((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
    } else if ((3U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                             >> 3U)))) {
        vlSelf->__Vfunc_vfrec7_fp64__782__fp_rm_process 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U])));
        vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[0U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[1U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[2U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_i = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_sub = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp64__782__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__fp_rm_process)) 
                                                       & (~ (IData)(
                                                                    (vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
                                                                     >> 0x3fU))))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__fp_rm_process)) 
                                                      & (IData)(
                                                                (vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
                                                                 >> 0x3fU))));
        if ((1U & (IData)((vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
                           >> 0x33U)))) {
            if ((1U & (IData)((vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
                               >> 0x33U)))) {
                vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_sub 
                    = ((0x8000000000000000ULL & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_sub) 
                       | (0xffffffffffffeULL & (vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
                                                << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_sub 
                = (0x7ff0000000000000ULL | ((0x8000000000000000ULL 
                                             & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_sub) 
                                            | (0xffffffffffffcULL 
                                               & (vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
                                                  << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_i 
            = ((0x8000000000000000ULL & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_i) 
               | (0x7fffffffffffffffULL & (((0x20U 
                                             == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)) 
                                            || (4U 
                                                == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)))
                                            ? vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_sub
                                            : (((0x40U 
                                                 == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)) 
                                                || (2U 
                                                    == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)))
                                                ? vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay
                                                : 0ULL))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] = 0x80000000U;
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] = 0U;
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] = 0x7ff80000U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U] 
                = (0x10U | vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U]);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] = 0x7ff80000U;
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] = 0xfff00000U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U]);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] = 0x7ff00000U;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U]);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)) 
                      || (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) 
                     || (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result))) 
                    || (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep 
                = ((0x800fffffffffffffULL & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep) 
                   | ((QData)((IData)((0x7ffU & ((IData)(0x7feU) 
                                                 + 
                                                 (~ (IData)(
                                                            (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_i 
                                                             >> 0x34U))))))) 
                      << 0x34U));
            vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select 
                = (0x7fU & (IData)((vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_i 
                                    >> 0x2dU)));
            vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__783__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__783__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep 
                = ((0xfff01fffffffffffULL & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep) 
                   | ((QData)((IData)(vlSelf->__Vfunc_vfrec7_lut__783__Vfuncout)) 
                      << 0x2dU));
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] 
                = ((0U == (0x7ffU & (IData)((vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep 
                                             >> 0x34U))))
                    ? ((0x80000fffU & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U]) 
                       | (0xfffff000U & (0x80000U | 
                                         (0x7f000U 
                                          & ((IData)(
                                                     (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep 
                                                      >> 0x2dU)) 
                                             << 0xcU)))))
                    : ((0x7ffU == (0x7ffU & (IData)(
                                                    (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep 
                                                     >> 0x34U))))
                        ? ((0x800007ffU & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U]) 
                           | (0xfffff800U & (0x40000U 
                                             | (0x3f800U 
                                                & ((IData)(
                                                           (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep 
                                                            >> 0x2dU)) 
                                                   << 0xbU)))))
                        : ((0x80001fffU & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U]) 
                           | (0x7fffe000U & ((IData)(
                                                     (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_n_excep 
                                                      >> 0x2dU)) 
                                             << 0xdU)))));
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] 
                = ((0x7fffffffU & vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U]) 
                   | ((IData)((vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay 
                               >> 0x3fU)) << 0x1fU));
        }
        vlSelf->__Vfunc_vfrec7_fp64__782__select_vfrec7_out 
            = (IData)(((0ULL == (0xc000000000000ULL 
                                 & vlSelf->__Vfunc_vfrec7_fp64__782__operand_a_delay)) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__782__vfpu_result)))));
        if (vlSelf->__Vfunc_vfrec7_fp64__782__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp64__782__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp64__782__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp64__782__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[0U] 
                            = (IData)((0x7fefffffffffffffULL 
                                       | ((QData)((IData)(
                                                          (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] 
                                                           >> 0x1fU))) 
                                          << 0x3fU)));
                        vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[1U] 
                            = (IData)(((0x7fefffffffffffffULL 
                                        | ((QData)((IData)(
                                                           (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] 
                                                            >> 0x1fU))) 
                                           << 0x3fU)) 
                                       >> 0x20U));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[0U] 
                        = (IData)((0x7ff0000000000000ULL 
                                   | ((QData)((IData)(
                                                      (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] 
                                                       >> 0x1fU))) 
                                      << 0x3fU)));
                    vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[1U] 
                        = (IData)(((0x7ff0000000000000ULL 
                                    | ((QData)((IData)(
                                                       (vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U] 
                                                        >> 0x1fU))) 
                                       << 0x3fU)) >> 0x20U));
                }
                vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[2U] 
                    = (1U | vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[2U]);
                vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[2U] 
                    = (4U | vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[2U]);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[0U] 
                = vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[0U];
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[1U] 
                = vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[1U];
            vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[2U] 
                = vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_o[2U];
        }
        vlSelf->__Vfunc_vfrec7_fp64__782__Vfuncout[0U] 
            = vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[0U];
        vlSelf->__Vfunc_vfrec7_fp64__782__Vfuncout[1U] 
            = vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[1U];
        vlSelf->__Vfunc_vfrec7_fp64__782__Vfuncout[2U] 
            = vlSelf->__Vfunc_vfrec7_fp64__782__vfrec7_out[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hf558ee66__0[0U] 
            = vlSelf->__Vfunc_vfrec7_fp64__782__Vfuncout[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hf558ee66__0[1U] 
            = vlSelf->__Vfunc_vfrec7_fp64__782__Vfuncout[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hf558ee66__0[2U] 
            = vlSelf->__Vfunc_vfrec7_fp64__782__Vfuncout[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64[0U][0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hf558ee66__0[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64[0U][1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hf558ee66__0[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64[0U][2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hf558ee66__0[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64
                                [0U][1U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64
                                 [0U][0U])));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64
                        [0U][2U] & (- (IData)((1U & 
                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U])))));
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__leading_zeros_count 
            = (0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U]);
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__operand_a_delay 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U])));
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result 
            = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[0U] = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U] = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i = 0ULL;
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_i 
                = (0xfffU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i 
                = ((0xfff0000000000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i) 
                   | (0xfffffffffffffULL & VL_SHIFTL_QQI(52,52,12, vlSelf->__Vfunc_vfrsqrt7_fp64__788__operand_a_delay, 
                                                         (0xfffU 
                                                          & ((IData)(1U) 
                                                             - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_i))))));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_i 
                = (0x7ffU & (IData)((vlSelf->__Vfunc_vfrsqrt7_fp64__788__operand_a_delay 
                                     >> 0x34U)));
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i 
                = ((0xfff0000000000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i) 
                   | (0xfffffffffffffULL & vlSelf->__Vfunc_vfrsqrt7_fp64__788__operand_a_delay));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i 
                = (0xfff0000000000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i);
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result)) 
               || (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result))) 
              || (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result))) 
             || (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] = 0x7ff80000U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U] 
                = (0x10U | vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U]);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] = 0x7ff80000U;
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] = 0xfff00000U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U]);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] = 0x7ff00000U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U]);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] = 0U;
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result)) 
                    || (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_o 
                = (0xfffU & ((IData)(0xbfdU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] 
                = ((0x800fffffU & vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U]) 
                   | (0x7ff00000U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_o) 
                                     << 0x13U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & (IData)(
                                                        (vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i 
                                                         >> 0x2eU))));
            vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__789__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__789__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] 
                = ((0xfff01fffU & vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U]) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__789__Vfuncout) 
                      << 0xdU));
            vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U] 
                = ((0x7fffffffU & vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U]) 
                   | ((IData)((vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_i 
                               >> 0x3fU)) << 0x1fU));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__Vfuncout[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[0U];
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__Vfuncout[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[1U];
        vlSelf->__Vfunc_vfrsqrt7_fp64__788__Vfuncout[2U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__788__vfrsqrt7_o[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_h326512af__0[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__788__Vfuncout[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_h326512af__0[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__788__Vfuncout[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_h326512af__0[2U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__788__Vfuncout[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64[0U][0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_h326512af__0[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64[0U][1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_h326512af__0[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64[0U][2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_h326512af__0[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64
                                [0U][1U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64
                                 [0U][0U])));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64
                        [0U][2U] & (- (IData)((1U & 
                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U])))));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o = 0ULL;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o = 0ULL;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag = 0U;
    }
    if ((0x48U == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                   >> 0x18U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_ex_flag 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag;
    } else if ((0x49U == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                          >> 0x18U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_ex_flag 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                << 0x33U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                              << 0x13U) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])) 
                                           >> 0xdU)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_ex_flag 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                        >> 8U));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____VdfgExtracted_hf968e02c__0) {
        if ((0U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                          >> 3U)))) {
            if ((1U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                              >> 3U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                    = ((0xfffffffffffffffeULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                       | (IData)((IData)((1U & ((0x5fU 
                                                 == 
                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                  >> 0x18U))
                                                 ? 
                                                (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))
                                                 : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                    = ((0xfffffffffffeffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                       | ((QData)((IData)((1U & ((0x5fU 
                                                  == 
                                                  (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                   >> 0x18U))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x10U)))
                                                  : (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x10U)))))) 
                          << 0x10U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                    = ((0xfffffffeffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                       | ((QData)((IData)((1U & ((0x5fU 
                                                  == 
                                                  (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                   >> 0x18U))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x20U)))
                                                  : (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x20U)))))) 
                          << 0x20U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                    = ((0xfffeffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                       | ((QData)((IData)((1U & ((0x5fU 
                                                  == 
                                                  (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                   >> 0x18U))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x30U)))
                                                  : (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x30U)))))) 
                          << 0x30U));
            } else if ((2U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                     >> 3U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                    = ((0xfffffffffffffffeULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                       | (IData)((IData)((1U & ((0x5fU 
                                                 == 
                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                  >> 0x18U))
                                                 ? 
                                                (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))
                                                 : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                    = ((0xfffffffeffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                       | ((QData)((IData)((1U & ((0x5fU 
                                                  == 
                                                  (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                   >> 0x18U))
                                                  ? 
                                                 (~ (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x20U)))
                                                  : (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                             >> 0x20U)))))) 
                          << 0x20U));
            } else if ((3U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                     >> 3U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                    = ((0xfffffffffffffffeULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                       | (IData)((IData)((1U & ((0x5fU 
                                                 == 
                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                  >> 0x18U))
                                                 ? 
                                                (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))
                                                 : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))))));
            }
        }
    }
}
