// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__319(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__319\n"); );
    // Init
    QData/*63:0*/ __Vtemp_h6202a0ba__0;
    // Body
    __Vtemp_h6202a0ba__0 = (((QData)((IData)((0xfU 
                                              & (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                         >> 0x20U))))) 
                             << 0x2cU) | (((QData)((IData)(
                                                           (0xfU 
                                                            & ((0x800U 
                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                ? (IData)(
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                           >> 0x1cU)))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xfU 
                                                               & ((0x200U 
                                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                   ? (IData)(
                                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                              >> 0x10U))
                                                                   : (IData)(
                                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                              >> 0x14U)))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((0x80U 
                                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                      ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 8U))
                                                                      : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 0xcU)))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((0x20U 
                                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu)
                                                                      : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 4U))) 
                                                                    << 0x1cU) 
                                                                   | ((0xf000000U 
                                                                       & (((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                            ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x34U))
                                                                            : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x38U))) 
                                                                          << 0x18U)) 
                                                                      | ((0xf00000U 
                                                                          & (((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                               ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x2cU))
                                                                               : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x30U))) 
                                                                             << 0x14U)) 
                                                                         | ((0xf0000U 
                                                                             & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                            | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                               | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 8U)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__61__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
        = __Vtemp_h6202a0ba__0;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__320(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__320\n"); );
    // Init
    QData/*63:0*/ __Vtemp_hfbbe677e__0;
    // Body
    __Vtemp_hfbbe677e__0 = (((QData)((IData)((0xfU 
                                              & (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                         >> 0x20U))))) 
                             << 0x2cU) | (((QData)((IData)(
                                                           (0xfU 
                                                            & ((0x100000U 
                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                ? (IData)(
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                           >> 0x1cU)))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xfU 
                                                               & ((0x40000U 
                                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                   ? (IData)(
                                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                              >> 0x10U))
                                                                   : (IData)(
                                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                              >> 0x14U)))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((0x10000U 
                                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                      ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 8U))
                                                                      : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 0xcU)))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((0x4000U 
                                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu)
                                                                      : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 4U))) 
                                                                    << 0x1cU) 
                                                                   | ((0xf000000U 
                                                                       & (((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                            ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x34U))
                                                                            : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x38U))) 
                                                                          << 0x18U)) 
                                                                      | ((0xf00000U 
                                                                          & (((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                               ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x2cU))
                                                                               : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x30U))) 
                                                                             << 0x14U)) 
                                                                         | ((0xf0000U 
                                                                             & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                            | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                               | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 8U)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__62__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
        = __Vtemp_hfbbe677e__0;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__321(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__321\n"); );
    // Init
    QData/*63:0*/ __Vtemp_h0a851d75__0;
    // Body
    __Vtemp_h0a851d75__0 = (((QData)((IData)((0xfU 
                                              & (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                         >> 0x20U))))) 
                             << 0x2cU) | (((QData)((IData)(
                                                           (0xfU 
                                                            & ((0x20000000U 
                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                ? (IData)(
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                           >> 0x18U))
                                                                : (IData)(
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                           >> 0x1cU)))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xfU 
                                                               & ((0x8000000U 
                                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                   ? (IData)(
                                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                              >> 0x10U))
                                                                   : (IData)(
                                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                              >> 0x14U)))))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 (0xfU 
                                                                  & ((0x2000000U 
                                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                      ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 8U))
                                                                      : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 0xcU)))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((((0x800000U 
                                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__fpr_clobber_vld[0x11U])
                                                                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu)
                                                                      : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__clobber_fu 
                                                                                >> 4U))) 
                                                                    << 0x1cU) 
                                                                   | ((0xf000000U 
                                                                       & (((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                            ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x34U))
                                                                            : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x38U))) 
                                                                          << 0x18U)) 
                                                                      | ((0xf00000U 
                                                                          & (((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                               ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x2cU))
                                                                               : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x30U))) 
                                                                             << 0x14U)) 
                                                                         | ((0xf0000U 
                                                                             & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                            | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                               | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
                                                                                >> 8U)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__gen_sel_clobbers__BRA__63__KET____DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes 
        = __Vtemp_h0a851d75__0;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__322(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__322\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9612fa4b__0;
    VlWide<4>/*127:0*/ __Vtemp_h09adb22f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__1;
    VlWide<4>/*127:0*/ __Vtemp_hb9ce39e7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__2;
    VlWide<6>/*191:0*/ __Vtemp_h7bef2915__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56bd579__3;
    VlWide<8>/*255:0*/ __Vtemp_h38980670__0;
    // Body
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cmp_en_q) {
        __Vtemp_h9612fa4b__0[1U] = (IData)((((QData)((IData)(
                                                             (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                    << 3U)))
                                                                ? 0U
                                                                : 
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                   << 3U)) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U))))) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                 (0x7ffffffU 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     >> 2U))] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                    << 3U)) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      << 3U))))) 
                                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                  (0x7ffffffU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      >> 2U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      << 3U))))))));
        __Vtemp_h9612fa4b__0[2U] = (IData)(((((QData)((IData)(
                                                              (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)))
                                                                 ? 0U
                                                                 : 
                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                    << 3U)) 
                                                                  >> 5U)] 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      << 3U))))) 
                                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                  (0x7ffffffU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      >> 2U))] 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      << 3U)))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      << 3U)))
                                                                  ? 0U
                                                                  : 
                                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)) 
                                                                   >> 5U)] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       << 3U))))) 
                                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__data_sram__DOT__rdata_aligned[
                                                                   (0x7ffffffU 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       >> 2U))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       << 3U))))))) 
                                            >> 0x20U));
        __Vtemp_h09adb22f__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                << 3U)))
                                      ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__rdata_aligned[
                                              (((IData)(0x1fU) 
                                                + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   << 3U)) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__data_sram__DOT__rdata_aligned[
                                       (0x7ffffffU 
                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                           >> 2U))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                            << 3U))));
        __Vtemp_h09adb22f__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                << 3U)))
                                      ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__rdata_aligned[
                                              (((IData)(0x1fU) 
                                                + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   << 3U)) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__data_sram__DOT__rdata_aligned[
                                       (0x7ffffffU 
                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                           >> 2U))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                            << 3U))));
        __Vtemp_h09adb22f__0[2U] = __Vtemp_h9612fa4b__0[1U];
        __Vtemp_h09adb22f__0[3U] = __Vtemp_h9612fa4b__0[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U] 
            = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U]) 
               | (__Vtemp_h09adb22f__0[(3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes))] 
                  << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[9U] 
            = ((6U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[9U]) 
               | (7U & (__Vtemp_h09adb22f__0[(3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes))] 
                        >> 0x1fU)));
        __Vtemp_hd56bd579__0[0U] = 0U;
        __Vtemp_hd56bd579__0[1U] = 0U;
        __Vtemp_hd56bd579__0[2U] = 0U;
        __Vtemp_hd56bd579__0[3U] = 0U;
        __Vtemp_hd56bd579__1[0U] = 0U;
        __Vtemp_hd56bd579__1[1U] = 0U;
        __Vtemp_hd56bd579__1[2U] = 0U;
        __Vtemp_hd56bd579__1[3U] = 0U;
        __Vtemp_hb9ce39e7__0[0U] = (IData)((((QData)((IData)(
                                                             __Vtemp_hd56bd579__1[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                << 3U)) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                     << 3U)))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 __Vtemp_hd56bd579__1[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                    << 3U)) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                               | ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__1[
                                                                  (0x7ffffffU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      >> 2U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))));
        __Vtemp_hb9ce39e7__0[1U] = (IData)(((((QData)((IData)(
                                                              __Vtemp_hd56bd579__1[
                                                              (((IData)(0x3fU) 
                                                                + 
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                 << 3U)) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__1[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_hd56bd579__1[
                                                                   (0x7ffffffU 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       >> 2U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                            >> 0x20U));
        __Vtemp_hb9ce39e7__0[2U] = (IData)((((QData)((IData)(
                                                             __Vtemp_hd56bd579__0[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                << 3U)) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                     << 3U)))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 __Vtemp_hd56bd579__0[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                    << 3U)) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                               | ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__0[
                                                                  (0x7ffffffU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      >> 2U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))));
        __Vtemp_hb9ce39e7__0[3U] = (IData)(((((QData)((IData)(
                                                              __Vtemp_hd56bd579__0[
                                                              (((IData)(0x3fU) 
                                                                + 
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                 << 3U)) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__0[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_hd56bd579__0[
                                                                   (0x7ffffffU 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       >> 2U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                            >> 0x20U));
        __Vtemp_hd56bd579__2[0U] = 0U;
        __Vtemp_hd56bd579__2[1U] = 0U;
        __Vtemp_hd56bd579__2[2U] = 0U;
        __Vtemp_hd56bd579__2[3U] = 0U;
        __Vtemp_h7bef2915__0[0U] = (IData)((((QData)((IData)(
                                                             __Vtemp_hd56bd579__2[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                << 3U)) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                     << 3U)))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 __Vtemp_hd56bd579__2[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                    << 3U)) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                               | ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__2[
                                                                  (0x7ffffffU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      >> 2U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))));
        __Vtemp_h7bef2915__0[1U] = (IData)(((((QData)((IData)(
                                                              __Vtemp_hd56bd579__2[
                                                              (((IData)(0x3fU) 
                                                                + 
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                 << 3U)) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__2[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_hd56bd579__2[
                                                                   (0x7ffffffU 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       >> 2U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                            >> 0x20U));
        __Vtemp_hd56bd579__3[0U] = 0U;
        __Vtemp_hd56bd579__3[1U] = 0U;
        __Vtemp_hd56bd579__3[2U] = 0U;
        __Vtemp_hd56bd579__3[3U] = 0U;
        __Vtemp_h38980670__0[0U] = (IData)((((QData)((IData)(
                                                             __Vtemp_hd56bd579__3[
                                                             (((IData)(0x3fU) 
                                                               + 
                                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                << 3U)) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                     << 3U)))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 __Vtemp_hd56bd579__3[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                    << 3U)) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))) 
                                               | ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__3[
                                                                  (0x7ffffffU 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      >> 2U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U))))));
        __Vtemp_h38980670__0[1U] = (IData)(((((QData)((IData)(
                                                              __Vtemp_hd56bd579__3[
                                                              (((IData)(0x3fU) 
                                                                + 
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                 << 3U)) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  __Vtemp_hd56bd579__3[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U)) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                                | ((QData)((IData)(
                                                                   __Vtemp_hd56bd579__3[
                                                                   (0x7ffffffU 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                       >> 2U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                       << 3U))))) 
                                            >> 0x20U));
        __Vtemp_h38980670__0[2U] = __Vtemp_h7bef2915__0[0U];
        __Vtemp_h38980670__0[3U] = __Vtemp_h7bef2915__0[1U];
        __Vtemp_h38980670__0[4U] = __Vtemp_hb9ce39e7__0[0U];
        __Vtemp_h38980670__0[5U] = __Vtemp_hb9ce39e7__0[1U];
        __Vtemp_h38980670__0[6U] = __Vtemp_hb9ce39e7__0[2U];
        __Vtemp_h38980670__0[7U] = __Vtemp_hb9ce39e7__0[3U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[6U] 
            = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[6U]) 
               | ((IData)((((QData)((IData)(__Vtemp_h38980670__0[
                                            (((IData)(0x3fU) 
                                              + (0xc0U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << 0x20U) | (QData)((IData)(
                                                        __Vtemp_h38980670__0[
                                                        (6U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                            << 1U))])))) 
                  << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[7U] 
            = (((IData)((((QData)((IData)(__Vtemp_h38980670__0[
                                          (((IData)(0x3fU) 
                                            + (0xc0U 
                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                  << 6U))) 
                                           >> 5U)])) 
                          << 0x20U) | (QData)((IData)(
                                                      __Vtemp_h38980670__0[
                                                      (6U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                          << 1U))])))) 
                >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                        __Vtemp_h38980670__0[
                                                        (((IData)(0x3fU) 
                                                          + 
                                                          (0xc0U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                              << 6U))) 
                                                         >> 5U)])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_h38980670__0[
                                                                    (6U 
                                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                                        << 1U))]))) 
                                      >> 0x20U)) << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U] 
            = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U]) 
               | ((IData)(((((QData)((IData)(__Vtemp_h38980670__0[
                                             (((IData)(0x3fU) 
                                               + (0xc0U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                     << 6U))) 
                                              >> 5U)])) 
                             << 0x20U) | (QData)((IData)(
                                                         __Vtemp_h38980670__0[
                                                         (6U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc_hit__DOT__gen_lzc__DOT__index_nodes) 
                                                             << 1U))]))) 
                           >> 0x20U)) >> 0x1fU));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U] 
            = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U]) 
               | (((0x110U >= ((IData)(0x90U) + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                 << 3U)))
                    ? (((0U == (0x1fU & ((IData)(0x90U) 
                                         + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                            << 3U))))
                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                 (((IData)(0xafU) + 
                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                    << 3U)) >> 5U)] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0x90U) 
                                                 + 
                                                 ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                  << 3U)))))) 
                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                          (((IData)(0x90U) + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                              << 3U)) 
                           >> 5U)] >> (0x1fU & ((IData)(0x90U) 
                                                + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   << 3U)))))
                    : 0U) << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[9U] 
            = ((6U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[9U]) 
               | (7U & (((0x110U >= ((IData)(0x90U) 
                                     + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                        << 3U))) ? 
                         (((0U == (0x1fU & ((IData)(0x90U) 
                                            + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                               << 3U))))
                            ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                    (((IData)(0xafU) 
                                      + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                         << 3U)) >> 5U)] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x90U) 
                                            + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                               << 3U)))))) 
                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                             (((IData)(0x90U) + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                 << 3U)) 
                              >> 5U)] >> (0x1fU & ((IData)(0x90U) 
                                                   + 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                    << 3U)))))
                          : 0U) >> 0x1fU)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[6U] 
            = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[6U]) 
               | ((IData)(((0x110U >= ((IData)(0x10U) 
                                       + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                          << 3U))) ? 
                           (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                             (((IData)(0x4fU) 
                                               + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                  << 3U)) 
                                              >> 5U)])) 
                             << ((0U == (0x1fU & ((IData)(0x10U) 
                                                  + 
                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   << 3U))))
                                  ? 0x20U : ((IData)(0x40U) 
                                             - (0x1fU 
                                                & ((IData)(0x10U) 
                                                   + 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                    << 3U)))))) 
                            | (((0U == (0x1fU & ((IData)(0x10U) 
                                                 + 
                                                 ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                  << 3U))))
                                 ? 0ULL : ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                           (((IData)(0x2fU) 
                                                             + 
                                                             ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                              << 3U)) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x10U) 
                                                     + 
                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))))) 
                               | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                  (((IData)(0x10U) 
                                                    + 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                     << 3U)) 
                                                   >> 5U)])) 
                                  >> (0x1fU & ((IData)(0x10U) 
                                               + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                  << 3U))))))
                            : 0ULL)) << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[7U] 
            = (((IData)(((0x110U >= ((IData)(0x10U) 
                                     + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                        << 3U))) ? 
                         (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                           (((IData)(0x4fU) 
                                             + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                << 3U)) 
                                            >> 5U)])) 
                           << ((0U == (0x1fU & ((IData)(0x10U) 
                                                + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   << 3U))))
                                ? 0x20U : ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(0x10U) 
                                                 + 
                                                 ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                  << 3U)))))) 
                          | (((0U == (0x1fU & ((IData)(0x10U) 
                                               + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                  << 3U))))
                               ? 0ULL : ((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                         (((IData)(0x2fU) 
                                                           + 
                                                           ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                            << 3U)) 
                                                          >> 5U)])) 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10U) 
                                                   + 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                    << 3U)))))) 
                             | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                (((IData)(0x10U) 
                                                  + 
                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   << 3U)) 
                                                 >> 5U)])) 
                                >> (0x1fU & ((IData)(0x10U) 
                                             + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                << 3U))))))
                          : 0ULL)) >> 0x1fU) | ((IData)(
                                                        (((0x110U 
                                                           >= 
                                                           ((IData)(0x10U) 
                                                            + 
                                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                             << 3U)))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                                            (((IData)(0x4fU) 
                                                                              + 
                                                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                               << 3U)) 
                                                                             >> 5U)])) 
                                                            << 
                                                            ((0U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(0x10U) 
                                                                  + 
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                   << 3U))))
                                                              ? 0x20U
                                                              : 
                                                             ((IData)(0x40U) 
                                                              - 
                                                              (0x1fU 
                                                               & ((IData)(0x10U) 
                                                                  + 
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                   << 3U)))))) 
                                                           | (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(0x10U) 
                                                                    + 
                                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                     << 3U))))
                                                                ? 0ULL
                                                                : 
                                                               ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                                                (((IData)(0x2fU) 
                                                                                + 
                                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                << 3U)) 
                                                                                >> 5U)])) 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(0x10U) 
                                                                     + 
                                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      << 3U)))))) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                                                (((IData)(0x10U) 
                                                                                + 
                                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                                << 3U)) 
                                                                                >> 5U)])) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & ((IData)(0x10U) 
                                                                     + 
                                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                      << 3U))))))
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U] 
            = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U]) 
               | ((IData)((((0x110U >= ((IData)(0x10U) 
                                        + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                           << 3U)))
                             ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                 (((IData)(0x4fU) 
                                                   + 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                    << 3U)) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(0x10U) 
                                                + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                   << 3U))))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x10U) 
                                                     + 
                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                      << 3U)))))) 
                                | (((0U == (0x1fU & 
                                            ((IData)(0x10U) 
                                             + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                << 3U))))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                               (((IData)(0x2fU) 
                                                                 + 
                                                                 ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                                  << 3U)) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                        << 3U)))))) 
                                   | ((QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__adapter_icache[
                                                      (((IData)(0x10U) 
                                                        + 
                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                         << 3U)) 
                                                       >> 5U)])) 
                                      >> (0x1fU & ((IData)(0x10U) 
                                                   + 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_offset_q) 
                                                    << 3U))))))
                             : 0ULL) >> 0x20U)) >> 0x1fU));
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__323(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__323\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__fifo_ring_ready_inp 
        = (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__i_ring_left__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)) 
            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__ring_left_ready_inp)) 
           | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__i_ring_right__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)) 
              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__ring_right_ready_inp)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__324(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__324\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__fifo_ring_ready_inp 
        = (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__i_ring_left__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)) 
            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__ring_left_ready_inp)) 
           | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__i_ring_right__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__idx_o)) 
              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ring_router__DOT__ring_right_ready_inp)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__4(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_b_mux__gnt_i)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__5(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT__i_xbar_unmuxed__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vcellinp__genblk1__DOT__i_r_mux__gnt_i)));
}

