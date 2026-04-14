// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlane_e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vlane_e__Syms.h"
#include "Vlane_e___024root.h"

VL_INLINE_OPT void Vlane_e___024root___act_sequent__TOP__107(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_sequent__TOP__107\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h87945aa6__0;
    VlWide<3>/*95:0*/ __Vtemp_h5c9cac80__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c84ac22__0;
    VlWide<4>/*127:0*/ __Vtemp_hf24a28fb__0;
    VlWide<5>/*159:0*/ __Vtemp_h42da9cb8__0;
    VlWide<5>/*159:0*/ __Vtemp_h7f788bbb__0;
    VlWide<6>/*191:0*/ __Vtemp_h9c0c786e__0;
    VlWide<6>/*191:0*/ __Vtemp_h0ca7e193__0;
    VlWide<6>/*191:0*/ __Vtemp_h159cb496__0;
    VlWide<8>/*255:0*/ __Vtemp_hda43d0fe__0;
    VlWide<9>/*287:0*/ __Vtemp_hf689a5c9__0;
    VlWide<9>/*287:0*/ __Vtemp_h4b0138ef__0;
    VlWide<11>/*351:0*/ __Vtemp_ha2adae95__0;
    VlWide<12>/*383:0*/ __Vtemp_hc11fcdcb__0;
    // Body
    __Vtemp_h87945aa6__0[0U] = (IData)((((QData)((IData)(
                                                         (0x3fU 
                                                          & ((1U 
                                                              & (IData)(
                                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                         >> 0x13U)))
                                                              ? 
                                                             ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 0xeU) 
                                                              | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x12U))
                                                              : 
                                                             ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                               << 8U) 
                                                              | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                 >> 0x18U)))))) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            (0x3fU 
                                                             & ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                            >> 0x11U)))
                                                                 ? 
                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 6U))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                  << 0x14U) 
                                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                    >> 0xcU)))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                               >> 0xfU)))
                                                                    ? 
                                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                     << 6U) 
                                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                       >> 0x1aU))
                                                                    : 
                                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                       ? 
                                                                      ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0x12U) 
                                                                       | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0xeU))
                                                                       : 
                                                                      ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                          >> 0x14U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                          ? 
                                                                         ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x1eU) 
                                                                          | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 2U))
                                                                          : 
                                                                         ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           << 0x18U) 
                                                                          | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                             >> 8U)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & (((1U 
                                                                             & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                             ? 
                                                                            ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                              << 0xaU) 
                                                                             | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                             : 
                                                                            ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              << 4U) 
                                                                             | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                ? 
                                                                               ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                : 
                                                                               ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))));
    __Vtemp_h87945aa6__0[1U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x15U)))
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 2U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                       >> 4U))) << 0x1cU) 
                                | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                             >> 0x13U)))
                                                                  ? 
                                                                 ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 0xeU) 
                                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x12U))
                                                                  : 
                                                                 ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                   << 8U) 
                                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                     >> 0x18U)))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0x11U)))
                                                                     ? 
                                                                    ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x1aU) 
                                                                     | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 6U))
                                                                     : 
                                                                    ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                      << 0x14U) 
                                                                     | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                                        >> 0xcU)))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xfU)))
                                                                        ? 
                                                                       ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                         << 6U) 
                                                                        | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                           >> 0x1aU))
                                                                        : 
                                                                       vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U])))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xdU)))
                                                                           ? 
                                                                          ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0x12U) 
                                                                           | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0xeU))
                                                                           : 
                                                                          ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                              >> 0x14U)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 0xbU)))
                                                                              ? 
                                                                             ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x1eU) 
                                                                              | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 2U))
                                                                              : 
                                                                             ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                               << 0x18U) 
                                                                              | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                >> 8U)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 9U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x16U))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 7U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x16U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0xaU))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 0x10U))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 5U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
                                                                                >> 4U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & (((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 3U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x12U))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 8U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0x18U))) 
                                                                                << 6U)) 
                                                                                | (0x3fU 
                                                                                & ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                                >> 1U)))
                                                                                 ? 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 6U))
                                                                                 : 
                                                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
                                                                                >> 0xcU))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h5c9cac80__0[2U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x19U)))
                                              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0xaU) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x16U))
                                              : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                  << 4U) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x17U)))
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x16U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                   << 0x10U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x15U)))
                                              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 2U) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_h1c84ac22__0[2U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x1fU)))
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                       << 6U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                 >> 0x1aU))
                                   : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U]) 
                                 << 0x1aU) | ((0x3f00000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x1dU)))
                                                    ? 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0x12U) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                     << 0xcU) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                              | ((0xfc000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x1eU) 
                                                       | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 2U))
                                                       : 
                                                      ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                        << 0x18U) 
                                                       | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
                                                          >> 8U))) 
                                                     << 0xeU)) 
                                                 | __Vtemp_h5c9cac80__0[2U])));
    __Vtemp_hf24a28fb__0[3U] = ((0x3f000U & (((1U & (IData)(
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x25U)))
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 2U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                     >> 0x1eU))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                   << 0x1cU) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     >> 4U))) 
                                             << 0xcU)) 
                                | ((0xfc0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x23U)))
                                                ? (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0xeU) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x12U))
                                                : (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 8U) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0x18U))) 
                                              << 6U)) 
                                   | (0x3fU & ((1U 
                                                & (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x21U)))
                                                ? (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 6U))
                                                : (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                    << 0x14U) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
                                                      >> 0xcU))))));
    __Vtemp_h42da9cb8__0[3U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x2bU)))
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       << 0x1eU) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                       >> 2U)) : ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                   << 0x18U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     >> 8U))) 
                                 << 0x1eU) | ((0x3f000000U 
                                               & (((1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x29U)))
                                                    ? 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                     << 0xaU) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x16U))
                                                    : 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                     << 4U) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                       >> 0x1cU))) 
                                                  << 0x18U)) 
                                              | ((0xfc0000U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                  >> 0x27U)))
                                                       ? 
                                                      ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x16U) 
                                                       | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0xaU))
                                                       : 
                                                      ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                        << 0x10U) 
                                                       | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
                                                          >> 0x10U))) 
                                                     << 0x12U)) 
                                                 | __Vtemp_hf24a28fb__0[3U])));
    __Vtemp_h7f788bbb__0[4U] = ((0xfc00U & (((1U & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x2fU)))
                                              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                  << 6U) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    >> 0x1aU))
                                              : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U]) 
                                            << 0xaU)) 
                                | ((0x3f0U & (((1U 
                                                & (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2dU)))
                                                ? (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x12U) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0xeU))
                                                : (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0xcU) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 0x14U))) 
                                              << 4U)) 
                                   | (0xfU & (((1U 
                                                & (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                           >> 0x2bU)))
                                                ? (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 2U))
                                                : (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                    << 0x18U) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
                                                      >> 8U))) 
                                              >> 2U))));
    __Vtemp_h9c0c786e__0[4U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                 >> 0x35U)))
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 2U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                 >> 0x1eU))
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                       >> 4U))) << 0x1cU) 
                                | ((0xfc00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x33U)))
                                                    ? 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 0xeU) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x12U))
                                                    : 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                     << 8U) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                       >> 0x18U))) 
                                                  << 0x16U)) 
                                   | ((0x3f0000U & 
                                       (((1U & (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                        >> 0x31U)))
                                          ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x1aU) 
                                             | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 6U))
                                          : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                              << 0x14U) 
                                             | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                >> 0xcU))) 
                                        << 0x10U)) 
                                      | __Vtemp_h7f788bbb__0[4U])));
    __Vtemp_h0ca7e193__0[5U] = ((0x3f00U & (((1U & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x39U)))
                                              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0xaU) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x16U))
                                              : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                  << 4U) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 0x1cU))) 
                                            << 8U)) 
                                | ((0xfcU & (((1U & (IData)(
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                             >> 0x37U)))
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x16U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0xaU))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                   << 0x10U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                     >> 0x10U))) 
                                             << 2U)) 
                                   | (3U & (((1U & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                            >> 0x35U)))
                                              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 2U) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
                                                    >> 0x1eU))
                                              : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                  << 0x1cU) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
                                                    >> 4U))) 
                                            >> 4U))));
    __Vtemp_h159cb496__0[5U] = ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp))
                                   ? 0U : 1U) << 0x1aU) 
                                | ((0x3f00000U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                               >> 0x3dU)))
                                                    ? 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0x12U) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0xeU))
                                                    : 
                                                   ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                     << 0xcU) 
                                                    | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                       >> 0x14U))) 
                                                  << 0x14U)) 
                                   | ((0xfc000U & (
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
                                                                >> 0x3bU)))
                                                     ? 
                                                    ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x1eU) 
                                                     | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                      << 0x18U) 
                                                     | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
                                                        >> 8U))) 
                                                   << 0xeU)) 
                                      | __Vtemp_h0ca7e193__0[5U])));
    __Vtemp_hda43d0fe__0[6U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0xcU)))
                                   ? 0xcU : 0xdU) << 0x1eU) 
                                | ((((1U & (IData)(
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                    >> 0xaU)))
                                      ? 0xaU : 0xbU) 
                                    << 0x18U) | (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 8U)))
                                                    ? 8U
                                                    : 9U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 6U)))
                                                       ? 6U
                                                       : 7U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 4U)))
                                                          ? 4U
                                                          : 5U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 2U)))
                                                           ? 2U
                                                           : 3U))))));
    __Vtemp_hf689a5c9__0[7U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x16U)))
                                   ? 0x16U : 0x17U) 
                                 << 0x1cU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x14U)))
                                                 ? 0x14U
                                                 : 0x15U) 
                                               << 0x16U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x12U)))
                                                    ? 0x12U
                                                    : 0x13U) 
                                                  << 0x10U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x10U)))
                                                       ? 0x10U
                                                       : 0x11U) 
                                                     << 0xaU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0xeU)))
                                                          ? 0xeU
                                                          : 0xfU) 
                                                        << 4U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0xcU)))
                                                            ? 0xcU
                                                            : 0xdU) 
                                                          >> 2U))))));
    __Vtemp_h4b0138ef__0[8U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x20U)))
                                   ? 0x20U : 0x21U) 
                                 << 0x1aU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x1eU)))
                                                 ? 0x1eU
                                                 : 0x1fU) 
                                               << 0x14U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x1cU)))
                                                    ? 0x1cU
                                                    : 0x1dU) 
                                                  << 0xeU) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x1aU)))
                                                       ? 0x1aU
                                                       : 0x1bU) 
                                                     << 8U) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x18U)))
                                                          ? 0x18U
                                                          : 0x19U) 
                                                        << 2U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x16U)))
                                                            ? 0x16U
                                                            : 0x17U) 
                                                          >> 4U))))));
    __Vtemp_ha2adae95__0[9U] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                 >> 0x2cU)))
                                   ? 0x2cU : 0x2dU) 
                                 << 0x1eU) | ((((1U 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                            >> 0x2aU)))
                                                 ? 0x2aU
                                                 : 0x2bU) 
                                               << 0x18U) 
                                              | ((((1U 
                                                    & (IData)(
                                                              (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                               >> 0x28U)))
                                                    ? 0x28U
                                                    : 0x29U) 
                                                  << 0x12U) 
                                                 | ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                  >> 0x26U)))
                                                       ? 0x26U
                                                       : 0x27U) 
                                                     << 0xcU) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                     >> 0x24U)))
                                                          ? 0x24U
                                                          : 0x25U) 
                                                        << 6U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                      >> 0x22U)))
                                                           ? 0x22U
                                                           : 0x23U))))));
    __Vtemp_hc11fcdcb__0[0xaU] = ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                   >> 0x36U)))
                                     ? 0x36U : 0x37U) 
                                   << 0x1cU) | ((((1U 
                                                   & (IData)(
                                                             (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                              >> 0x34U)))
                                                   ? 0x34U
                                                   : 0x35U) 
                                                 << 0x16U) 
                                                | ((((1U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                 >> 0x32U)))
                                                      ? 0x32U
                                                      : 0x33U) 
                                                    << 0x10U) 
                                                   | ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                    >> 0x30U)))
                                                         ? 0x30U
                                                         : 0x31U) 
                                                       << 0xaU) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                       >> 0x2eU)))
                                                            ? 0x2eU
                                                            : 0x2fU) 
                                                          << 4U) 
                                                         | (((1U 
                                                              & (IData)(
                                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                                         >> 0x2cU)))
                                                              ? 0x2cU
                                                              : 0x2dU) 
                                                            >> 2U))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0U] 
        = __Vtemp_h87945aa6__0[0U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[1U] 
        = __Vtemp_h87945aa6__0[1U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[2U] 
        = __Vtemp_h1c84ac22__0[2U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[3U] 
        = __Vtemp_h42da9cb8__0[3U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[4U] 
        = __Vtemp_h9c0c786e__0[4U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[5U] 
        = __Vtemp_h159cb496__0[5U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[6U] 
        = __Vtemp_hda43d0fe__0[6U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[7U] 
        = __Vtemp_hf689a5c9__0[7U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[8U] 
        = __Vtemp_h4b0138ef__0[8U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[9U] 
        = __Vtemp_ha2adae95__0[9U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xaU] 
        = __Vtemp_hc11fcdcb__0[0xaU];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU] 
        = ((0xfc000000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__index_nodes[0xbU]) 
           | ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                               >> 0x3eU))) ? 0x3eU : 0x3fU) 
               << 0x14U) | ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                             >> 0x3cU)))
                               ? 0x3cU : 0x3dU) << 0xeU) 
                            | ((((1U & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                >> 0x3aU)))
                                  ? 0x3aU : 0x3bU) 
                                << 8U) | ((((1U & (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                           >> 0x38U)))
                                             ? 0x38U
                                             : 0x39U) 
                                           << 2U) | 
                                          (((1U & (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp 
                                                           >> 0x36U)))
                                             ? 0x36U
                                             : 0x37U) 
                                           >> 4U))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_sequent__TOP__108(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_sequent__TOP__108\n"); );
    // Init
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one = 0;
    QData/*63:0*/ __Vtemp_h26bd28bd__0;
    // Body
    __Vtemp_h26bd28bd__0 = (((QData)((IData)((0ULL 
                                              != (0xc000000000000000ULL 
                                                  & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                             << 0x3eU) | (((QData)((IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x3000000000000000ULL 
                                                             & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                           << 0x3dU) 
                                          | (((QData)((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0xc00000000000000ULL 
                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0x300000000000000ULL 
                                                                   & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (0ULL 
                                                                     != 
                                                                     (0xc0000000000000ULL 
                                                                      & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (0ULL 
                                                                        != 
                                                                        (0x30000000000000ULL 
                                                                         & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (0ULL 
                                                                           != 
                                                                           (0xc000000000000ULL 
                                                                            & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (0ULL 
                                                                              != 
                                                                              (0x3000000000000ULL 
                                                                               & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x3000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc00ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x300ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xc0ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x30ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xcULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (3ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__in_tmp))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000000000000000ULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes) 
           | __Vtemp_h26bd28bd__0);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero 
        = (1U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__serdiv_opb 
                             >> 0x3fU))) & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one 
        = (IData)(((~ vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__i_lzc_b__DOT__gen_lzc__DOT__sel_nodes) 
                   & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__serdiv_opb 
                      >> 0x3fU)));
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__load_en) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero_d 
            = lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one_d 
            = lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__res_inv_d 
            = (((~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero)) 
                | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__serdiv_opcode) 
                   >> 1U)) & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__serdiv_opcode) 
                              & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT____VdfgTmp_h457f91ce__0) 
                                 ^ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero_d 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_zero_q;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one_d 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__op_b_neg_one_q;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__res_inv_d 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_div__DOT__i_serdiv__DOT__res_inv_q;
    }
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__0(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
            << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
                       << 1U) | (IData)((0U != (6U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__1(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__2(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__3(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xc0U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | ((((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                 ? 2U : 3U) << 4U) | ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                                         ? 0U : 1U) 
                                       << 2U) | (3U 
                                                 & ((2U 
                                                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                     ? 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                                     >> 4U))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__4(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((8U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
               << 2U) | (((IData)((0U != (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                          << 1U) | (IData)((0U != (6U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__5(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__0__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__6(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__7(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__7\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__1__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__8(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__8\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__9(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__9\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__2__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__10(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__10\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__11(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__11\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__3__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__12(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__12\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__13(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__13\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__4__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__14(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__14\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__15(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__15\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__5__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__16(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__16\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__17(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__17\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__6__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__18(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__18\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__19(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__19\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__payload_hp_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_vrf__DOT____Vcellinp__gen_banks__BRA__7__KET____DOT__data_sram__req_i) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__20(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__20\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__payload_lp_gnt)))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__21(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__21\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__out_ready_i 
        = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__out_ready_i 
        = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
            >> 1U) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__22(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__22\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h30002163__0;
    // Body
    __Vtemp_h30002163__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                     << 6U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                               >> 0x1aU))
                                 : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 0x13U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                  >> 0xdU)));
    __Vtemp_h30002163__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                       << 0x13U) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[2U] 
                                       >> 0xdU)) : 
                                  vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[0U]) 
                                 << 0xdU) | (0x1fffU 
                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                 ? 
                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                  << 6U) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                    >> 0x1aU))
                                                 : 
                                                ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                  << 0x13U) 
                                                 | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                    >> 0xdU)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 6U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                          >> 0x1aU)) : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0x13U) 
                                        | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xdU)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h30002163__0[1U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h30002163__0[2U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[3U] 
                  << 0x13U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[2U] 
                               >> 0xdU)) : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[0U]) 
            >> 0x13U) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[4U] 
                               << 0x13U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                            >> 0xdU))
                           : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[1U]) 
                         << 0xdU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[8U] 
                  << 0x19U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[7U] 
                               >> 7U)) : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                           << 6U) | 
                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                           >> 0x1aU))) 
            << 0x1aU) | ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                << 0x13U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                             >> 0xdU))
                            : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[1U]) 
                          >> 0x13U) | (0x3ffe000U & 
                                       (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                              << 0x13U) 
                                             | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                                >> 0xdU))
                                          : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[2U]) 
                                        << 0xdU))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[8U] 
                  << 0x19U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[7U] 
                               >> 7U)) : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                           << 6U) | 
                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                           >> 0x1aU))) 
            >> 6U) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[9U] 
                            << 0x19U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[8U] 
                                         >> 7U)) : 
                       ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[6U] 
                         << 6U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                   >> 0x1aU))) << 0x1aU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[9U] 
                  << 0x19U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[8U] 
                               >> 7U)) : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[6U] 
                                           << 6U) | 
                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                           >> 0x1aU))) 
            >> 6U) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                        ? (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[9U] 
                           >> 7U) : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[7U] 
                                      << 6U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[6U] 
                                                >> 0x1aU))) 
                      << 0x1aU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (0x7fU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                      ? (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[9U] 
                         >> 7U) : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[7U] 
                                    << 6U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__i_arbiter__data_i[6U] 
                                              >> 0x1aU))) 
                    >> 6U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__23(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__23\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__out_ready_i 
        = ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
           & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
              >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__out_ready_i 
        = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
            >> 2U) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__24(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__24\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_hd05e8031__0;
    // Body
    __Vtemp_hd05e8031__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_hd05e8031__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_hd05e8031__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_hd05e8031__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_hd05e8031__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_hd05e8031__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_hd05e8031__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_hd05e8031__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_hd05e8031__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_hd05e8031__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0U] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[1U] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__25(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__25\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h406d30ca__0;
    // Body
    __Vtemp_h406d30ca__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_h406d30ca__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_h406d30ca__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_h406d30ca__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_h406d30ca__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h406d30ca__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h406d30ca__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h406d30ca__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h406d30ca__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h406d30ca__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[2U] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[3U] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__1__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__26(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__26\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_hdc565984__0;
    // Body
    __Vtemp_hdc565984__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_hdc565984__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_hdc565984__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_hdc565984__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_hdc565984__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_hdc565984__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_hdc565984__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_hdc565984__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_hdc565984__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_hdc565984__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[4U] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[5U] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__2__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__27(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__27\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h46e8bca6__0;
    // Body
    __Vtemp_h46e8bca6__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_h46e8bca6__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_h46e8bca6__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_h46e8bca6__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_h46e8bca6__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h46e8bca6__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h46e8bca6__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h46e8bca6__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h46e8bca6__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h46e8bca6__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[6U] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[7U] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__3__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__28(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__28\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h894d9435__0;
    // Body
    __Vtemp_h894d9435__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_h894d9435__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_h894d9435__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_h894d9435__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_h894d9435__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h894d9435__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h894d9435__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h894d9435__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h894d9435__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h894d9435__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[8U] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[9U] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__4__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__29(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__29\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h774d1059__0;
    // Body
    __Vtemp_h774d1059__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_h774d1059__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_h774d1059__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_h774d1059__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_h774d1059__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h774d1059__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h774d1059__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h774d1059__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h774d1059__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h774d1059__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__7__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__30(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__30\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h77330bcf__0;
    // Body
    __Vtemp_h77330bcf__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_h77330bcf__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_h77330bcf__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_h77330bcf__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_h77330bcf__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h77330bcf__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h77330bcf__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h77330bcf__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h77330bcf__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h77330bcf__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0x10U] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0x11U] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__8__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__31(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__31\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_hb3b72361__0;
    // Body
    __Vtemp_hb3b72361__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_hb3b72361__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_hb3b72361__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_hb3b72361__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_hb3b72361__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_hb3b72361__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_hb3b72361__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_hb3b72361__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_hb3b72361__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_hb3b72361__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0xaU] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0xbU] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__5__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__32(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__32\n"); );
    // Init
    VlWide<14>/*447:0*/ __Vtemp_h446f203f__0;
    // Body
    __Vtemp_h446f203f__0[1U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))) 
                                        >> 0x20U));
    __Vtemp_h446f203f__0[2U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))));
    __Vtemp_h446f203f__0[3U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U])))) 
                                        >> 0x20U));
    __Vtemp_h446f203f__0[4U] = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                         ? (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                         : (((QData)((IData)(
                                                             vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))));
    __Vtemp_h446f203f__0[5U] = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                          ? (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU])))
                                          : (((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU])))) 
                                        >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h446f203f__0[1U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h446f203f__0[2U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h446f203f__0[3U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h446f203f__0[4U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h446f203f__0[5U];
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[2U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[6U])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xaU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[8U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (IData)(((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                    ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                    : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))));
    vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = (IData)((((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__sel)
                     ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xeU])))
                     : (((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT____Vcellinp__gen_outs__BRA__0__KET____DOT__i_rr_arb_tree__data_i[0xcU])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0xcU] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))));
    vlSelf->lane_e__DOT__i_vrf__DOT____Vcellout__i_vrf_mux__data_o[0xdU] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vrf__DOT__i_vrf_mux__DOT__gen_outs__BRA__6__KET____DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__33(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__33\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S 
        = ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
            ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xcU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xcU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xcU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xcU)))))))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xfU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xfU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xfU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xfU))))))))
            : ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                    [0U] << 3U) | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                    [1U] << 2U) | (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                    [2U] 
                                                    << 1U) 
                                                   | vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                   [3U])))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0x1cU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0x1cU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0x1cU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0x1cU)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__34(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__34\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S 
        = ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
            ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xcU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xcU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xcU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xcU)))))))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xfU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xfU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xfU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xfU))))))))
            : ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                    [0U] << 3U) | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                    [1U] << 2U) | (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                    [2U] 
                                                    << 1U) 
                                                   | vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                   [3U])))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0x1cU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0x1cU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0x1cU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0x1cU)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__35(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__35\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S 
        = ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
            ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xcU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xcU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xcU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xcU)))))))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xfU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xfU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xfU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xfU))))))))
            : ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                    [0U] << 3U) | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                    [1U] << 2U) | (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                    [2U] 
                                                    << 1U) 
                                                   | vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                   [3U])))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0x1cU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0x1cU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0x1cU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0x1cU)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__36(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__36\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_quotinent_S 
        = ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
            ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xcU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xcU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xcU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xcU)))))))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0xfU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0xfU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0xfU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0xfU))))))))
            : ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Format_sel_S))
                ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                    [0U] << 3U) | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                    [1U] << 2U) | (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                    [2U] 
                                                    << 1U) 
                                                   | vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_carry_D
                                                   [3U])))
                : ((8U & ((~ (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                      [0U] >> 0x1cU))) 
                          << 3U)) | ((4U & ((~ (IData)(
                                                       (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                        [1U] 
                                                        >> 0x1cU))) 
                                            << 2U)) 
                                     | ((2U & ((~ (IData)(
                                                          (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                           [2U] 
                                                           >> 0x1cU))) 
                                               << 1U)) 
                                        | (1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                            [3U] 
                                                            >> 0x1cU)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___act_comb__TOP__37(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___act_comb__TOP__37\n"); );
    // Body
    if ((1U == (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                      >> 3U)))) {
        vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process 
            = (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay 
            = (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U]);
        vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                         >> 0xfU)));
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                              | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                                  | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)
                                  : 0U))));
        vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                      | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                     | (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                    | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)));
        }
        if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[0U] 
            = vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process 
            = (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay 
            = (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result 
            = (0x3ffU & ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                          << 3U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                         >> 0xfU)));
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                              | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                                  | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)
                                  : 0U))));
        vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                      | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                     | (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                    | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)));
        }
        if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[1U] 
            = vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process 
            = (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay 
            = (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U]);
        vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                         >> 0xfU)));
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                              | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                                  | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)
                                  : 0U))));
        vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                      | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                     | (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                    | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)));
        }
        if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[2U] 
            = vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process 
            = (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay 
            = (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result 
            = (0x3ffU & ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                          << 3U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub = 0U;
        if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
            if ((0x200U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) {
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                    = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                       | (0x3feU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                    << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub 
                = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)) 
                   | (0x7c00U | (0x3fcU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                           << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                       & (~ 
                                                          ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                           >> 0xfU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__fp_rm_process)) 
                                                      & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay) 
                                                         >> 0xfU)));
        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i 
            = ((0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i)) 
               | (0x7fffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                              | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                              ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_sub)
                              : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                                  | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))
                                  ? (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)
                                  : 0U))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x8000U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                      | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                     | (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result))) 
                    | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0x83ffU & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | (0x7c00U & (((IData)(0x1eU) + 
                                  (~ ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                                      >> 0xaU))) << 0xaU)));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select 
                = (0x7fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_i) 
                            >> 3U));
            vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__303__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep 
                = ((0xfc07U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__303__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0U == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                    >> 0xaU))) ? ((0x1f8003U 
                                                   & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                                                  | (0x200U 
                                                     | (0x1fcU 
                                                        & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                           >> 1U))))
                    : ((0x1fU == (0x1fU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                           >> 0xaU)))
                        ? ((0x1f8001U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x100U | (0xfeU & ((IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep) 
                                                 >> 2U))))
                        : ((0x1f8007U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                           | (0x7ff8U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_n_excep)))));
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay)));
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out 
            = (IData)(((0U == (0x300U & (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__operand_a_delay))) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp16__302__vfpu_result)))));
        if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp16__302__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp16__302__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                            = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                               | (0x7bffU | (0x8000U 
                                             & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                        = ((0x1f0000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out) 
                           | (0x7c00U | (0x8000U & vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o)));
                }
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x10000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                    = (0x40000U | vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp16__302__vfrec7_out;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16[3U] 
            = vlSelf->__Vfunc_vfrec7_fp16__302__Vfuncout;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o 
            = (((QData)((IData)(((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                  [3U] << 0x10U) | 
                                 (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                  [2U])))) << 0x20U) 
               | (QData)((IData)(((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                   [1U] << 0x10U) | 
                                  (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                                   [0U])))));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag 
            = (0x1fU & (((((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                            [3U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                            >> 3U))))) 
                          | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                              [2U] >> 0x10U) & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                              >> 2U)))))) 
                         | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                             [1U] >> 0x10U) & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                             >> 1U)))))) 
                        | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e16
                            [0U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count 
            = (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay 
            = (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U]);
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | ((9U >= (0x3fU & ((IData)(1U) 
                                       - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))))
                       ? (0x3ffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                                    << (0x3fU & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i)))))
                       : 0U));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
               | (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
              | (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
             | (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
                    | (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16) 
                       >> 4U));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay 
            = (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result 
            = (0x3ffU & ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                          << 3U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | ((9U >= (0x3fU & ((IData)(1U) 
                                       - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))))
                       ? (0x3ffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                                    << (0x3fU & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i)))))
                       : 0U));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
               | (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
              | (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
             | (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
                    | (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16) 
                       >> 8U));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay 
            = (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U]);
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | ((9U >= (0x3fU & ((IData)(1U) 
                                       - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))))
                       ? (0x3ffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                                    << (0x3fU & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i)))))
                       : 0U));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
               | (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
              | (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
             | (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
                    | (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[2U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e16) 
                       >> 0xcU));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay 
            = (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U] 
               >> 0x10U);
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result 
            = (0x3ffU & ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                          << 3U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                    >> 0x1dU)));
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x3fU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | ((9U >= (0x3fU & ((IData)(1U) 
                                       - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))))
                       ? (0x3ffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                                    << (0x3fU & ((IData)(1U) 
                                                 - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i)))))
                       : 0U));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i 
                = (0x1fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay) 
                            >> 0xaU));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = ((0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)) 
                   | (0x3ffU & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__operand_a_delay)));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i 
                = (0xfc00U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i));
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
               | (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
              | (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) 
             | (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x100000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7e00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0xfc00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x7c00U | (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x80000U | vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = (0x1f0000U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)) 
                    | (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o 
                = (0x3fU & ((IData)(0x2dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f83ffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x7c00U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_o) 
                                 << 9U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i) 
                                                 >> 4U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__309__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1ffc07U & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__309__Vfuncout) 
                      << 3U));
            vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o 
                = ((0x1f7fffU & vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o) 
                   | (0x8000U & (IData)(vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_i)));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__vfrsqrt7_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16[3U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp16__308__Vfuncout;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o 
            = (((QData)((IData)(((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                  [3U] << 0x10U) | 
                                 (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                  [2U])))) << 0x20U) 
               | (QData)((IData)(((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                   [1U] << 0x10U) | 
                                  (0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                                   [0U])))));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag 
            = (0x1fU & (((((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                            [3U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                            >> 3U))))) 
                          | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                              [2U] >> 0x10U) & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                              >> 2U)))))) 
                         | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                             [1U] >> 0x10U) & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                                             >> 1U)))))) 
                        | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e16
                            [0U] >> 0x10U) & (- (IData)(
                                                        (1U 
                                                         & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
    } else if ((2U == (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                             >> 3U)))) {
        vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process 
            = (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U];
        vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__304__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process)) 
                                                       & (~ 
                                                          (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                                           >> 0x1fU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process)) 
                                                      & (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                                         >> 0x1fU)));
        if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay)) {
            if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay)) {
                vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub 
                    = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub) 
                       | (0x7ffffeU & (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                       << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub 
                = (0x7f800000U | ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub) 
                                  | (0x7ffffcU & (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                                  << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i 
            = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i) 
               | (0x7fffffffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                                  | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))
                                  ? vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub
                                  : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                                      | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))
                                      ? vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay
                                      : 0U))));
        vlSelf->__Vfunc_vfrec7_fp32__304__select_vfrec7_out 
            = (IData)(((0U == (0x600000U & vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay)) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x80000000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                      | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) 
                     | (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) 
                    | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                = ((0x807fffffU & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep) 
                   | (0x7f800000U & (((IData)(0xfeU) 
                                      + (~ (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i 
                                            >> 0x17U))) 
                                     << 0x17U)));
            vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select 
                = (0x7fU & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i 
                            >> 0x10U));
            vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__305__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                = ((0xff80ffffU & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__305__Vfuncout) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = ((0U == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                    >> 0x17U))) ? (
                                                   (0x1f80007fffULL 
                                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                                                   | ((QData)((IData)(
                                                                      (0x80U 
                                                                       | (0x7fU 
                                                                          & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                                                             >> 0x10U))))) 
                                                      << 0xfU))
                    : ((0xffU == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                           >> 0x17U)))
                        ? ((0x1f80003fffULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                           | ((QData)((IData)((0x80U 
                                               | (0x7fU 
                                                  & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                                     >> 0x10U))))) 
                              << 0xeU)) : ((0x1f80007fffULL 
                                            & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                                           | ((QData)((IData)(
                                                              (0xffffU 
                                                               & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                                                  >> 0xfU)))) 
                                              << 0xfU))));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        if (vlSelf->__Vfunc_vfrec7_fp32__304__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp32__304__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp32__304__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp32__304__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                            = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out) 
                               | (IData)((IData)((0x7f7fffffU 
                                                  | ((IData)(
                                                             (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                                                              >> 0x1fU)) 
                                                     << 0x1fU)))));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                        = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out) 
                           | (IData)((IData)((0x7f800000U 
                                              | ((IData)(
                                                         (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                                                          >> 0x1fU)) 
                                                 << 0x1fU)))));
                }
                vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                    = (0x100000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                    = (0x400000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp32__304__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32[0U] 
            = vlSelf->__Vfunc_vfrec7_fp32__304__Vfuncout;
        vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process 
            = (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U];
        vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep = 0U;
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub = 0U;
        if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay)) {
            if ((0x400000U & vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay)) {
                vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub 
                    = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub) 
                       | (0x7ffffeU & (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                       << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub 
                = (0x7f800000U | ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub) 
                                  | (0x7ffffcU & (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                                  << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp32__304__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process)) 
                                                       & (~ 
                                                          (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                                           >> 0x1fU)))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__fp_rm_process)) 
                                                      & (vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                                         >> 0x1fU)));
        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i 
            = ((0x80000000U & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i) 
               | (0x7fffffffU & (((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                                  | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))
                                  ? vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_sub
                                  : (((0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                                      | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))
                                      ? vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay
                                      : 0U))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x80000000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                      | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) 
                     | (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result))) 
                    | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                = ((0x807fffffU & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep) 
                   | (0x7f800000U & (((IData)(0xfeU) 
                                      + (~ (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i 
                                            >> 0x17U))) 
                                     << 0x17U)));
            vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select 
                = (0x7fU & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_i 
                            >> 0x10U));
            vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__305__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__305__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                = ((0xff80ffffU & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep) 
                   | ((IData)(vlSelf->__Vfunc_vfrec7_lut__305__Vfuncout) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = ((0U == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                    >> 0x17U))) ? (
                                                   (0x1f80007fffULL 
                                                    & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                                                   | ((QData)((IData)(
                                                                      (0x80U 
                                                                       | (0x7fU 
                                                                          & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                                                             >> 0x10U))))) 
                                                      << 0xfU))
                    : ((0xffU == (0xffU & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                           >> 0x17U)))
                        ? ((0x1f80003fffULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                           | ((QData)((IData)((0x80U 
                                               | (0x7fU 
                                                  & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                                     >> 0x10U))))) 
                              << 0xeU)) : ((0x1f80007fffULL 
                                            & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                                           | ((QData)((IData)(
                                                              (0xffffU 
                                                               & (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_n_excep 
                                                                  >> 0xfU)))) 
                                              << 0xfU))));
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        vlSelf->__Vfunc_vfrec7_fp32__304__select_vfrec7_out 
            = (IData)(((0U == (0x600000U & vlSelf->__Vfunc_vfrec7_fp32__304__operand_a_delay)) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp32__304__vfpu_result)))));
        if (vlSelf->__Vfunc_vfrec7_fp32__304__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp32__304__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp32__304__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp32__304__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                            = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out) 
                               | (IData)((IData)((0x7f7fffffU 
                                                  | ((IData)(
                                                             (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                                                              >> 0x1fU)) 
                                                     << 0x1fU)))));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                        = ((0x1f00000000ULL & vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out) 
                           | (IData)((IData)((0x7f800000U 
                                              | ((IData)(
                                                         (vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o 
                                                          >> 0x1fU)) 
                                                 << 0x1fU)))));
                }
                vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                    = (0x100000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out);
                vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                    = (0x400000000ULL | vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out 
                = vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_o;
        }
        vlSelf->__Vfunc_vfrec7_fp32__304__Vfuncout 
            = vlSelf->__Vfunc_vfrec7_fp32__304__vfrec7_out;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32[1U] 
            = vlSelf->__Vfunc_vfrec7_fp32__304__Vfuncout;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                [1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                                                   [0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag 
            = (0x1fU & (((IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                  [1U] >> 0x20U)) & 
                         (- (IData)((1U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                           >> 2U))))) 
                        | ((IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e32
                                    [0U] >> 0x20U)) 
                           & (- (IData)((1U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__leading_zeros_count 
            = (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e32));
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U];
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o = 0ULL;
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i 
                = (0x1ffU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i) 
                   | ((0x16U >= (0x1ffU & ((IData)(1U) 
                                           - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i))))
                       ? (0x7fffffU & (vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay 
                                       << (0x1ffU & 
                                           ((IData)(1U) 
                                            - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i)))))
                       : 0U));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i 
                = (0xffU & (vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay 
                            >> 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i) 
                   | (0x7fffffU & vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                = (0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i);
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)) 
               | (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) 
              | (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) 
             | (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)) 
                    | (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_o 
                = (0x1ffU & ((IData)(0x17dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = ((0x1f807fffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o) 
                   | ((QData)((IData)((0xffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_o) 
                                                >> 1U)))) 
                      << 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & (vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                                                 >> 0x11U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__311__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = ((0x1fff80ffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o) 
                   | ((QData)((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__Vfuncout)) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__310__Vfuncout;
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__leading_zeros_count 
            = (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__lzc_e32) 
                        >> 5U));
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U];
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o = 0ULL;
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i 
                = (0x1ffU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i) 
                   | ((0x16U >= (0x1ffU & ((IData)(1U) 
                                           - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i))))
                       ? (0x7fffffU & (vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay 
                                       << (0x1ffU & 
                                           ((IData)(1U) 
                                            - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i)))))
                       : 0U));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i 
                = (0xffU & (vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay 
                            >> 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                = ((0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i) 
                   | (0x7fffffU & vlSelf->__Vfunc_vfrsqrt7_fp32__310__operand_a_delay));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                = (0xff800000U & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i);
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)) 
               | (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) 
              | (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) 
             | (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x1000000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x7fc00000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0xff800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x7f800000ULL | (0x1f00000000ULL 
                                    & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x800000000ULL | vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = (0x1f00000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o);
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)) 
                    | (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_o 
                = (0x1ffU & ((IData)(0x17dU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = ((0x1f807fffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o) 
                   | ((QData)((IData)((0xffU & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_o) 
                                                >> 1U)))) 
                      << 0x17U));
            vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & (vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                                                 >> 0x11U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__311__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__311__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = ((0x1fff80ffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o) 
                   | ((QData)((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__311__Vfuncout)) 
                      << 0x10U));
            vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o 
                = ((0x1f7fffffffULL & vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o) 
                   | ((QData)((IData)((vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_i 
                                       >> 0x1fU))) 
                      << 0x1fU));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp32__310__Vfuncout 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__310__vfrsqrt7_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp32__310__Vfuncout;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                [1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                                                   [0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag 
            = (0x1fU & (((IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                  [1U] >> 0x20U)) & 
                         (- (IData)((1U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U] 
                                           >> 2U))))) 
                        | ((IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e32
                                    [0U] >> 0x20U)) 
                           & (- (IData)((1U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U]))))));
    } else if ((3U == (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                             >> 3U)))) {
        vlSelf->__Vfunc_vfrec7_fp64__306__fp_rm_process 
            = (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[1U] 
                     >> 6U));
        vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U])));
        vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[0U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[1U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[2U] = 0U;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_i = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_sub = 0ULL;
        vlSelf->__Vfunc_vfrec7_fp64__306__en_rm = (
                                                   ((1U 
                                                     == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__fp_rm_process)) 
                                                    | ((2U 
                                                        == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__fp_rm_process)) 
                                                       & (~ (IData)(
                                                                    (vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
                                                                     >> 0x3fU))))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__fp_rm_process)) 
                                                      & (IData)(
                                                                (vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
                                                                 >> 0x3fU))));
        if ((1U & (IData)((vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
                           >> 0x33U)))) {
            if ((1U & (IData)((vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
                               >> 0x33U)))) {
                vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_sub 
                    = ((0x8000000000000000ULL & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_sub) 
                       | (0xffffffffffffeULL & (vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
                                                << 1U)));
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_sub 
                = (0x7ff0000000000000ULL | ((0x8000000000000000ULL 
                                             & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_sub) 
                                            | (0xffffffffffffcULL 
                                               & (vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
                                                  << 2U))));
        }
        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_i 
            = ((0x8000000000000000ULL & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_i) 
               | (0x7fffffffffffffffULL & (((0x20U 
                                             == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)) 
                                            | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)))
                                            ? vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_sub
                                            : (((0x40U 
                                                 == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)) 
                                                | (2U 
                                                   == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)))
                                                ? vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay
                                                : 0ULL))));
        if ((1U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] = 0x80000000U;
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] = 0U;
        } else if ((0x100U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] = 0x7ff80000U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U] 
                = (0x10U | vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U]);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] = 0x7ff80000U;
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] = 0xfff00000U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U]);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] = 0x7ff00000U;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U]);
        } else if (((((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)) 
                      | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) 
                     | (0x40U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result))) 
                    | (2U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)))) {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep 
                = ((0x800fffffffffffffULL & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep) 
                   | ((QData)((IData)((0x7ffU & ((IData)(0x7feU) 
                                                 + 
                                                 (~ (IData)(
                                                            (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_i 
                                                             >> 0x34U))))))) 
                      << 0x34U));
            vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select 
                = (0x7fU & (IData)((vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_i 
                                    >> 0x2dU)));
            vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 4U : 5U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 5U : 6U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? 7U : 8U)))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? 9U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                                 ? 0xaU
                                                 : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0xbU : 0xcU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0xcU : 0xdU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? 0xeU : 0xfU)
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x10U
                                            : 0x11U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x11U
                                            : 0x12U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? 0x13U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                                    ? 0x14U
                                                    : 0x15U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x15U
                                            : 0x16U)
                                        : 0x17U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                         ? 0x18U : 0x19U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                         ? 0x19U : 0x1aU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                         ? 0x1cU : 0x1dU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x1eU
                                            : 0x1fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x1fU
                                            : 0x20U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x21U
                                            : 0x22U)
                                        : 0x23U)) : 
                               ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                         ? 0x24U : 0x25U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                         ? 0x26U : 0x27U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                     ? 0x28U : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                                 ? 0x29U
                                                 : 0x2aU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x2bU
                                            : 0x2cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x2dU
                                            : 0x2eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x2fU
                                            : 0x30U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x31U
                                            : 0x32U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x33U
                                            : 0x34U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x35U
                                            : 0x36U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x37U
                                            : 0x38U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x39U
                                            : 0x3aU))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x3fU
                                            : 0x40U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x41U
                                            : 0x42U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x44U
                                            : 0x45U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x46U
                                            : 0x47U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x48U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x4dU
                                            : 0x4fU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x50U
                                            : 0x51U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x53U
                                            : 0x54U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x55U
                                            : 0x57U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x5bU
                                            : 0x5dU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x5eU
                                            : 0x60U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x61U
                                            : 0x63U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x64U
                                            : 0x66U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x68U
                                            : 0x69U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x6bU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x6eU
                                            : 0x70U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x75U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU)))))));
            vlSelf->__Vfunc_vfrec7_lut__307__Vfuncout 
                = vlSelf->__Vfunc_vfrec7_lut__307__vfrec7_lut_out;
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep 
                = ((0xfff01fffffffffffULL & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep) 
                   | ((QData)((IData)(vlSelf->__Vfunc_vfrec7_lut__307__Vfuncout)) 
                      << 0x2dU));
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] 
                = ((0U == (0x7ffU & (IData)((vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep 
                                             >> 0x34U))))
                    ? ((0x80000fffU & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U]) 
                       | (0xfffff000U & (0x80000U | 
                                         (0x7f000U 
                                          & ((IData)(
                                                     (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep 
                                                      >> 0x2dU)) 
                                             << 0xcU)))))
                    : ((0x7ffU == (0x7ffU & (IData)(
                                                    (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep 
                                                     >> 0x34U))))
                        ? ((0x800007ffU & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U]) 
                           | (0xfffff800U & (0x40000U 
                                             | (0x3f800U 
                                                & ((IData)(
                                                           (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep 
                                                            >> 0x2dU)) 
                                                   << 0xbU)))))
                        : ((0x80001fffU & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U]) 
                           | (0x7fffe000U & ((IData)(
                                                     (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_n_excep 
                                                      >> 0x2dU)) 
                                             << 0xdU)))));
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] 
                = ((0x7fffffffU & vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U]) 
                   | ((IData)((vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay 
                               >> 0x3fU)) << 0x1fU));
        }
        vlSelf->__Vfunc_vfrec7_fp64__306__select_vfrec7_out 
            = (IData)(((0ULL == (0xc000000000000ULL 
                                 & vlSelf->__Vfunc_vfrec7_fp64__306__operand_a_delay)) 
                       & ((0x20U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)) 
                          | (4U == (IData)(vlSelf->__Vfunc_vfrec7_fp64__306__vfpu_result)))));
        if (vlSelf->__Vfunc_vfrec7_fp64__306__select_vfrec7_out) {
            if (vlSelf->__Vfunc_vfrec7_fp64__306__select_vfrec7_out) {
                if (vlSelf->__Vfunc_vfrec7_fp64__306__en_rm) {
                    if (vlSelf->__Vfunc_vfrec7_fp64__306__en_rm) {
                        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[0U] 
                            = (IData)((0x7fefffffffffffffULL 
                                       | ((QData)((IData)(
                                                          (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] 
                                                           >> 0x1fU))) 
                                          << 0x3fU)));
                        vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[1U] 
                            = (IData)(((0x7fefffffffffffffULL 
                                        | ((QData)((IData)(
                                                           (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] 
                                                            >> 0x1fU))) 
                                           << 0x3fU)) 
                                       >> 0x20U));
                    }
                } else {
                    vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[0U] 
                        = (IData)((0x7ff0000000000000ULL 
                                   | ((QData)((IData)(
                                                      (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] 
                                                       >> 0x1fU))) 
                                      << 0x3fU)));
                    vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[1U] 
                        = (IData)(((0x7ff0000000000000ULL 
                                    | ((QData)((IData)(
                                                       (vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U] 
                                                        >> 0x1fU))) 
                                       << 0x3fU)) >> 0x20U));
                }
                vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[2U] 
                    = (1U | vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[2U]);
                vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[2U] 
                    = (4U | vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[2U]);
            }
        } else {
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[0U] 
                = vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[0U];
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[1U] 
                = vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[1U];
            vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[2U] 
                = vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_o[2U];
        }
        vlSelf->__Vfunc_vfrec7_fp64__306__Vfuncout[0U] 
            = vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[0U];
        vlSelf->__Vfunc_vfrec7_fp64__306__Vfuncout[1U] 
            = vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[1U];
        vlSelf->__Vfunc_vfrec7_fp64__306__Vfuncout[2U] 
            = vlSelf->__Vfunc_vfrec7_fp64__306__vfrec7_out[2U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hbdc13987__0[0U] 
            = vlSelf->__Vfunc_vfrec7_fp64__306__Vfuncout[0U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hbdc13987__0[1U] 
            = vlSelf->__Vfunc_vfrec7_fp64__306__Vfuncout[1U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hbdc13987__0[2U] 
            = vlSelf->__Vfunc_vfrec7_fp64__306__Vfuncout[2U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64[0U][0U] 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hbdc13987__0[0U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64[0U][1U] 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hbdc13987__0[1U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64[0U][2U] 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hbdc13987__0[2U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64
                                [0U][1U])) << 0x20U) 
               | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64
                                 [0U][0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag 
            = (0x1fU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_out_e64
                        [0U][2U] & (- (IData)((1U & 
                                               vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U])))));
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__leading_zeros_count 
            = (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__genblk2__DOT__leading_zero_e64__DOT__gen_lzc__DOT__index_nodes[0U]);
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__operand_a_delay 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__operand_a_d[2U])));
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result 
            = (0x3ffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                         >> 0xdU));
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[0U] = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U] = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i = 0ULL;
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_o = 0U;
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i = 0U;
        if ((1U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result) 
                          >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i 
                = (0xfffU & (- (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__leading_zeros_count)));
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i 
                = ((0xfff0000000000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i) 
                   | ((0x33U >= (0xfffU & ((IData)(1U) 
                                           - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i))))
                       ? (0xfffffffffffffULL & (vlSelf->__Vfunc_vfrsqrt7_fp64__312__operand_a_delay 
                                                << 
                                                (0xfffU 
                                                 & ((IData)(1U) 
                                                    - (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i)))))
                       : 0ULL));
        } else if ((2U == (3U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result) 
                                 >> 5U)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i 
                = (0x7ffU & (IData)((vlSelf->__Vfunc_vfrsqrt7_fp64__312__operand_a_delay 
                                     >> 0x34U)));
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i 
                = ((0xfff0000000000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i) 
                   | (0xfffffffffffffULL & vlSelf->__Vfunc_vfrsqrt7_fp64__312__operand_a_delay));
        } else {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i 
                = (0xfff0000000000000ULL & vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i);
        }
        if (((((1U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result)) 
               | (2U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result))) 
              | (4U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result))) 
             | (0x100U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] = 0x7ff80000U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U] 
                = (0x10U | vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U]);
        } else if ((0x200U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] = 0x7ff80000U;
        } else if ((8U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] = 0xfff00000U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U]);
        } else if ((0x10U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] = 0x7ff00000U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U] 
                = (8U | vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U]);
        } else if ((0x80U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[0U] = 0U;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] = 0U;
        } else if (((0x20U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result)) 
                    | (0x40U == (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfpu_result)))) {
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_o 
                = (0xfffU & ((IData)(0xbfdU) + (~ (IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i))));
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] 
                = ((0x800fffffU & vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U]) 
                   | (0x7ff00000U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_o) 
                                     << 0x13U)));
            vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select 
                = ((0x40U & ((IData)(vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_exp_i) 
                             << 6U)) | (0x3fU & (IData)(
                                                        (vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i 
                                                         >> 0x2eU))));
            vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_out 
                = ((0x40U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                    ? ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x35U
                                            : 0x36U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x37U
                                            : 0x38U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x38U
                                            : 0x39U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x3aU
                                            : 0x3bU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x3bU
                                            : 0x3cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x3dU
                                            : 0x3eU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? 0x3fU : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                                    ? 0x40U
                                                    : 0x41U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x42U
                                            : 0x43U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x44U
                                            : 0x45U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? 0x46U : (
                                                   (1U 
                                                    & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                                    ? 0x47U
                                                    : 0x48U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x49U
                                            : 0x4aU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x4bU
                                            : 0x4cU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x4dU
                                            : 0x4eU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x4fU
                                            : 0x50U)))))
                        : ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x52U
                                            : 0x53U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x54U
                                            : 0x55U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x56U
                                            : 0x57U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x58U
                                            : 0x5aU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x5bU
                                            : 0x5cU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x5dU
                                            : 0x5fU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x60U
                                            : 0x61U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x63U
                                            : 0x64U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x66U
                                            : 0x67U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x69U
                                            : 0x6aU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x6cU
                                            : 0x6dU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x6fU
                                            : 0x71U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x72U
                                            : 0x74U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x76U
                                            : 0x77U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x79U
                                            : 0x7bU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0x7dU
                                            : 0x7fU))))))
                    : ((0x20U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                        ? ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                            ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0U : 1U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 1U : 2U))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 3U : 4U)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 4U : 5U)
                                        : 6U) : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                                  ? 7U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                                   ? 8U
                                                   : 9U))))
                            : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 9U : 0xaU)
                                        : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0xaU : 0xbU))
                                    : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? 0xcU : ((1U 
                                                   & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                                   ? 0xdU
                                                   : 0xeU)))
                                : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                    ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                        ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                            ? 0xeU : 0xfU)
                                        : 0x10U) : 
                                   ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x11U : 0x12U)
                                     : 0x13U)))) : 
                       ((0x10U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                         ? ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x14U : 0x15U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x16U : 0x17U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x17U : 0x18U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x19U : 0x1aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x1bU : 0x1cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x1dU : 0x1eU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x1eU : 0x1fU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x20U : 0x21U))))
                         : ((8U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                             ? ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x22U : 0x23U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x24U : 0x26U))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x27U : 0x28U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x29U : 0x2aU)))
                             : ((4U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                 ? ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x2bU : 0x2cU)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x2eU : 0x2fU))
                                 : ((2U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                     ? ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x30U : 0x32U)
                                     : ((1U & (IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_select))
                                         ? 0x33U : 0x34U)))))));
            vlSelf->__Vfunc_vfrsqrt7_lut__313__Vfuncout 
                = vlSelf->__Vfunc_vfrsqrt7_lut__313__vfrsqrt7_lut_out;
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] 
                = ((0xfff01fffU & vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U]) 
                   | ((IData)(vlSelf->__Vfunc_vfrsqrt7_lut__313__Vfuncout) 
                      << 0xdU));
            vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U] 
                = ((0x7fffffffU & vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U]) 
                   | ((IData)((vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_i 
                               >> 0x3fU)) << 0x1fU));
        }
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__Vfuncout[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[0U];
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__Vfuncout[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[1U];
        vlSelf->__Vfunc_vfrsqrt7_fp64__312__Vfuncout[2U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__312__vfrsqrt7_o[2U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hc738f729__0[0U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__312__Vfuncout[0U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hc738f729__0[1U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__312__Vfuncout[1U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hc738f729__0[2U] 
            = vlSelf->__Vfunc_vfrsqrt7_fp64__312__Vfuncout[2U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64[0U][0U] 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hc738f729__0[0U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64[0U][1U] 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hc738f729__0[1U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64[0U][2U] 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____Vlvbound_hc738f729__0[2U];
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64
                                [0U][1U])) << 0x20U) 
               | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64
                                 [0U][0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag 
            = (0x1fU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_out_e64
                        [0U][2U] & (- (IData)((1U & 
                                               vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfpu_flag_mask_d[2U])))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o = 0ULL;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag = 0U;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o = 0ULL;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag = 0U;
    }
    if ((0x48U == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                   >> 0x18U))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_result_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_ex_flag 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrec7_ex_flag;
    } else if ((0x49U == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                          >> 0x18U))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_result_o;
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_ex_flag 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__vfrsqrt7_ex_flag;
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U])) 
                << 0x33U) | (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                              << 0x13U) | ((QData)((IData)(
                                                           vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U])) 
                                           >> 0xdU)));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_ex_flag 
            = (0x1fU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                        >> 8U));
    }
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT____VdfgExtracted_h1a8ffabf__0) {
        if ((1U == (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                          >> 3U)))) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffffffeULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | (IData)((IData)((1U & ((0x5fU 
                                             == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                 >> 0x18U))
                                             ? (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))
                                             : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))))));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffeffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & ((0x5fU 
                                              == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                  >> 0x18U))
                                              ? (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                            >> 0x10U)))
                                              : (IData)(
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                         >> 0x10U)))))) 
                      << 0x10U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffeffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & ((0x5fU 
                                              == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                  >> 0x18U))
                                              ? (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                            >> 0x20U)))
                                              : (IData)(
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                         >> 0x20U)))))) 
                      << 0x20U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffeffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & ((0x5fU 
                                              == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                  >> 0x18U))
                                              ? (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                            >> 0x30U)))
                                              : (IData)(
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                         >> 0x30U)))))) 
                      << 0x30U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffffffdULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                      << 1U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffdffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 2U)))) 
                      << 0x11U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffdffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 4U)))) 
                      << 0x21U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffdffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 6U)))) 
                      << 0x31U));
        } else if ((2U == (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                 >> 3U)))) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffffffeULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | (IData)((IData)((1U & ((0x5fU 
                                             == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                 >> 0x18U))
                                             ? (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))
                                             : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))))));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffeffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & ((0x5fU 
                                              == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                  >> 0x18U))
                                              ? (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                            >> 0x20U)))
                                              : (IData)(
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                                                         >> 0x20U)))))) 
                      << 0x20U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffffffdULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                      << 1U));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffdffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                             >> 4U)))) 
                      << 0x21U));
        } else if ((3U == (7U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                 >> 3U)))) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffffffeULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | (IData)((IData)((1U & ((0x5fU 
                                             == (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[3U] 
                                                 >> 0x18U))
                                             ? (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))
                                             : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result))))));
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result 
                = ((0xfffffffffffffffdULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_processed_result) 
                   | ((QData)((IData)((1U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                      << 1U));
        }
    }
}