extern const VlWide<9>/*287:0*/ Vara_tb_verilator__ConstPool__CONST_h52991b67_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__325(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__325\n"); );
    // Init
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__rid_upsizer_match;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__rid_upsizer_match = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data = 0;
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ __VdfgTmp_h594f98ec__0;
    __VdfgTmp_h594f98ec__0 = 0;
    // Body
    __VdfgTmp_h594f98ec__0 = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____VdfgTmp_had711d13__0)) 
                              & ((0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[8U] 
                                          >> 4U)) == 
                                 (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_ar_id) 
                                          >> 4U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[0U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[0U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[1U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[1U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[2U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[3U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[3U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[4U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[4U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[5U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[5U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[6U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[6U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[7U] 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[7U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[8U] 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_ready_chan) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_ready_sel)) 
            << 0x13U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vcellinp__i_mst_ar_arb__gnt_i) 
                          << 0x12U) | (Vara_tb_verilator__ConstPool__CONST_h52991b67_0[8U] 
                                       & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[8U])));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__rid_upsizer_match 
        = (((IData)(__VdfgTmp_h594f98ec__0) << 1U) 
           | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____VdfgTmp_h09d7982e__0)) 
              & ((0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[8U] 
                          >> 4U)) == (0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_ar_id)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____VdfgExtracted_hb35b414a__0 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[8U] 
            >> 8U) & ((~ (IData)(__VdfgTmp_h594f98ec__0)) 
                      & (0U != (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__rid_upsizer_match))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____VdfgExtracted_h9a3726f4__0 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[8U] 
            >> 8U) & ((IData)(__VdfgTmp_h594f98ec__0) 
                      & (0U != (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__rid_upsizer_match))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
        = (0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
        = ((0xffffff0fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]) 
           | (0xf0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[8U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U] 
        = ((0xfffffff3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U]) 
           | (0xcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[0U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U]) 
           | (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[0U]));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran 
        = (2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran));
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_state_q))) {
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U] 
                      >> 0xcU)))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____VdfgExtracted_hb35b414a__0) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset 
                    = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[1U] 
                                >> 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset 
                    = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[1U] 
                             >> 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U] 
                    = ((0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U]) 
                       | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                            >> 1U) & (0U == (0x7f8U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U]))) 
                          << 1U));
                if ((((0U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & ((- (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                  >> 4U)))) 
                              << (0x3fU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((1U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(1U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(1U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(1U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((2U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(2U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(2U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(2U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((3U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(3U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(3U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(3U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(3U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((4U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(4U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(4U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(4U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((5U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(5U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(5U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(5U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(5U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((6U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(6U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(6U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(6U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(6U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((7U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(7U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(7U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(7U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(7U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((8U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(8U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(8U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(8U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(8U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((9U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(9U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(9U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(9U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(9U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xaU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xaU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xaU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xaU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0xaU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xbU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xbU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xbU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xbU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0xbU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xcU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xcU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xcU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xcU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0xcU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xdU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xdU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xdU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xdU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0xdU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xeU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xeU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xeU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xeU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0xeU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xfU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xfU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xfU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xfU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0xfU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x10U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x10U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x10U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x10U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x10U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x11U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x11U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x11U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x11U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x11U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x12U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x12U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x12U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x12U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x12U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x13U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x13U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x13U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x13U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x13U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x14U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x14U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x14U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x14U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x14U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x15U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x15U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x15U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x15U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x15U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x16U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x16U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x16U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x16U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x16U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x17U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x17U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x17U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x17U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x17U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x18U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x18U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x18U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x18U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x18U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x19U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x19U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x19U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x19U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x19U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1aU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1aU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1aU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1aU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x1aU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1bU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1bU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1bU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1bU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x1bU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1cU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1cU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1cU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1cU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x1cU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1dU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1dU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1dU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1dU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x1dU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1eU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1eU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1eU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1eU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x1eU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if (((((IData)(0x1fU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_q[0U]))) 
                     & (8U > (((IData)(0x1fU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1fU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[8U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x1fU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U] 
                    = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U]) 
                       | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                          << 4U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[1U] 
                    = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data) 
                        >> 0x1cU) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                                              >> 0x20U)) 
                                     << 4U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
                    = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]) 
                       | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_data 
                                   >> 0x20U)) >> 0x1cU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran 
                    = (1U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran));
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
        = (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[4U] 
        = ((0xfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[4U]) 
           | (0xf000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[8U] 
                         << 8U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
        = ((0xfffff3ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]) 
           | (0xc00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[0U] 
                        << 8U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
        = ((0xfffffeffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]) 
           | (0x100U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__slv_resp_o[0U] 
                        << 8U)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran));
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_state_q))) {
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U] 
                      >> 0xcU)))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____VdfgExtracted_h9a3726f4__0) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset 
                    = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[1U] 
                                >> 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset 
                    = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[1U] 
                             >> 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
                    = ((0xfffffdffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]) 
                       | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                            >> 1U) & (0U == (0x7f8U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U]))) 
                          << 9U));
                if ((((0U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & ((- (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                  >> 4U)))) 
                              << (0x3fU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((1U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(1U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(1U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(1U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((2U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(2U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(2U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(2U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((3U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(3U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(3U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(3U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[0U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(3U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((4U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(4U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(4U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(4U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((5U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(5U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(5U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(5U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(5U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((6U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(6U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(6U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(6U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(6U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((7U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(7U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(7U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(7U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[1U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(7U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((8U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(8U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(8U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(8U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(8U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((9U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(9U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(9U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(9U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(9U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xaU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xaU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xaU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xaU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0xaU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xbU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xbU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xbU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xbU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[2U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0xbU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xcU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xcU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xcU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xcU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0xcU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xdU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xdU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xdU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xdU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0xdU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xeU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xeU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xeU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xeU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0xeU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0xfU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0xfU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0xfU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0xfU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[3U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0xfU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x10U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x10U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x10U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x10U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x10U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x11U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x11U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x11U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x11U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x11U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x12U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x12U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x12U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x12U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x12U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x13U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x13U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x13U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x13U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x13U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x14U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x14U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x14U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x14U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x14U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x15U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x15U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x15U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x15U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x15U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x16U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x16U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x16U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x16U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x16U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x17U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x17U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x17U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x17U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[5U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x17U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x18U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x18U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x18U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x18U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x18U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x19U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x19U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x19U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x19U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x19U) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1aU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1aU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1aU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1aU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x1aU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1bU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1bU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1bU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1bU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[6U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x1bU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1cU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1cU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1cU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1cU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                  >> 4U)))) 
                              << (0x3fU & ((((IData)(0x1cU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1dU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1dU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1dU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1dU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                  >> 0xcU)))) 
                              << (0x3fU & ((((IData)(0x1dU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if ((((0x1eU >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      & (((IData)(0x1eU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                         < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U])))) 
                     & (8U > (((IData)(0x1eU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1eU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                  >> 0x14U)))) 
                              << (0x3fU & ((((IData)(0x1eU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                if (((((IData)(0x1fU) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                      < ((IData)(1U) << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_q[0U]))) 
                     & (8U > (((IData)(0x1fU) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset))))) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                        = (((~ (0xffULL << (0x3fU & 
                                            ((((IData)(0x1fU) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                              - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                             << 3U)))) 
                            & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                           | ((QData)((IData)((0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[8U] 
                                                   << 4U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[7U] 
                                                     >> 0x1cU))))) 
                              << (0x3fU & ((((IData)(0x1fU) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__slv_port_offset)) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__unnamedblk3__DOT__mst_port_offset)) 
                                           << 3U))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
                    = ((0xfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U]) 
                       | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                          << 0xcU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[3U] 
                    = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data) 
                        >> 0x14U) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                                              >> 0x20U)) 
                                     << 0xcU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[4U] 
                    = ((0xf000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[4U]) 
                       | (0xffffU & ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_data 
                                              >> 0x20U)) 
                                     >> 0x14U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran 
                    = (2U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran));
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_valid_tran));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__req_d)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vcellout__i_slv_r_arb__req_o 
        = (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__idx_o) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT____Vcellout__gen_dw_upsize__DOT__i_axi_dw_upsizer__slv_resp_o[0U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[3U] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT____Vcellout__gen_dw_upsize__DOT__i_axi_dw_upsizer__slv_resp_o[1U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[4U] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[3U] 
                             >> 8U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT____Vcellout__gen_dw_upsize__DOT__i_axi_dw_upsizer__slv_resp_o[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT____Vcellout__gen_dw_upsize__DOT__i_axi_dw_upsizer__slv_resp_o[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[1U];
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT____Vcellout__gen_dw_upsize__DOT__i_axi_dw_upsizer__slv_resp_o[2U] 
        = ((0xffe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT____Vcellout__gen_dw_upsize__DOT__i_axi_dw_upsizer__slv_resp_o[2U]) 
           | (0xfffffU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vcellout__i_slv_r_arb__req_o) 
                           << 8U) | (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_r_arb__DOT__idx_o)
                                               ? (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[4U] 
                                                  >> 8U)
                                               : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__slv_r_tran[2U])))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__326(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__326\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h90b0b304__0;
    // Body
    __Vtemp_h90b0b304__0 = ((((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid))
                               ? 7U : 6U) << 0x12U) 
                            | ((((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid))
                                  ? 5U : 4U) << 0xfU) 
                               | ((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid))
                                     ? 3U : 2U) << 0xcU) 
                                  | ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid))
                                        ? 1U : 0U) 
                                      << 9U) | ((0x1c0U 
                                                 & (((0x20U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                      ? 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                      >> 0x12U)) 
                                                    << 6U)) 
                                                | ((0x38U 
                                                    & (((8U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 9U)
                                                         : 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xcU)) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & ((2U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes))
                                                          ? 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 6U)))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_h90b0b304__0);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__327(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__327\n"); );
    // Init
    CData/*31:0*/ __Vtemp_ha4a224da__0;
    // Body
    __Vtemp_ha4a224da__0 = (((IData)((0xc0U != (0xc0U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                             << 6U) | (((IData)((0x30U 
                                                 != 
                                                 (0x30U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                                        << 5U) | (((IData)(
                                                           (0xcU 
                                                            != 
                                                            (0xcU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (3U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x60U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x18U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (6U 
                                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_ha4a224da__0);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rdy 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_vld_lzc__DOT__gen_lzc__DOT__sel_nodes) 
                 | (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_hit_oh))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__i_wt_dcache_wbuffer__req_port_o[4U] 
        = (3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__i_wt_dcache_wbuffer__req_port_o[4U]);
    if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[0U] 
          >> 0xeU) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rdy))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT____VdfgExtracted_hd60573d6__0) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__i_wt_dcache_wbuffer__req_port_o[4U] 
                = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__i_wt_dcache_wbuffer__req_port_o[4U]);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q;
    if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
         [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q][0U])) {
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__i_wt_dcache_wbuffer__req_port_o[4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_n 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q)));
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__328(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__328\n"); );
    // Init
    IData/*31:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata = 0ULL;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_read) {
        if ((0x1000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
            if ((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                             >> 1U)))) {
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata = 0ULL;
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                      ? 0ULL
                                                      : 3ULL);
                                            } else if (
                                                       (2U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata = 0x602ULL;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        } else if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                 >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 1U)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                }
                            }
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 8U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 6U)))) {
                                    if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                                    } else if ((8U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                                    } else if ((4U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = ((2U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr
                                                : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__instret_q);
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 1U)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__cycle_q;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                         >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 8U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                                } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                                } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                                } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr
                                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__instret_q);
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                   >> 1U)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__cycle_q;
                                }
                            }
                        }
                    }
                    if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                         >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                              >> 9U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 8U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                         >> 1U)))) {
                                                    if (
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                                     >> 0xdU))))) {
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                            = (QData)((IData)(
                                                                              (0x7fU 
                                                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q 
                                                                                >> 8U))));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0U == (3U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                 >> 0xdU))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                }
            }
        } else if ((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
            if ((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                         >> 1U)))) {
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__acc_cons_q;
                                                }
                                            } else {
                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                    = 
                                                    ((2U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                      ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcache_q
                                                      : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__icache_q);
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                }
                            }
                        } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 3U)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = ((4U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                    ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dscratch1_q
                                                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dscratch0_q)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                    ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dpc_q
                                                    : (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcsr_q))));
                                    }
                                }
                                if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                }
                            } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            }
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    }
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            }
        } else if ((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
            if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 7U)))) {
                        if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index 
                                    = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                               >> 1U));
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                    = (((0x7fU >= ((IData)(4U) 
                                                   + 
                                                   (0x7fU 
                                                    & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index 
                                                       << 3U)))) 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpcfg_q[
                                           (((IData)(4U) 
                                             + (0x7fU 
                                                & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index 
                                                   << 3U))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x7fU 
                                                   & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index 
                                                      << 3U))))))
                                        ? ((0x35fU 
                                            >= (0x3ffU 
                                                & ((IData)(0x36U) 
                                                   * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))
                                            ? (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpaddr_q[
                                                                   (((IData)(0x35U) 
                                                                     + 
                                                                     (0x3ffU 
                                                                      & ((IData)(0x36U) 
                                                                         * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x36U) 
                                                         * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x36U) 
                                                         * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x36U) 
                                                           * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpaddr_q[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x3ffU 
                                                                          & ((IData)(0x36U) 
                                                                             * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x36U) 
                                                            * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpaddr_q[
                                                                        (0x1fU 
                                                                         & (((IData)(0x36U) 
                                                                             * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x36U) 
                                                            * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))))))
                                            : 0ULL)
                                        : (((0x35fU 
                                             >= (0x3ffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    ((IData)(0x36U) 
                                                     * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))))
                                             ? (0x1fffffffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpaddr_q[
                                                                    (((IData)(0x34U) 
                                                                      + 
                                                                      (0x3ffU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          ((IData)(0x36U) 
                                                                           * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          ((IData)(0x36U) 
                                                           * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          ((IData)(0x36U) 
                                                           * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + 
                                                            ((IData)(0x36U) 
                                                             * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpaddr_q[
                                                                        (((IData)(0x1fU) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              ((IData)(0x36U) 
                                                                               * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             ((IData)(0x36U) 
                                                              * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))))) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpaddr_q[
                                                                         (0x1fU 
                                                                          & (((IData)(1U) 
                                                                              + 
                                                                              ((IData)(0x36U) 
                                                                               * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)) 
                                                                             >> 5U))])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(1U) 
                                                             + 
                                                             ((IData)(0x36U) 
                                                              * ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__index)))))))
                                             : 0ULL) 
                                           << 1U));
                            } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                 >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 1U)))) {
                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                = (
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpcfg_q[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpcfg_q[2U])));
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 1U)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = (((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpcfg_q[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__pmpcfg_q[0U])));
                                    }
                                }
                            }
                        }
                    }
                    if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            }
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    }
                } else if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 1U)))) {
                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mip_q;
                                        }
                                    }
                                } else {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? ((2U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mtval_q
                                                : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcause_q)
                                            : ((2U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                                ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mepc_q
                                                : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mscratch_q));
                                }
                            }
                        }
                    }
                    if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                    } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                    } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                    } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                         >> 1U)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                            = (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcountinhibit_q));
                    }
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 4U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 1U)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 1U)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcounteren_q;
                                    }
                                } else {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mtvec_q
                                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mie_q);
                                }
                            } else {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                    = ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                        ? ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mideleg_q
                                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__medeleg_q)
                                        : ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? 0x8000000000b4112dULL
                                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q));
                            }
                        }
                    }
                    if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            }
        } else if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
            if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((1U 
                                                      == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl)) 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                                >> 0x14U)))))) {
                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if (((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl)) 
                            & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                       >> 0x14U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                }
            } else if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 1U)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mip_q 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mideleg_q);
                                    }
                                }
                            } else {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                    = ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                        ? ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__stval_q
                                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__scause_q)
                                        : ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__sepc_q
                                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__sscratch_q));
                            }
                        }
                    }
                }
                if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                              >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 5U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                  >> 1U)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__scounteren_q;
                                    }
                                } else {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))
                                            ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__stvec_q
                                            : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mie_q 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mideleg_q));
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                 >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 1U)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                        = (0x80000003000de133ULL 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q);
                                }
                            }
                        }
                    }
                }
                if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                          >> 8U)))) {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                              >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                            if ((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                             >> 0xdU))))) {
                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                    = 
                                                    (((QData)((IData)(
                                                                      (7U 
                                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q 
                                                                          >> 5U)))) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q))));
                                            }
                                        } else if (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                                >> 0xdU))))) {
                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                = (QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q 
                                                                      >> 5U))));
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                                        if ((0U != 
                                             (3U & (IData)(
                                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                            >> 0xdU))))) {
                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata 
                                                = (QData)((IData)(
                                                                  (0x1fU 
                                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            } else if ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            } else if ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            } else if ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            } else if ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            } else if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                    if ((0U == (3U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                              >> 0xdU))))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                    }
                } else if ((0U == (3U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                 >> 0xdU))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q))) {
                if ((0U == (3U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                          >> 0xdU))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__read_access_exception = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellout__csr_regfile_i__csr_rdata_o 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata;
    if ((0x344U == (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                              >> 1U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellout__csr_regfile_i__csr_rdata_o 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata;
    } else if ((0x144U == (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                     >> 1U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellout__csr_regfile_i__csr_rdata_o 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__csr_rdata;
    }
}

extern const VlWide<10>/*319:0*/ Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0;
extern const VlWide<9>/*287:0*/ Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0;
extern const VlWide<9>/*287:0*/ Vara_tb_verilator__ConstPool__CONST_h52851867_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__329(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__329\n"); );
    // Init
    IData/*31:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d = 0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[9U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0xaU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0xbU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0xcU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0xdU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0xeU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0xeU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0xfU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0xfU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x10U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x10U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x11U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x11U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x12U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x12U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x13U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x13U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x14U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x14U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x15U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x15U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x16U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x16U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x17U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x17U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x18U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x18U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[0x19U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[0x19U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_cnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_vl_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_vl_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_len_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_len_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_q;
    if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xcU] 
          >> 8U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
                    >> 0x13U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk10__DOT__vew 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align 
                     >> 0x1bU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hff7135b7__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xfU])) 
                << 0x33U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xeU])) 
                              << 0x13U) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xdU])) 
                                           >> 0xdU)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_d 
            = (((~ ((IData)(0xfU) << (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_q) 
                                               << 2U)))) 
                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_d) 
               | (0xffffffffULL & ((0xfU & ((IData)(1U) 
                                            + (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_d 
                                               >> (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_q) 
                                                      << 2U))))) 
                                   << (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_q) 
                                                << 2U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_cnt_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_cnt_d)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk10__DOT__burst 
            = ((IData)(1U) + (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xdU] 
                                       >> 5U)));
        if ((0x33fU >= (0x3ffU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q))))) {
            VL_ASSIGNSEL_WQ(832,64,(0x3ffU & ((IData)(0x68U) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hff7135b7__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_d 
            = ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk10__DOT__vlen_request 
            = (0x3ffffU & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk10__DOT__burst 
                             << 5U) - (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xdU] 
                                                >> 0xdU))) 
                           >> (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk10__DOT__vew)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h0e7b17ce__0 
            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xdU] 
                        >> 5U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_vl_d 
            = (0x3ffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_vl_q 
                           + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk10__DOT__vlen_request));
        if ((0x33fU >= ((IData)(0x48U) + (0x3ffU & 
                                          ((IData)(0x68U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q)))))) {
            VL_ASSIGNSEL_WI(832,32,((IData)(0x48U) 
                                    + (0x3ffU & ((IData)(0x68U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h0e7b17ce__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h4d0e2c7a__0 
            = (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align);
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_vl_d 
              >= (0x3ffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align 
                              >> 9U))) | ((0x84U == 
                                           (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align)) 
                                          | (0x83U 
                                             == (0xffU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_vl_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_d 
                = ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_pnt_q))));
        }
        if ((0x33fU >= ((IData)(0x40U) + (0x3ffU & 
                                          ((IData)(0x68U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q)))))) {
            VL_ASSIGNSEL_WI(832,8,((IData)(0x40U) + 
                                   (0x3ffU & ((IData)(0x68U) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h4d0e2c7a__0);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
        = ((0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U]) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[0U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[3U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[4U] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[0U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[4U])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[1U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[4U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[5U] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[1U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[5U])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[2U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[5U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[6U] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[2U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[6U])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[3U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[6U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[7U] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[3U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[7U])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[4U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[7U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[8U] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[4U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[8U])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[5U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[8U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[9U] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[5U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[9U])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[6U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[9U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xaU] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[6U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xaU])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[7U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xaU])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xbU] 
        = ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[7U] 
                      >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xbU])) 
           | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[8U] 
                              << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xbU])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xcU] 
        = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xcU]) 
           | ((0x3fU & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[8U] 
                         >> 0x1aU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xcU])) 
              | (0xffffffc0U & ((Vara_tb_verilator__ConstPool__CONST_h3c9d8919_0[9U] 
                                 << 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0xcU]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
        = (0xffffff7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U]);
    if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[3U] 
                >> 5U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
                          >> 0x11U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_len_d 
            = (0x3ffffU & ((IData)(1U) + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_len_d));
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_len_q 
             == ((0x33fU >= ((IData)(0x48U) + (0x3ffU 
                                               & ((IData)(0x68U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))
                  ? (((0U == (0x1fU & ((IData)(0x48U) 
                                       + (0x3ffU & 
                                          ((IData)(0x68U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))))
                       ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[
                               (((IData)(0x67U) + (0x3ffU 
                                                   & ((IData)(0x68U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0x68U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))))) 
                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_d[
                        (((IData)(0x48U) + (0x3ffU 
                                            & ((IData)(0x68U) 
                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x48U) 
                                              + (0x3ffU 
                                                 & ((IData)(0x68U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))))
                  : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_cnt_d 
                = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_cnt_d) 
                           - (IData)(1U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_len_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_d 
                = ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
                = (0x80U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U]);
        }
        if (((0x84U == ((0x33fU >= ((IData)(0x40U) 
                                    + (0x3ffU & ((IData)(0x68U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))
                         ? (0xffU & (((0U == (0x1fU 
                                              & ((IData)(0x40U) 
                                                 + 
                                                 (0x3ffU 
                                                  & ((IData)(0x68U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))))
                                       ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[
                                               (((IData)(0x47U) 
                                                 + 
                                                 (0x3ffU 
                                                  & ((IData)(0x68U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                                                >> 5U)] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x40U) 
                                                       + 
                                                       (0x3ffU 
                                                        & ((IData)(0x68U) 
                                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))))) 
                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[
                                        (((IData)(0x40U) 
                                          + (0x3ffU 
                                             & ((IData)(0x68U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                                         >> 5U)] >> 
                                        (0x1fU & ((IData)(0x40U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0x68U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))))))
                         : 0U)) | (0x83U == ((0x33fU 
                                              >= ((IData)(0x40U) 
                                                  + 
                                                  (0x3ffU 
                                                   & ((IData)(0x68U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))
                                              ? (0xffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x40U) 
                                                          + 
                                                          (0x3ffU 
                                                           & ((IData)(0x68U) 
                                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[
                                                      (((IData)(0x47U) 
                                                        + 
                                                        (0x3ffU 
                                                         & ((IData)(0x68U) 
                                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x40U) 
                                                           + 
                                                           (0x3ffU 
                                                            & ((IData)(0x68U) 
                                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))))) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[
                                                       (((IData)(0x40U) 
                                                         + 
                                                         (0x3ffU 
                                                          & ((IData)(0x68U) 
                                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x40U) 
                                                           + 
                                                           (0x3ffU 
                                                            & ((IData)(0x68U) 
                                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))))))
                                              : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__addr 
                = ((0x33fU >= (0x3ffU & ((IData)(0x68U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[
                                        (((IData)(0x3fU) 
                                          + (0x3ffU 
                                             & ((IData)(0x68U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((IData)(0x68U) 
                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((IData)(0x68U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))) 
                       | (((0U == (0x1fU & ((IData)(0x68U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x3ffU 
                                                         & ((IData)(0x68U) 
                                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x68U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)))))) 
                          | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_track_q[
                                             (0x1fU 
                                              & (((IData)(0x68U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((IData)(0x68U) 
                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_commit_pnt_q))))))
                    : 0ULL);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos 
                = (0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__addr));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
                = ((0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U]) 
                   | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[0U] 
                      << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[4U] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[0U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[1U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[5U] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[1U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[2U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[6U] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[2U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[3U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[7U] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[3U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[4U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[8U] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[4U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[5U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[9U] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[5U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[6U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xaU] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[6U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[7U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xbU] 
                = ((Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[7U] 
                    >> 0x18U) | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[8U] 
                                 << 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xcU] 
                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xcU]) 
                   | (Vara_tb_verilator__ConstPool__CONST_h9a2fc1c8_0[8U] 
                      >> 0x18U));
            if ((0x20000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
                    = (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[4U] 
                    = (0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[4U]);
            } else if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align)) {
                if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align)) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h1376dec4__0 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[3U] 
                                    >> 8U));
                    if ((0x1f0U >= ((IData)(0x68U) 
                                    + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)))) {
                        VL_ASSIGNSEL_WI(497,8,((IData)(0x68U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h1376dec4__0);
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h48d0a0ba__0 
                        = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[6U])) 
                            << 0x38U) | (((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[5U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[4U])) 
                                            >> 8U)));
                    if ((0x1f0U >= ((IData)(0x88U) 
                                    + (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                << 3U))))) {
                        VL_ASSIGNSEL_WQ(497,64,((IData)(0x88U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                      << 3U))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h48d0a0ba__0);
                    }
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h165b551b__0 
                        = (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[3U] 
                                   >> 8U));
                    if ((0x1f0U >= ((IData)(0x68U) 
                                    + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)))) {
                        VL_ASSIGNSEL_WI(497,4,((IData)(0x68U) 
                                               + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h165b551b__0);
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hd82ef519__0 
                        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[5U] 
                            << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[4U] 
                                         >> 8U));
                    if ((0x1f0U >= ((IData)(0x88U) 
                                    + (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                << 3U))))) {
                        VL_ASSIGNSEL_WI(497,32,((IData)(0x88U) 
                                                + (0xffU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                      << 3U))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hd82ef519__0);
                    }
                }
            } else if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he8fe4134__0 
                    = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[3U] 
                             >> 8U));
                if ((0x1f0U >= ((IData)(0x68U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)))) {
                    VL_ASSIGNSEL_WI(497,2,((IData)(0x68U) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he8fe4134__0);
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h66f24fd2__0 
                    = (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[4U] 
                                  >> 8U));
                if ((0x1f0U >= ((IData)(0x88U) + (0xffU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                     << 3U))))) {
                    VL_ASSIGNSEL_WI(497,16,((IData)(0x88U) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                  << 3U))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h66f24fd2__0);
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h17143dc1__0 
                    = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[3U] 
                             >> 8U));
                if ((0x1f0U >= ((IData)(0x68U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[(
                                                                                ((IData)(0x68U) 
                                                                                + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x68U) 
                                                   + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[
                            (((IData)(0x68U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h17143dc1__0) 
                                         << (0x1fU 
                                             & ((IData)(0x68U) 
                                                + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos)))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9950d571__0 
                    = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[4U] 
                                >> 8U));
                if ((0x1f0U >= ((IData)(0x88U) + (0xffU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                     << 3U))))) {
                    VL_ASSIGNSEL_WI(497,8,((IData)(0x88U) 
                                           + (0xffU 
                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk11__DOT__start_byte_pos) 
                                                 << 3U))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9950d571__0);
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
        = (0xe01ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U]);
    if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_axi_cut__slv_resp_o[8U] 
                >> 0x10U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
                             >> 4U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_d 
            = (((~ ((IData)(0xfU) << (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_q) 
                                               << 2U)))) 
                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_d) 
               | (0xffffffffULL & ((0xfU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_d 
                                             >> (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_q) 
                                                    << 2U))) 
                                            - (IData)(1U))) 
                                   << (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_q) 
                                                << 2U)))));
        if ((1U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_track_q 
                            >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_q) 
                                         << 2U)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_d 
                = ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_q))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__b_commit_pnt_q))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
                = ((0xe01ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U]) 
                   | (0xffe00U & (0x10000U | (0xfe00U 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_axi_cut__slv_resp_o[8U]))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_cnt_q;
    __Vilp = 0U;
    while ((__Vilp <= 0x2eU)) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[__Vilp] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__vl_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__vl_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__last_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__last_q;
    if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0U] 
                >> 1U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
                          >> 0x12U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk3__DOT__vew 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align 
                     >> 0x1bU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk3__DOT__burst 
            = ((IData)(1U) + (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[0U] 
                              >> 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk3__DOT__vlen_request 
            = (0x3ffffU & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk3__DOT__burst 
                             << 5U) - (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[1U])) 
                           >> (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk3__DOT__vew)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__vl_d 
            = (0x3ffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__vl_q 
                           + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk3__DOT__vlen_request));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hef1e5ced__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[1U])));
        if ((0x5c7U >= ((IData)(0x79U) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WQ(1480,64,((IData)(0x79U) 
                                     + (0x7ffU & ((IData)(0xb9U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hef1e5ced__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hdc015ba2__0 
            = (0x3ffffU & ((0U == ((0x5c7U >= ((IData)(0xeU) 
                                               + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))
                                    ? (0xfU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0xeU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xb9U) 
                                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                                 (((IData)(0x11U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                                  (((IData)(0xeU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))))
                                    : 0U)) ? (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align 
                                              >> 9U)
                            : ((0x5c7U >= ((IData)(0x67U) 
                                           + (0x7ffU 
                                              & ((IData)(0xb9U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x67U) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))
                                     ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                             (((IData)(0x78U) 
                                               + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x67U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xb9U) 
                                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))) 
                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                      (((IData)(0x67U) 
                                        + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(0x67U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))
                                : 0U)));
        if ((0x5c7U >= ((IData)(0x67U) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WI(1480,18,((IData)(0x67U) 
                                     + (0x7ffU & ((IData)(0xb9U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hdc015ba2__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h725b60bf__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk3__DOT__vew;
        if ((0x5c7U >= ((IData)(0x24U) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WI(1480,3,((IData)(0x24U) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h725b60bf__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h4932b710__0 
            = (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align);
        if ((0x5c7U >= (0x7ffU & ((IData)(0xb9U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))) {
            VL_ASSIGNSEL_WI(1480,8,(0x7ffU & ((IData)(0xb9U) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h4932b710__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0 
            = (0xfU & ((IData)(1U) + ((0x5c7U >= ((IData)(0xeU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))
                                            ? 0U : 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                            (((IData)(0x11U) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xeU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))) 
                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                             (((IData)(0xeU) 
                                               + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0xeU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))
                                       : 0U)));
        if ((0x5c7U >= ((IData)(0xeU) + (0x7ffU & ((IData)(0xb9U) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0xeU) + 
                                    (0x7ffU & ((IData)(0xb9U) 
                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0 
            = (0xfU & ((IData)(1U) + ((0x5c7U >= ((IData)(0x12U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))
                                            ? 0U : 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                            (((IData)(0x15U) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x12U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))) 
                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                             (((IData)(0x12U) 
                                               + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x12U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))
                                       : 0U)));
        if ((0x5c7U >= ((IData)(0x12U) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x12U) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0 
            = (0xfU & ((IData)(1U) + ((0x5c7U >= ((IData)(0x16U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))
                                            ? 0U : 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                            (((IData)(0x19U) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))) 
                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                             (((IData)(0x16U) 
                                               + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x16U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))
                                       : 0U)));
        if ((0x5c7U >= ((IData)(0x16U) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x16U) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0 
            = (0xfU & ((IData)(1U) + ((0x5c7U >= ((IData)(0x1aU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))
                                            ? 0U : 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                            (((IData)(0x1dU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1aU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))) 
                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                             (((IData)(0x1aU) 
                                               + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1aU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))
                                       : 0U)));
        if ((0x5c7U >= ((IData)(0x1aU) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x1aU) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0 
            = (0xfU & ((IData)(1U) + ((0x5c7U >= ((IData)(0x1eU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))
                                            ? 0U : 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                            (((IData)(0x21U) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1eU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))) 
                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                             (((IData)(0x1eU) 
                                               + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1eU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))))
                                       : 0U)));
        if ((0x5c7U >= ((IData)(0x1eU) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x1eU) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_he2fe27bb__0);
        }
        if ((0U == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__vl_q)) {
            if ((0U != (1ULL & (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[1U]))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0 = 1U;
                if ((0x5c7U >= ((IData)(9U) + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[(
                                                                                ((IData)(9U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0xb9U) 
                                                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                            (((IData)(9U) + (0x7ffU 
                                             & ((IData)(0xb9U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0) 
                                         << (0x1fU 
                                             & ((IData)(9U) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))));
                }
            }
            if ((0U != (2ULL & (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[1U]))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0 = 1U;
                if ((0x5c7U >= ((IData)(0xaU) + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[(
                                                                                ((IData)(0xaU) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0xb9U) 
                                                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xaU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                            (((IData)(0xaU) + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0) 
                                         << (0x1fU 
                                             & ((IData)(0xaU) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))));
                }
            }
            if ((0U != (4ULL & (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[1U]))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0 = 1U;
                if ((0x5c7U >= ((IData)(0xbU) + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[(
                                                                                ((IData)(0xbU) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0xb9U) 
                                                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xbU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                            (((IData)(0xbU) + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0) 
                                         << (0x1fU 
                                             & ((IData)(0xbU) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))));
                }
            }
            if ((0U != (8ULL & (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[1U]))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0 = 1U;
                if ((0x5c7U >= ((IData)(0xcU) + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[(
                                                                                ((IData)(0xcU) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0xb9U) 
                                                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xcU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                            (((IData)(0xcU) + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0) 
                                         << (0x1fU 
                                             & ((IData)(0xcU) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))));
                }
            }
            if ((0U != (0x10ULL & (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_global_axi_cut__mst_req_o[1U]))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0 = 1U;
                if ((0x5c7U >= ((IData)(0xdU) + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[(
                                                                                ((IData)(0xdU) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0xb9U) 
                                                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xdU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                            (((IData)(0xdU) + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc0bd7e85__0) 
                                         << (0x1fU 
                                             & ((IData)(0xdU) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)))))));
                }
            }
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__vl_d 
              >= (0x3ffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align 
                              >> 9U))) | ((0x81U == 
                                           (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align)) 
                                          | (0x80U 
                                             == (0xffU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__cluster_metadata_cut_align))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_cnt_d 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_cnt_d)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__vl_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_d 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q)));
            if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_req_pnt_d = 0U;
            }
        }
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[0U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[1U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[2U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[3U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[4U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[5U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[6U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U] 
        = (Vara_tb_verilator__ConstPool__CONST_h52851867_0[7U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U] 
               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
        = ((0xffe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U]) 
           | (0xfffffU & (Vara_tb_verilator__ConstPool__CONST_h52851867_0[8U] 
                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U] 
                             >> 4U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
        = (0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]);
    if ((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U] 
                  >> 0xcU) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_req_cut_ready) 
                              >> 5U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[0U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[1U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[2U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[3U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[4U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[5U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[6U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[7U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U] 
                << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                             >> 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_d = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__last_d 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                     >> 5U));
    }
    if (((0x81U == ((0x5c7U >= (0x7ffU & ((IData)(0xb9U) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                   >> 0xcU)))))
                     ? (0xffU & (((0U == (0x1fU & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                       >> 0xcU)))))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                           (((IData)(7U) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                       >> 0xcU))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                         >> 0xcU))))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                    (0x3fU & (((IData)(0xb9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 0xcU))) 
                                              >> 5U))] 
                                    >> (0x1fU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 0xcU)))))))
                     : 0U)) | (0x80U == ((0x5c7U >= 
                                          (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                >> 0xcU)))))
                                          ? (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 0xcU)))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                            >> 0xcU))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                           >> 0xcU))))))) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                                   (0x3fU 
                                                    & (((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                            >> 0xcU))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                           >> 0xcU)))))))
                                          : 0U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
            = ((0xffeffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U]) 
               | (0xfffffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_d) 
                              << 8U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
            = ((0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__last_d) 
                  << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
            = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[0U] 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[0U] 
                >> 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[1U] 
                             << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[1U] 
                >> 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[2U] 
                             << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[2U] 
                >> 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[3U] 
                             << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[3U] 
                >> 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[4U] 
                             << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[4U] 
                >> 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[5U] 
                             << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[5U] 
                >> 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[6U] 
                             << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[6U] 
                >> 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[7U] 
                             << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
            = ((0xffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U]) 
               | (0xfffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_d[7U] 
                              >> 0x1cU)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__last_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_d = 0U;
    } else if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_q) 
                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_req_cut_ready) 
                   >> 5U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk7__DOT__axi_valid_el 
            = (0x1fffU & (0x20U >> ((0x5c7U >= ((IData)(0x24U) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                          >> 0xcU))))))
                                     ? (7U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0x24U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                            >> 0xcU)))))))
                                                ? 0U
                                                : (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xb9U) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                             >> 0xcU))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x24U) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0xb9U) 
                                                            * 
                                                            (7U 
                                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                                >> 0xcU))))))))) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                                 (((IData)(0x24U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                           >> 0xcU))))) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0x24U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xb9U) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                             >> 0xcU)))))))))
                                     : 0U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk7__DOT__valid_data 
            = (1U & (((~ (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d 
                          >> 0x1fU)) & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U] 
                                         >> 0xcU) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__last_q))) 
                     | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d 
                        >> 0x1fU)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((1U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((2U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((4U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2bU] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((8U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[0U] 
                                       >> 0x18U)) : 
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U] 
            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  >> 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x10U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x20U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x40U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2cU] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x80U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[1U] 
                                       >> 0x18U)) : 
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[1U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U] 
            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  >> 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x100U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x200U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x400U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2dU] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x800U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[2U] 
                                       >> 0x18U)) : 
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[2U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U] 
            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  >> 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x1000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x2000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x4000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2eU] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x8000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[3U] 
                                       >> 0x18U)) : 
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[3U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U] 
            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  >> 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x10000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x20000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x40000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x2fU] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x80000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[4U] 
                                       >> 0x18U)) : 
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[4U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U] 
            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  >> 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x100000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x200000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x400000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x30U] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x800000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[5U] 
                                       >> 0x18U)) : 
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[5U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U] 
            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  >> 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x1000000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x2000000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x4000000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x31U] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x8000000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[6U] 
                                       >> 0x18U)) : 
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[6U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U] 
            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  >> 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x10000000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U]
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                                          >> 8U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U] 
            = ((0xfffff00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 4U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x20000000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U] 
                             << 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U] 
                                          >> 8U)) : 
                        ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                          << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                                       >> 0x10U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U] 
            = ((0xfff00fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0xcU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((0x40000000U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d)
                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U] 
                             << 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U] 
                                          >> 0x10U))
                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                             << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x32U] 
                                       >> 0x18U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U] 
            = ((0xf00fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x14U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0 
            = (0xffU & ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d 
                         >> 0x1fU) ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U] 
                                       << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_q[7U] 
                                                 >> 0x18U))
                         : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U] 
            = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[7U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                  << 0x1cU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
            = ((0xffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U]) 
               | (0xfffffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hf035d54f__0) 
                              >> 4U)));
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk7__DOT__valid_data) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h5141c22e__0 
                = (0x3ffffU & (((0x5c7U >= ((IData)(0x67U) 
                                            + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                      >> 0xcU))))))
                                 ? (((0U == (0x1fU 
                                             & ((IData)(0x67U) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                          >> 0xcU)))))))
                                      ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                              (((IData)(0x78U) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                          >> 0xcU))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x67U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0xb9U) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                              >> 0xcU))))))))) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                       (((IData)(0x67U) 
                                         + (0x7ffU 
                                            & ((IData)(0xb9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                     >> 0xcU))))) 
                                        >> 5U)] >> 
                                       (0x1fU & ((IData)(0x67U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                         >> 0xcU))))))))
                                 : 0U) - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk7__DOT__axi_valid_el)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
                = (0x100U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_d 
                = (1U & ((~ (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d 
                             >> 0x1fU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U] 
                                           >> 0xcU)));
            if ((0x5c7U >= ((IData)(0x67U) + (0x7ffU 
                                              & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                     >> 0xcU))))))) {
                VL_ASSIGNSEL_WI(1480,18,((IData)(0x67U) 
                                         + (0x7ffU 
                                            & ((IData)(0xb9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                     >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h5141c22e__0);
            }
        }
        if ((((0x5c7U >= ((IData)(0x67U) + (0x7ffU 
                                            & ((IData)(0xb9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                     >> 0xcU))))))
               ? (0x3ffffU & (((0U == (0x1fU & ((IData)(0x67U) 
                                                + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                          >> 0xcU)))))))
                                ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                        (((IData)(0x78U) 
                                          + (0x7ffU 
                                             & ((IData)(0xb9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                      >> 0xcU))))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x67U) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                       >> 0xcU))))))))) 
                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_q[
                                 (((IData)(0x67U) + 
                                   (0x7ffU & ((IData)(0xb9U) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                    >> 0xcU))))) 
                                  >> 5U)] >> (0x1fU 
                                              & ((IData)(0x67U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q_del) 
                                                         >> 0xcU)))))))))
               : 0U) <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__unnamedblk7__DOT__axi_valid_el))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U] 
                = (2U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__data_valid_d 
                = ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__be_final_d 
                    >> 0x1fU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_i_cut[0x33U] 
                                 >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__last_d = 0U;
        }
    }
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0U] 
                 >> 1U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[8U] 
                           >> 8U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_req_cut_ready) 
                                      >> 1U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0 
            = (0xfU & (((0x5c7U >= ((IData)(0xeU) + 
                                    (0x7ffU & ((IData)(0xb9U) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))))
                         ? (((0U == (0x1fU & ((IData)(0xeU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q)))))))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                      (((IData)(0x11U) 
                                        + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0xeU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0xb9U) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                               (((IData)(0xeU) + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0xeU) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))))))
                         : 0U) - (IData)(1U)));
        if ((0x5c7U >= ((IData)(0xeU) + (0x7ffU & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0xeU) + 
                                    (0x7ffU & ((IData)(0xb9U) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0);
        }
        if ((0U == ((0x5c7U >= ((IData)(0xeU) + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0xeU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                          (((IData)(0x11U) 
                                            + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0xeU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                   (((IData)(0xeU) 
                                     + (0x7ffU & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0xeU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                = ((0x7ff8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d)) 
                   | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0));
            if ((7U == (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                    = (0x7ff8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d));
            }
        }
    }
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[8U] 
                 >> 0x15U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0x10U] 
                              >> 0x1cU)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_req_cut_ready) 
                                            >> 2U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0 
            = (0xfU & (((0x5c7U >= ((IData)(0x12U) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 3U))))))
                         ? (((0U == (0x1fU & ((IData)(0x12U) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                        >> 3U)))))))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                      (((IData)(0x15U) 
                                        + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                >> 3U))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x12U) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0xb9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                               >> 3U))))))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                               (((IData)(0x12U) + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 3U))))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x12U) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                       >> 3U))))))))
                         : 0U) - (IData)(1U)));
        if ((0x5c7U >= ((IData)(0x12U) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                               >> 3U))))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x12U) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0);
        }
        if ((0U == ((0x5c7U >= ((IData)(0x12U) + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                         >> 3U))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x12U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 3U)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                          (((IData)(0x15U) 
                                            + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 3U))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x12U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                            >> 3U))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                   (((IData)(0x12U) 
                                     + (0x7ffU & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 3U))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x12U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                           >> 3U)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0 
                = (7U & ((IData)(1U) + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                        >> 3U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                = ((0x7fc7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d)) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0) 
                      << 3U));
            if ((7U == (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                              >> 3U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                    = (0x7fc7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d));
            }
        }
    }
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0x11U] 
                 >> 9U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0x19U] 
                           >> 0x10U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_req_cut_ready) 
                                         >> 3U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0 
            = (0xfU & (((0x5c7U >= ((IData)(0x16U) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 6U))))))
                         ? (((0U == (0x1fU & ((IData)(0x16U) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                        >> 6U)))))))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                      (((IData)(0x19U) 
                                        + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                >> 6U))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x16U) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0xb9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                               >> 6U))))))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                               (((IData)(0x16U) + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 6U))))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x16U) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                       >> 6U))))))))
                         : 0U) - (IData)(1U)));
        if ((0x5c7U >= ((IData)(0x16U) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                               >> 6U))))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x16U) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0);
        }
        if ((0U == ((0x5c7U >= ((IData)(0x16U) + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                         >> 6U))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x16U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 6U)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                          (((IData)(0x19U) 
                                            + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 6U))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                            >> 6U))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                   (((IData)(0x16U) 
                                     + (0x7ffU & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 6U))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x16U) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                           >> 6U)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0 
                = (7U & ((IData)(1U) + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                        >> 6U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                = ((0x7e3fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d)) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0) 
                      << 6U));
            if ((7U == (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                              >> 6U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                    = (0x7e3fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d));
            }
        }
    }
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0x19U] 
                 >> 0x1dU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0x22U] 
                              >> 4U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_req_cut_ready) 
                                         >> 4U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0 
            = (0xfU & (((0x5c7U >= ((IData)(0x1aU) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 9U))))))
                         ? (((0U == (0x1fU & ((IData)(0x1aU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                        >> 9U)))))))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                      (((IData)(0x1dU) 
                                        + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                >> 9U))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x1aU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0xb9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                               >> 9U))))))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                               (((IData)(0x1aU) + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 9U))))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x1aU) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                       >> 9U))))))))
                         : 0U) - (IData)(1U)));
        if ((0x5c7U >= ((IData)(0x1aU) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                               >> 9U))))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x1aU) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0);
        }
        if ((0U == ((0x5c7U >= ((IData)(0x1aU) + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                         >> 9U))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x1aU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 9U)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                          (((IData)(0x1dU) 
                                            + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 9U))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x1aU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                            >> 9U))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                   (((IData)(0x1aU) 
                                     + (0x7ffU & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 9U))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x1aU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                           >> 9U)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0 
                = (7U & ((IData)(1U) + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                        >> 9U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                = ((0x71ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d)) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0) 
                      << 9U));
            if ((7U == (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                              >> 9U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                    = (0x71ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d));
            }
        }
    }
    if ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0x22U] 
           >> 0x11U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_resp_o_cut[0x2aU] 
                        >> 0x18U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__axi_req_cut_ready) 
                                      >> 5U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0 
            = (0xfU & (((0x5c7U >= ((IData)(0x1eU) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 0xcU))))))
                         ? (((0U == (0x1fU & ((IData)(0x1eU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xb9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                        >> 0xcU)))))))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                      (((IData)(0x21U) 
                                        + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                >> 0xcU))))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x1eU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0xb9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                               >> 0xcU))))))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                               (((IData)(0x1eU) + (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 0xcU))))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x1eU) 
                                             + (0x7ffU 
                                                & ((IData)(0xb9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                       >> 0xcU))))))))
                         : 0U) - (IData)(1U)));
        if ((0x5c7U >= ((IData)(0x1eU) + (0x7ffU & 
                                          ((IData)(0xb9U) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                               >> 0xcU))))))) {
            VL_ASSIGNSEL_WI(1480,4,((IData)(0x1eU) 
                                    + (0x7ffU & ((IData)(0xb9U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                     >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_hc42eb6b2__0);
        }
        if ((0U == ((0x5c7U >= ((IData)(0x1eU) + (0x7ffU 
                                                  & ((IData)(0xb9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                         >> 0xcU))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x1eU) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0xb9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                          >> 0xcU)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                          (((IData)(0x21U) 
                                            + (0x7ffU 
                                               & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 0xcU))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x1eU) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0xb9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                            >> 0xcU))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d[
                                   (((IData)(0x1eU) 
                                     + (0x7ffU & ((IData)(0xb9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                      >> 0xcU))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x1eU) 
                                                   + 
                                                   (0x7ffU 
                                                    & ((IData)(0xb9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                           >> 0xcU)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0 
                = (7U & ((IData)(1U) + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                        >> 0xcU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9186758b__0 = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_cnt_d 
                = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_cnt_d) 
                           - (IData)(1U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                = ((0xfffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d)) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9a246f6f__0) 
                      << 0xcU));
            if ((0x5c7U >= ((IData)(9U) + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                >> 0xcU))))))) {
                VL_ASSIGNSEL_WI(1480,5,((IData)(9U) 
                                        + (0x7ffU & 
                                           ((IData)(0xb9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                                                >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__tracker_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vlvbound_h9186758b__0);
            }
            if ((7U == (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_q) 
                              >> 0xcU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d 
                    = (0xfffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__rd_resp_pnt_d));
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
               >> 0x13U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
              >> 0x13U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_w__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
               >> 0x11U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_w__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_w__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_w__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
              >> 0x11U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
            >> 0x10U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT____Vcellout__i_reg_b__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
               >> 0x12U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
              >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
            >> 8U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT____Vcellout__i_reg_r__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xcU] 
        = ((0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xcU]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
               << 9U) | (0x1fff00U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT____Vcellout__i_reg_aw__valid_o) 
                                       << 8U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
                                                 >> 0xbU)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xdU] 
        = ((0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
                     >> 0x17U)) | ((0x100U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
                                              >> 0x17U)) 
                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
                                      << 9U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xeU] 
        = ((0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
                     >> 0x17U)) | ((0x100U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
                                              >> 0x17U)) 
                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
                                      << 9U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xfU] 
        = (0x1ffffU & ((0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
                                 >> 0x17U)) | ((0x100U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
                                                   >> 0x17U)) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_aw__DOT____Vcellout__spill_register_flushable_i__data_o[3U] 
                                                  << 9U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
            << 2U) | ((0x7ffeU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT____Vcellout__i_reg_ar__valid_o) 
                                   << 1U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_resp_o[8U] 
                                             >> 0x11U))) 
                      | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_align_reg_r__ready_o)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT____Vcellout__spill_register_flushable_i__data_o[0U] 
            >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT____Vcellout__spill_register_flushable_i__data_o[1U] 
            >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
        = ((0xffffffc0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U]) 
           | ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_stage__DOT__wr_cnt_q)) 
                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT____Vcellout__i_reg_w__valid_o)) 
               << 5U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT____Vcellout__i_reg_b__ready_o) 
                          << 4U) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT____Vcellout__spill_register_flushable_i__data_o[2U] 
                                     >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_global_axi_cut__DOT__i_reg_ar__DOT____Vcellout__spill_register_flushable_i__data_o[3U] 
                                                  << 2U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_aw__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0xcU] 
            >> 8U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT____Vcellout__i_reg_aw__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_w__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
            >> 5U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT____Vcellout__i_reg_w__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
               >> 4U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_b__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[3U] 
              >> 4U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_ar__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0U] 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT____Vcellout__i_reg_ar__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0U]) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__i_align_axi_cut__DOT__i_reg_r__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT____Vcellout__i_align_stage__axi_req_o[0U]);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__330(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__330\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hdca2c337__0;
    // Body
    __Vtemp_hdca2c337__0 = (((IData)((0U != (0xc0U 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                             << 6U) | (((IData)((0U 
                                                 != 
                                                 (0x30U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                                        << 5U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x60U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x18U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (6U 
                                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_hdca2c337__0);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__331(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__331\n"); );
    // Init
    IData/*31:0*/ __Vtemp_ha30db541__0;
    // Body
    __Vtemp_ha30db541__0 = ((((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                               ? 6U : 7U) << 0x12U) 
                            | ((((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                                  ? 4U : 5U) << 0xfU) 
                               | ((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                                     ? 2U : 3U) << 0xcU) 
                                  | ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))
                                        ? 0U : 1U) 
                                      << 9U) | ((0x1c0U 
                                                 & (((0x20U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                      ? 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                      >> 0x12U)) 
                                                    << 6U)) 
                                                | ((0x38U 
                                                    & (((8U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 9U)
                                                         : 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xcU)) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & ((2U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                          ? 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 6U)))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_ha30db541__0);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__332(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__332\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h7b2f26ca__0;
    // Body
    __Vtemp_h7b2f26ca__0 = ((((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                               ? 6U : 7U) << 0x12U) 
                            | ((((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                                  ? 4U : 5U) << 0xfU) 
                               | ((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                                     ? 2U : 3U) << 0xcU) 
                                  | ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))
                                        ? 0U : 1U) 
                                      << 9U) | ((0x1c0U 
                                                 & (((0x20U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                      ? 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                      >> 0xfU)
                                                      : 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                      >> 0x12U)) 
                                                    << 6U)) 
                                                | ((0x38U 
                                                    & (((8U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 9U)
                                                         : 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xcU)) 
                                                       << 3U)) 
                                                   | (7U 
                                                      & ((2U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                          ? 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 3U)
                                                          : 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 6U)))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_h7b2f26ca__0);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__333(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__333\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hed3933b5__0;
    // Body
    __Vtemp_hed3933b5__0 = (((IData)((0U != (0xc0U 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                             << 6U) | (((IData)((0U 
                                                 != 
                                                 (0x30U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                                        << 5U) | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)))) 
                                                      << 3U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x60U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x18U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                            << 1U) 
                                                           | (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (6U 
                                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_clean_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_hed3933b5__0);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__334(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__334\n"); );
    // Init
    CData/*1:0*/ __Vfunc_toSize64__165__Vfuncout;
    __Vfunc_toSize64__165__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_toSize64__165__be;
    __Vfunc_toSize64__165__be = 0;
    CData/*1:0*/ __Vfunc_toSize64__165__size;
    __Vfunc_toSize64__165__size = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT____Vcellinp__i_vld_bdirty__in_i 
        = (0xffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__bdirty 
                            >> (0x38U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__index_nodes 
                                         << 3U)))));
    __Vfunc_toSize64__165__be = (0xffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__bdirty 
                                                  >> 
                                                  (0x38U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__index_nodes 
                                                      << 3U)))));
    __Vfunc_toSize64__165__size = ((0xffU == (IData)(__Vfunc_toSize64__165__be))
                                    ? 3U : (((0xfU 
                                              == (IData)(__Vfunc_toSize64__165__be)) 
                                             | (0xf0U 
                                                == (IData)(__Vfunc_toSize64__165__be)))
                                             ? 2U : 
                                            (((((0xc0U 
                                                 == (IData)(__Vfunc_toSize64__165__be)) 
                                                | (0x30U 
                                                   == (IData)(__Vfunc_toSize64__165__be))) 
                                               | (0xcU 
                                                  == (IData)(__Vfunc_toSize64__165__be))) 
                                              | (3U 
                                                 == (IData)(__Vfunc_toSize64__165__be)))
                                              ? 1U : 0U)));
    __Vfunc_toSize64__165__Vfuncout = __Vfunc_toSize64__165__size;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__i_wt_dcache_wbuffer__miss_size_o 
        = __Vfunc_toSize64__165__Vfuncout;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__335(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__335\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((0xeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i))) 
                    | (((0U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                      >> 7U))) | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U)))) 
                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((0xeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((0xdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (2U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i) 
                            >> 1U)) << 1U)) | ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                        >> 7U)))) 
                                                << 1U) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((0xdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((0xbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (4U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i) 
                            >> 2U)) << 2U)) | ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                        >> 7U)))) 
                                                << 2U) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((0xbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (4U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (8U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i) 
                            >> 3U)) << 3U)) | ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                        >> 7U)))) 
                                                << 3U) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (8U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
            >> 2U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__2__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
            >> 3U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__3__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__np2_loop_mux_sel_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_q)
            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                 & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                    | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                  >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                            | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                  >> 2U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                            | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                    >> 3U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                              | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__336(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__336\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((0xeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i))) 
                    | (((0U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                      >> 7U))) | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U)))) 
                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((0xeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((0xdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (2U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i) 
                            >> 1U)) << 1U)) | ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                        >> 7U)))) 
                                                << 1U) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((0xdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((0xbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (4U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i) 
                            >> 2U)) << 2U)) | ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                        >> 7U)))) 
                                                << 2U) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((0xbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (4U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d 
        = ((7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d)) 
           | (8U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid) 
                     & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i) 
                            >> 3U)) << 3U)) | ((((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                      >> 7U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__vinsn_issue_q[8U] 
                                                        >> 7U)))) 
                                                << 3U) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_red_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready 
        = ((7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_operand_ready)) 
           | (8U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ready_q) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
            >> 2U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__2__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d) 
            >> 3U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT____Vcellout__genblk1__BRA__3__KET____DOT__i_sldu_spill_register__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__np2_loop_mux_sel_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_q)
            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_valid_d));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                 & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                    | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__0__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                  >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                            | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__1__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                  >> 2U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                            | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__2__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__sldu_operand_ref_valid_d) 
                    >> 3U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q)) 
                              | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sldu__DOT__genblk1__BRA__3__KET____DOT__i_sldu_ref_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__337(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__337\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_ar_ready_tran 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vcellinp__i_mst_ar_arb__gnt_i) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vcellout__i_mst_ar_arb__idx_o)) 
            << 1U) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vcellout__i_mst_ar_arb__idx_o)) 
                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vcellinp__i_mst_ar_arb__gnt_i)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_sequent__TOP__338(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_sequent__TOP__338\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__iaccess_err;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__iaccess_err = 0;
    CData/*0:0*/ __Vfunc_is_inside_execute_regions__123__Vfuncout;
    __Vfunc_is_inside_execute_regions__123__Vfuncout = 0;
    VlWide<202>/*6433:0*/ __Vfunc_is_inside_execute_regions__123__Cfg;
    VL_ZERO_W(6434, __Vfunc_is_inside_execute_regions__123__Cfg);
    QData/*63:0*/ __Vfunc_is_inside_execute_regions__123__address;
    __Vfunc_is_inside_execute_regions__123__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k;
    __Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k = 0;
    SData/*15:0*/ __Vfunc_is_inside_execute_regions__123__pass;
    __Vfunc_is_inside_execute_regions__123__pass = 0;
    CData/*0:0*/ __Vfunc_is_inside_cacheable_regions__151__Vfuncout;
    __Vfunc_is_inside_cacheable_regions__151__Vfuncout = 0;
    VlWide<202>/*6433:0*/ __Vfunc_is_inside_cacheable_regions__151__Cfg;
    VL_ZERO_W(6434, __Vfunc_is_inside_cacheable_regions__151__Cfg);
    QData/*63:0*/ __Vfunc_is_inside_cacheable_regions__151__address;
    __Vfunc_is_inside_cacheable_regions__151__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k;
    __Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k = 0;
    SData/*15:0*/ __Vfunc_is_inside_cacheable_regions__151__pass;
    __Vfunc_is_inside_cacheable_regions__151__pass = 0;
    CData/*0:0*/ __Vfunc_is_inside_nonidempotent_regions__153__Vfuncout;
    __Vfunc_is_inside_nonidempotent_regions__153__Vfuncout = 0;
    VlWide<202>/*6433:0*/ __Vfunc_is_inside_nonidempotent_regions__153__Cfg;
    VL_ZERO_W(6434, __Vfunc_is_inside_nonidempotent_regions__153__Cfg);
    QData/*63:0*/ __Vfunc_is_inside_nonidempotent_regions__153__address;
    __Vfunc_is_inside_nonidempotent_regions__153__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k;
    __Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k = 0;
    SData/*15:0*/ __Vfunc_is_inside_nonidempotent_regions__153__pass;
    __Vfunc_is_inside_nonidempotent_regions__153__pass = 0;
    VlWide<5>/*159:0*/ __Vtemp_h0166dabe__0;
    VlWide<3>/*95:0*/ __Vtemp_h85c86e84__0;
    VlWide<3>/*95:0*/ __Vtemp_h421c3bb9__0;
    VlWide<3>/*95:0*/ __Vtemp_hf9c508f8__0;
    VlWide<3>/*95:0*/ __Vtemp_hb11ce9e2__0;
    VlWide<3>/*95:0*/ __Vtemp_hb386290b__0;
    VlWide<3>/*95:0*/ __Vtemp_haf7f6caa__0;
    VlWide<3>/*95:0*/ __Vtemp_h49226311__0;
    VlWide<3>/*95:0*/ __Vtemp_h19629e95__0;
    VlWide<3>/*95:0*/ __Vtemp_hde739647__0;
    VlWide<3>/*95:0*/ __Vtemp_hf49720bc__0;
    VlWide<3>/*95:0*/ __Vtemp_h8abb00d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h0336ea39__0;
    VlWide<3>/*95:0*/ __Vtemp_hb491c9a4__0;
    VlWide<3>/*95:0*/ __Vtemp_h5695f994__0;
    VlWide<3>/*95:0*/ __Vtemp_h65e4bd65__0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
        = ((IData)((0xffffffffffffffULL & (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
           << 1U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U] 
        = ((0x2000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
                          << 0x19U)) | (((IData)((0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
                                         >> 0x1fU) 
                                        | ((IData)(
                                                   ((0xffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                                                    >> 0x20U)) 
                                           << 1U)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__iaccess_err 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
           & (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl)) 
               & (~ (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_content 
                             >> 4U)))) | ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl)) 
                                          & (IData)(
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_content 
                                                     >> 4U)))));
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) {
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
             & (~ ((0x3ffffffU == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U] 
                                   >> 6U)) | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U] 
                                                          >> 6U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                         << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] 
                = (2U | ((IData)(((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                  >> 0x20U)) >> 0x1fU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
                = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
            = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]) 
               | ((IData)(((0xfffffffffff000ULL & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_content 
                                                   << 2U)) 
                           | (QData)((IData)((0xfffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
                  << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U] 
            = (0x3ffffffU & (((IData)(((0xfffffffffff000ULL 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_content 
                                           << 2U)) 
                                       | (QData)((IData)(
                                                         (0xfffU 
                                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
                              >> 0x1fU) | ((IData)(
                                                   (((0xfffffffffff000ULL 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_content 
                                                         << 2U)) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                                                    >> 0x20U)) 
                                           << 1U)));
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_is_2M) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
                = ((0xffc01fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]) 
                   | (0x3fe000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U] 
                                   << 1U)));
        }
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_is_1G) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
                = ((0x80001fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]) 
                   | (0x7fffe000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U] 
                                     << 1U)));
        }
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__itlb_lu_hit) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U] 
                = ((0x1ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U]) 
                   | (0x2000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
                                    << 0x19U)));
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__iaccess_err) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] 
                    = (1U | ((IData)((((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                             << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U] 
                    = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                        >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                              >> 0x20U)) 
                                     << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] 
                    = (0x18U | ((IData)(((((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                         >> 0x20U)) 
                                >> 0x1fU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U] = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
                    = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]);
            }
        } else if (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q)) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__is_instr_ptw_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U] 
                = ((0x1ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U]) 
                   | (0x3ffffffU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_error) 
                                     | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_access_exception)) 
                                    << 0x19U)));
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_error) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] 
                    = (1U | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q) 
                             << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U] 
                    = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q) 
                        >> 0x1fU) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q 
                                              >> 0x20U)) 
                                     << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] 
                    = (0x18U | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q 
                                         >> 0x20U)) 
                                >> 0x1fU));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] 
                    = (1U | ((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_access_exception)
                                       ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__ptw_pptr_q
                                       : 0ULL)) << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U] 
                    = (((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_access_exception)
                                  ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__ptw_pptr_q
                                  : 0ULL)) >> 0x1fU) 
                       | ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_access_exception)
                                     ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__ptw_pptr_q
                                     : 0ULL) >> 0x20U)) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] 
                    = (2U | ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_access_exception)
                                        ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__i_ptw__DOT__ptw_pptr_q
                                        : 0ULL) >> 0x20U)) 
                             >> 0x1fU));
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
                = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]);
        }
    }
    if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__match_any_execute_region)) 
               & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__ptw_error))))) {
        __Vtemp_h0166dabe__0[1U] = (((IData)((0xffffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U])) 
                                                    >> 1U)))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((0xffffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                                                << 0x1fU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U])) 
                                                                  >> 1U))) 
                                                           >> 0x20U)) 
                                                  << 1U));
        __Vtemp_h0166dabe__0[2U] = (2U | ((IData)((
                                                   (0xffffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U])) 
                                                          >> 1U))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] 
            = (1U | ((IData)((0xffffffffffffffULL & 
                              (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                << 0x1fU) | ((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U])) 
                                             >> 1U)))) 
                     << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U] 
            = __Vtemp_h0166dabe__0[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] 
            = __Vtemp_h0166dabe__0[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
            = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]);
    }
    __Vfunc_is_inside_execute_regions__123__address 
        = (0xffffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U])) 
                                                >> 1U)));
    VL_CONSTHI_W_1X(6434,6400,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000008);
    VL_CONSTLO_W_8X(6144,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000080,0x00000200,0x00000008,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5888,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5632,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5376,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5120,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4864,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4608,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4352,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4096,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x0000000c,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3840,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3584,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3328,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000);
    VL_CONSTLO_W_8X(3072,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00040000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2816,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2560,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2304,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000001,0x00000000);
    VL_CONSTLO_W_8X(2048,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00040000,0x00000000,0x00004000,0x00000004,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1792,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1536,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1280,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1024,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(768,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(512,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(256,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(0,__Vfunc_is_inside_execute_regions__123__Cfg,0x00000000,0x00000000,0x00000000,0x00000001,0x00000002,0x00000000,0x00000000,0x00000000);
    __Vfunc_is_inside_execute_regions__123__pass = 0U;
    __Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k = 0U;
    while ((__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
            < ((__Vfunc_is_inside_execute_regions__123__Cfg[0x85U] 
                << 0x1eU) | (__Vfunc_is_inside_execute_regions__123__Cfg[0x84U] 
                             >> 2U)))) {
        vlSelf->__Vfunc_range_check__124__address = __Vfunc_is_inside_execute_regions__123__address;
        vlSelf->__Vfunc_range_check__124__len = ((0x1921U 
                                                  >= 
                                                  ((IData)(0x882U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                       << 6U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vfunc_is_inside_execute_regions__123__Cfg[
                                                                   (((IData)(0x8c1U) 
                                                                     + 
                                                                     (0x3ffU 
                                                                      & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x882U) 
                                                         + 
                                                         (0x3ffU 
                                                          & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                             << 6U)))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x882U) 
                                                         + 
                                                         (0x3ffU 
                                                          & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                             << 6U))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x882U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                               << 6U)))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vfunc_is_inside_execute_regions__123__Cfg[
                                                                       (((IData)(0x8a1U) 
                                                                         + 
                                                                         (0x3ffU 
                                                                          & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                             << 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x882U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                << 6U))))))) 
                                                     | ((QData)((IData)(
                                                                        __Vfunc_is_inside_execute_regions__123__Cfg[
                                                                        (((IData)(0x882U) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x882U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                << 6U)))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__124__base = ((0x1921U 
                                                   >= 
                                                   ((IData)(0xc82U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                        << 6U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vfunc_is_inside_execute_regions__123__Cfg[
                                                                    (((IData)(0xcc1U) 
                                                                      + 
                                                                      (0x3ffU 
                                                                       & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xc82U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                              << 6U)))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0xc82U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                              << 6U))))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0xc82U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                << 6U)))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vfunc_is_inside_execute_regions__123__Cfg[
                                                                        (((IData)(0xca1U) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0xc82U) 
                                                             + 
                                                             (0x3ffU 
                                                              & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                 << 6U))))))) 
                                                      | ((QData)((IData)(
                                                                         __Vfunc_is_inside_execute_regions__123__Cfg[
                                                                         (((IData)(0xc82U) 
                                                                           + 
                                                                           (0x3ffU 
                                                                            & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                               << 6U))) 
                                                                          >> 5U)])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0xc82U) 
                                                             + 
                                                             (0x3ffU 
                                                              & (__Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
                                                                 << 6U)))))))
                                                   : 0ULL);
        __Vtemp_h85c86e84__0[0U] = (IData)(vlSelf->__Vfunc_range_check__124__address);
        __Vtemp_h85c86e84__0[1U] = (IData)((vlSelf->__Vfunc_range_check__124__address 
                                            >> 0x20U));
        __Vtemp_h85c86e84__0[2U] = 0U;
        __Vtemp_h421c3bb9__0[0U] = (IData)(vlSelf->__Vfunc_range_check__124__base);
        __Vtemp_h421c3bb9__0[1U] = (IData)((vlSelf->__Vfunc_range_check__124__base 
                                            >> 0x20U));
        __Vtemp_h421c3bb9__0[2U] = 0U;
        __Vtemp_hf9c508f8__0[0U] = (IData)(vlSelf->__Vfunc_range_check__124__len);
        __Vtemp_hf9c508f8__0[1U] = (IData)((vlSelf->__Vfunc_range_check__124__len 
                                            >> 0x20U));
        __Vtemp_hf9c508f8__0[2U] = 0U;
        VL_ADD_W(3, __Vtemp_hb11ce9e2__0, __Vtemp_h421c3bb9__0, __Vtemp_hf9c508f8__0);
        __Vtemp_hb386290b__0[0U] = __Vtemp_hb11ce9e2__0[0U];
        __Vtemp_hb386290b__0[1U] = __Vtemp_hb11ce9e2__0[1U];
        __Vtemp_hb386290b__0[2U] = (1U & __Vtemp_hb11ce9e2__0[2U]);
        vlSelf->__Vfunc_range_check__124__Vfuncout 
            = ((vlSelf->__Vfunc_range_check__124__address 
                >= vlSelf->__Vfunc_range_check__124__base) 
               & VL_LT_W(3, __Vtemp_h85c86e84__0, __Vtemp_hb386290b__0));
        __Vfunc_is_inside_execute_regions__123__pass 
            = (((~ ((IData)(1U) << (0xfU & __Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k))) 
                & (IData)(__Vfunc_is_inside_execute_regions__123__pass)) 
               | (0xffffU & ((IData)(vlSelf->__Vfunc_range_check__124__Vfuncout) 
                             << (0xfU & __Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k))));
        __Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_execute_regions__123__unnamedblk2__DOT__k);
    }
    __Vfunc_is_inside_execute_regions__123__Vfuncout 
        = (0U != (IData)(__Vfunc_is_inside_execute_regions__123__pass));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu_sv39__DOT__i_cva6_mmu__DOT__match_any_execute_region 
        = __Vfunc_is_inside_execute_regions__123__Vfuncout;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[4U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q) 
            << 1U) | (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[5U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q) 
            >> 0x1fU) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                                  >> 0x20U)) << 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[6U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[6U]) 
           | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                       >> 0x20U)) >> 0x1fU));
    __Vfunc_is_inside_nonidempotent_regions__153__address 
        = (0xffffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U])) 
                                                >> 1U)));
    VL_CONSTHI_W_1X(6434,6400,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000008);
    VL_CONSTLO_W_8X(6144,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000080,0x00000200,0x00000008,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5888,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5632,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5376,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5120,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4864,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4608,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4352,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4096,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x0000000c,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3840,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3584,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3328,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000);
    VL_CONSTLO_W_8X(3072,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00040000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2816,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2560,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2304,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000001,0x00000000);
    VL_CONSTLO_W_8X(2048,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00040000,0x00000000,0x00004000,0x00000004,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1792,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1536,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1280,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1024,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(768,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(512,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(256,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(0,__Vfunc_is_inside_nonidempotent_regions__153__Cfg,0x00000000,0x00000000,0x00000000,0x00000001,0x00000002,0x00000000,0x00000000,0x00000000);
    __Vfunc_is_inside_nonidempotent_regions__153__pass = 0U;
    __Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k = 0U;
    while ((__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
            < ((__Vfunc_is_inside_nonidempotent_regions__153__Cfg[0xc6U] 
                << 0x1eU) | (__Vfunc_is_inside_nonidempotent_regions__153__Cfg[0xc5U] 
                             >> 2U)))) {
        vlSelf->__Vfunc_range_check__154__address = __Vfunc_is_inside_nonidempotent_regions__153__address;
        vlSelf->__Vfunc_range_check__154__len = ((0x1921U 
                                                  >= 
                                                  ((IData)(0x10a2U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                       << 6U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vfunc_is_inside_nonidempotent_regions__153__Cfg[
                                                                   (((IData)(0x10e1U) 
                                                                     + 
                                                                     (0x3ffU 
                                                                      & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x10a2U) 
                                                         + 
                                                         (0x3ffU 
                                                          & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                             << 6U)))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x10a2U) 
                                                         + 
                                                         (0x3ffU 
                                                          & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                             << 6U))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x10a2U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                               << 6U)))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vfunc_is_inside_nonidempotent_regions__153__Cfg[
                                                                       (((IData)(0x10c1U) 
                                                                         + 
                                                                         (0x3ffU 
                                                                          & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                             << 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x10a2U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                << 6U))))))) 
                                                     | ((QData)((IData)(
                                                                        __Vfunc_is_inside_nonidempotent_regions__153__Cfg[
                                                                        (((IData)(0x10a2U) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x10a2U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                << 6U)))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__154__base = ((0x1921U 
                                                   >= 
                                                   ((IData)(0x14a2U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                        << 6U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vfunc_is_inside_nonidempotent_regions__153__Cfg[
                                                                    (((IData)(0x14e1U) 
                                                                      + 
                                                                      (0x3ffU 
                                                                       & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x14a2U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                              << 6U)))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x14a2U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                              << 6U))))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x14a2U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                << 6U)))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vfunc_is_inside_nonidempotent_regions__153__Cfg[
                                                                        (((IData)(0x14c1U) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x14a2U) 
                                                             + 
                                                             (0x3ffU 
                                                              & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                 << 6U))))))) 
                                                      | ((QData)((IData)(
                                                                         __Vfunc_is_inside_nonidempotent_regions__153__Cfg[
                                                                         (((IData)(0x14a2U) 
                                                                           + 
                                                                           (0x3ffU 
                                                                            & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                               << 6U))) 
                                                                          >> 5U)])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x14a2U) 
                                                             + 
                                                             (0x3ffU 
                                                              & (__Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
                                                                 << 6U)))))))
                                                   : 0ULL);
        __Vtemp_haf7f6caa__0[0U] = (IData)(vlSelf->__Vfunc_range_check__154__address);
        __Vtemp_haf7f6caa__0[1U] = (IData)((vlSelf->__Vfunc_range_check__154__address 
                                            >> 0x20U));
        __Vtemp_haf7f6caa__0[2U] = 0U;
        __Vtemp_h49226311__0[0U] = (IData)(vlSelf->__Vfunc_range_check__154__base);
        __Vtemp_h49226311__0[1U] = (IData)((vlSelf->__Vfunc_range_check__154__base 
                                            >> 0x20U));
        __Vtemp_h49226311__0[2U] = 0U;
        __Vtemp_h19629e95__0[0U] = (IData)(vlSelf->__Vfunc_range_check__154__len);
        __Vtemp_h19629e95__0[1U] = (IData)((vlSelf->__Vfunc_range_check__154__len 
                                            >> 0x20U));
        __Vtemp_h19629e95__0[2U] = 0U;
        VL_ADD_W(3, __Vtemp_hde739647__0, __Vtemp_h49226311__0, __Vtemp_h19629e95__0);
        __Vtemp_hf49720bc__0[0U] = __Vtemp_hde739647__0[0U];
        __Vtemp_hf49720bc__0[1U] = __Vtemp_hde739647__0[1U];
        __Vtemp_hf49720bc__0[2U] = (1U & __Vtemp_hde739647__0[2U]);
        vlSelf->__Vfunc_range_check__154__Vfuncout 
            = ((vlSelf->__Vfunc_range_check__154__address 
                >= vlSelf->__Vfunc_range_check__154__base) 
               & VL_LT_W(3, __Vtemp_haf7f6caa__0, __Vtemp_hf49720bc__0));
        __Vfunc_is_inside_nonidempotent_regions__153__pass 
            = (((~ ((IData)(1U) << (0xfU & __Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k))) 
                & (IData)(__Vfunc_is_inside_nonidempotent_regions__153__pass)) 
               | (0xffffU & ((IData)(vlSelf->__Vfunc_range_check__154__Vfuncout) 
                             << (0xfU & __Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k))));
        __Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_nonidempotent_regions__153__unnamedblk1__DOT__k);
    }
    __Vfunc_is_inside_nonidempotent_regions__153__Vfuncout 
        = (0U != (IData)(__Vfunc_is_inside_nonidempotent_regions__153__pass));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__addr_ni 
        = __Vfunc_is_inside_nonidempotent_regions__153__Vfuncout;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
        = (0x3fffffffffffULL & ((0x2000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U])) 
                                                     >> 0xbU)))
                                 : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_hit 
        = (((((0x3fffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q) 
              == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
             & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q 
                        >> 0x2eU))) << 3U) | (((((0x3fffffffffffULL 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q) 
                                                 == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                                                & (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q 
                                                           >> 0x2eU))) 
                                               << 2U) 
                                              | (((((0x3fffffffffffULL 
                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q) 
                                                    == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                                                   & (IData)(
                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q 
                                                              >> 0x2eU))) 
                                                  << 1U) 
                                                 | (((0x3fffffffffffULL 
                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q) 
                                                     == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                                                    & (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__gen_cut__BRA__0__KET____DOT__i_tc_sram_wrapper__DOT__i_tc_sram__DOT__rdata_q 
                                                               >> 0x2eU))))));
    __Vfunc_is_inside_cacheable_regions__151__address 
        = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
           << 0xaU);
    VL_CONSTHI_W_1X(6434,6400,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000008);
    VL_CONSTLO_W_8X(6144,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000080,0x00000200,0x00000008,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5888,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5632,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5376,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(5120,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4864,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4608,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4352,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(4096,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x0000000c,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3840,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3584,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(3328,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000);
    VL_CONSTLO_W_8X(3072,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00040000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2816,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2560,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(2304,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000001,0x00000000);
    VL_CONSTLO_W_8X(2048,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00040000,0x00000000,0x00004000,0x00000004,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1792,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1536,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1280,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(1024,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000002,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(768,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(512,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(256,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000);
    VL_CONSTLO_W_8X(0,__Vfunc_is_inside_cacheable_regions__151__Cfg,0x00000000,0x00000000,0x00000000,0x00000001,0x00000002,0x00000000,0x00000000,0x00000000);
    __Vfunc_is_inside_cacheable_regions__151__pass = 0U;
    __Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k = 0U;
    while ((__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
            < ((__Vfunc_is_inside_cacheable_regions__151__Cfg[0x44U] 
                << 0x1eU) | (__Vfunc_is_inside_cacheable_regions__151__Cfg[0x43U] 
                             >> 2U)))) {
        vlSelf->__Vfunc_range_check__152__address = __Vfunc_is_inside_cacheable_regions__151__address;
        vlSelf->__Vfunc_range_check__152__len = ((0x1921U 
                                                  >= 
                                                  ((IData)(0x62U) 
                                                   + 
                                                   (0x3ffU 
                                                    & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                       << 6U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vfunc_is_inside_cacheable_regions__151__Cfg[
                                                                   (((IData)(0xa1U) 
                                                                     + 
                                                                     (0x3ffU 
                                                                      & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x62U) 
                                                         + 
                                                         (0x3ffU 
                                                          & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                             << 6U)))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x62U) 
                                                         + 
                                                         (0x3ffU 
                                                          & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                             << 6U))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x62U) 
                                                           + 
                                                           (0x3ffU 
                                                            & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                               << 6U)))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vfunc_is_inside_cacheable_regions__151__Cfg[
                                                                       (((IData)(0x81U) 
                                                                         + 
                                                                         (0x3ffU 
                                                                          & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                             << 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x62U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                << 6U))))))) 
                                                     | ((QData)((IData)(
                                                                        __Vfunc_is_inside_cacheable_regions__151__Cfg[
                                                                        (((IData)(0x62U) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x62U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                << 6U)))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__152__base = ((0x1921U 
                                                   >= 
                                                   ((IData)(0x462U) 
                                                    + 
                                                    (0x3ffU 
                                                     & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                        << 6U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vfunc_is_inside_cacheable_regions__151__Cfg[
                                                                    (((IData)(0x4a1U) 
                                                                      + 
                                                                      (0x3ffU 
                                                                       & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                          << 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x462U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                              << 6U)))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x462U) 
                                                          + 
                                                          (0x3ffU 
                                                           & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                              << 6U))))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x462U) 
                                                            + 
                                                            (0x3ffU 
                                                             & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                << 6U)))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vfunc_is_inside_cacheable_regions__151__Cfg[
                                                                        (((IData)(0x481U) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                              << 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x462U) 
                                                             + 
                                                             (0x3ffU 
                                                              & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                 << 6U))))))) 
                                                      | ((QData)((IData)(
                                                                         __Vfunc_is_inside_cacheable_regions__151__Cfg[
                                                                         (((IData)(0x462U) 
                                                                           + 
                                                                           (0x3ffU 
                                                                            & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                               << 6U))) 
                                                                          >> 5U)])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x462U) 
                                                             + 
                                                             (0x3ffU 
                                                              & (__Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
                                                                 << 6U)))))))
                                                   : 0ULL);
        __Vtemp_h8abb00d0__0[0U] = (IData)(vlSelf->__Vfunc_range_check__152__address);
        __Vtemp_h8abb00d0__0[1U] = (IData)((vlSelf->__Vfunc_range_check__152__address 
                                            >> 0x20U));
        __Vtemp_h8abb00d0__0[2U] = 0U;
        __Vtemp_h0336ea39__0[0U] = (IData)(vlSelf->__Vfunc_range_check__152__base);
        __Vtemp_h0336ea39__0[1U] = (IData)((vlSelf->__Vfunc_range_check__152__base 
                                            >> 0x20U));
        __Vtemp_h0336ea39__0[2U] = 0U;
        __Vtemp_hb491c9a4__0[0U] = (IData)(vlSelf->__Vfunc_range_check__152__len);
        __Vtemp_hb491c9a4__0[1U] = (IData)((vlSelf->__Vfunc_range_check__152__len 
                                            >> 0x20U));
        __Vtemp_hb491c9a4__0[2U] = 0U;
        VL_ADD_W(3, __Vtemp_h5695f994__0, __Vtemp_h0336ea39__0, __Vtemp_hb491c9a4__0);
        __Vtemp_h65e4bd65__0[0U] = __Vtemp_h5695f994__0[0U];
        __Vtemp_h65e4bd65__0[1U] = __Vtemp_h5695f994__0[1U];
        __Vtemp_h65e4bd65__0[2U] = (1U & __Vtemp_h5695f994__0[2U]);
        vlSelf->__Vfunc_range_check__152__Vfuncout 
            = ((vlSelf->__Vfunc_range_check__152__address 
                >= vlSelf->__Vfunc_range_check__152__base) 
               & VL_LT_W(3, __Vtemp_h8abb00d0__0, __Vtemp_h65e4bd65__0));
        __Vfunc_is_inside_cacheable_regions__151__pass 
            = (((~ ((IData)(1U) << (0xfU & __Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k))) 
                & (IData)(__Vfunc_is_inside_cacheable_regions__151__pass)) 
               | (0xffffU & ((IData)(vlSelf->__Vfunc_range_check__152__Vfuncout) 
                             << (0xfU & __Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k))));
        __Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_cacheable_regions__151__unnamedblk3__DOT__k);
    }
    __Vfunc_is_inside_cacheable_regions__151__Vfuncout 
        = (0U != (IData)(__Vfunc_is_inside_cacheable_regions__151__pass));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__paddr_is_nc 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__genblk4__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_en_q)) 
                 | (~ (IData)(__Vfunc_is_inside_cacheable_regions__151__Vfuncout))));
}
