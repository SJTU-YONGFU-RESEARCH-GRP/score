// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2391(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2391\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                            >> 0xaU))))) 
                  << 0x30U) | (((QData)((IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                     >> 8U))))) 
                                << 0x2cU) | (((QData)((IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                                   >> 6U))))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                                      >> 4U))))) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                                         >> 2U))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x10000000U 
                                                                       & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)) 
                                                                          << 0x1cU)) 
                                                                      | ((((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                                                            ? 
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x34U)))
                                                                            : 
                                                                           (2U 
                                                                            | (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x38U))))) 
                                                                          << 0x18U) 
                                                                         | ((((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                                                               ? 
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x2cU)))
                                                                               : 
                                                                              (2U 
                                                                               | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x30U))))) 
                                                                             << 0x14U) 
                                                                            | ((((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x24U)))
                                                                                 : 
                                                                                (2U 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x28U))))) 
                                                                                << 0x10U) 
                                                                               | ((((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x1cU)))
                                                                                 : 
                                                                                (2U 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x20U))))) 
                                                                                << 0xcU) 
                                                                                | ((((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x14U)))
                                                                                 : 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x18U))))) 
                                                                                << 8U) 
                                                                                | ((((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0xcU)))
                                                                                 : 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x10U))))) 
                                                                                << 4U) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 4U)))
                                                                                 : 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__index_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2392(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2392\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gnt_o 
        = ((0x1000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                       >> 1U)) | ((0x800U & (((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                  >> 0xaU)) 
                                              << 0xbU) 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                >> 1U))) 
                                  | ((0x400U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                   >> 2U))) 
                                     | ((0x200U & (
                                                   ((~ 
                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                      >> 8U)) 
                                                    << 9U) 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      >> 2U))) 
                                        | ((0x100U 
                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 3U))) 
                                           | ((0x80U 
                                               & (((~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                     >> 6U)) 
                                                   << 7U) 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                     >> 3U))) 
                                              | ((0x40U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 4U))) 
                                                 | ((0x20U 
                                                     & (((~ 
                                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                           >> 4U)) 
                                                         << 5U) 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                           >> 4U))) 
                                                    | ((0x10U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                              >> 5U))) 
                                                       | ((8U 
                                                           & (((~ 
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                                 >> 2U)) 
                                                               << 3U) 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                 >> 5U))) 
                                                          | ((4U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                    >> 6U))) 
                                                             | ((2U 
                                                                 & (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)) 
                                                                     << 1U) 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                       >> 6U))) 
                                                                | (1U 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                         >> 7U)))))))))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2393(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2393\n"); );
    // Init
    VlWide<30>/*959:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = (IData)((((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[2U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[4U])))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (IData)(((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[6U])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[8U])))));
    __Vtemp_1[3U] = (IData)((((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[6U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[8U])))) 
                             >> 0x20U));
    __Vtemp_1[4U] = (IData)(((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xaU])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xcU])))));
    __Vtemp_1[5U] = (IData)((((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xaU])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xcU])))) 
                             >> 0x20U));
    __Vtemp_1[6U] = (IData)(((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xfU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xeU])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x11U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x10U])))));
    __Vtemp_1[7U] = (IData)((((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xeU])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x10U])))) 
                             >> 0x20U));
    __Vtemp_1[8U] = (IData)(((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x13U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x12U])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x15U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x14U])))));
    __Vtemp_1[9U] = (IData)((((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x12U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x14U])))) 
                             >> 0x20U));
    __Vtemp_1[0xaU] = (IData)(((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                ? (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x16U])))
                                : (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x19U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x18U])))));
    __Vtemp_1[0xbU] = (IData)((((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x17U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x16U])))
                                 : (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x19U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x18U])))) 
                               >> 0x20U));
    __Vtemp_1[0xcU] = (IData)(((0x2000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                ? (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1bU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1aU])))
                                : (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1dU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1cU])))));
    __Vtemp_1[0xdU] = (IData)((((0x2000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1bU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1aU])))
                                 : (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1dU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1cU])))) 
                               >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[2U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[4U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_1[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_1[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_1[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = __Vtemp_1[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = __Vtemp_1[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = (IData)(((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[2U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = (IData)((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[2U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = (IData)(((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[4U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[6U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = (IData)((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[4U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[6U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = (IData)(((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[8U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xaU])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (IData)((((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[8U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xaU])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x14U] 
        = (IData)(((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xcU])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xeU])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x15U] 
        = (IData)((((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xcU])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xeU])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x16U] 
        = (IData)(((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x11U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x10U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x13U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x12U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x17U] 
        = (IData)((((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x11U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x10U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x13U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x12U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x18U] 
        = (IData)(((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x15U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x14U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x17U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x16U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x19U] 
        = (IData)((((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x15U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x14U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x17U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x16U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x18U]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x18U]))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1cU] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0x1dU] = 0U;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2394(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2394\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x2000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req) 
                             << 1U)) | (((IData)((0U 
                                                  != 
                                                  (0xc00U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)))) 
                                         << 0xcU) | 
                                        (((IData)((0U 
                                                   != 
                                                   (0x300U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)))) 
                                          << 0xbU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)))) 
                                             << 0xaU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)))) 
                                                << 9U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)))) 
                                                   << 8U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req)))) 
                                                      << 7U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x6000U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x1800U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x600U 
                                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x180U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x60U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                        << 1U) 
                                                                       | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2395(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2395\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                            >> 0xaU))))) 
                  << 0x30U) | (((QData)((IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                     >> 8U))))) 
                                << 0x2cU) | (((QData)((IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                                   >> 6U))))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                                      >> 4U))))) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                                         >> 2U))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x10000000U 
                                                                       & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)) 
                                                                          << 0x1cU)) 
                                                                      | ((((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                                                            ? 
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x34U)))
                                                                            : 
                                                                           (2U 
                                                                            | (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x38U))))) 
                                                                          << 0x18U) 
                                                                         | ((((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                                                               ? 
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x2cU)))
                                                                               : 
                                                                              (2U 
                                                                               | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x30U))))) 
                                                                             << 0x14U) 
                                                                            | ((((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x24U)))
                                                                                 : 
                                                                                (2U 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x28U))))) 
                                                                                << 0x10U) 
                                                                               | ((((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x1cU)))
                                                                                 : 
                                                                                (2U 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x20U))))) 
                                                                                << 0xcU) 
                                                                                | ((((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x14U)))
                                                                                 : 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x18U))))) 
                                                                                << 8U) 
                                                                                | ((((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0xcU)))
                                                                                 : 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x10U))))) 
                                                                                << 4U) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 4U)))
                                                                                 : 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__index_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2396(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2396\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gnt_o 
        = ((0x1000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                       >> 1U)) | ((0x800U & (((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                  >> 0xaU)) 
                                              << 0xbU) 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                >> 1U))) 
                                  | ((0x400U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                   >> 2U))) 
                                     | ((0x200U & (
                                                   ((~ 
                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                      >> 8U)) 
                                                    << 9U) 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      >> 2U))) 
                                        | ((0x100U 
                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 3U))) 
                                           | ((0x80U 
                                               & (((~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                     >> 6U)) 
                                                   << 7U) 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                     >> 3U))) 
                                              | ((0x40U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 4U))) 
                                                 | ((0x20U 
                                                     & (((~ 
                                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                           >> 4U)) 
                                                         << 5U) 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                           >> 4U))) 
                                                    | ((0x10U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                              >> 5U))) 
                                                       | ((8U 
                                                           & (((~ 
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                                 >> 2U)) 
                                                               << 3U) 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                 >> 5U))) 
                                                          | ((4U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                    >> 6U))) 
                                                             | ((2U 
                                                                 & (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)) 
                                                                     << 1U) 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                       >> 6U))) 
                                                                | (1U 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                         >> 7U)))))))))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2397(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2397\n"); );
    // Init
    VlWide<30>/*959:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = (IData)((((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[2U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[4U])))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (IData)(((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[6U])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[8U])))));
    __Vtemp_1[3U] = (IData)((((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[6U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[8U])))) 
                             >> 0x20U));
    __Vtemp_1[4U] = (IData)(((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xaU])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xcU])))));
    __Vtemp_1[5U] = (IData)((((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xaU])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xcU])))) 
                             >> 0x20U));
    __Vtemp_1[6U] = (IData)(((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xfU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xeU])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x11U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x10U])))));
    __Vtemp_1[7U] = (IData)((((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xeU])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x10U])))) 
                             >> 0x20U));
    __Vtemp_1[8U] = (IData)(((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x13U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x12U])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x15U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x14U])))));
    __Vtemp_1[9U] = (IData)((((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x12U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x14U])))) 
                             >> 0x20U));
    __Vtemp_1[0xaU] = (IData)(((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                ? (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x16U])))
                                : (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x19U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x18U])))));
    __Vtemp_1[0xbU] = (IData)((((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x17U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x16U])))
                                 : (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x19U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x18U])))) 
                               >> 0x20U));
    __Vtemp_1[0xcU] = (IData)(((0x2000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                ? (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1bU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1aU])))
                                : (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1dU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1cU])))));
    __Vtemp_1[0xdU] = (IData)((((0x2000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1bU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1aU])))
                                 : (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1dU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1cU])))) 
                               >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[2U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[4U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_1[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_1[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_1[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = __Vtemp_1[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = __Vtemp_1[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = (IData)(((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[2U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = (IData)((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[2U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = (IData)(((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[4U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[6U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = (IData)((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[4U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[6U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = (IData)(((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[8U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xaU])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (IData)((((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[8U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xaU])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x14U] 
        = (IData)(((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xcU])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xeU])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x15U] 
        = (IData)((((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xcU])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xeU])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x16U] 
        = (IData)(((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x11U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x10U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x13U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x12U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x17U] 
        = (IData)((((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x11U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x10U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x13U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x12U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x18U] 
        = (IData)(((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x15U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x14U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x17U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x16U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x19U] 
        = (IData)((((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x15U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x14U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x17U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x16U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x18U]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x18U]))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1cU] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0x1dU] = 0U;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2398(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2398\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x2000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req) 
                             << 1U)) | (((IData)((0U 
                                                  != 
                                                  (0xc00U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)))) 
                                         << 0xcU) | 
                                        (((IData)((0U 
                                                   != 
                                                   (0x300U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)))) 
                                          << 0xbU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)))) 
                                             << 0xaU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)))) 
                                                << 9U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)))) 
                                                   << 8U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req)))) 
                                                      << 7U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x6000U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x1800U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x600U 
                                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x180U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x60U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                        << 1U) 
                                                                       | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2399(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2399\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                            >> 0xaU))))) 
                  << 0x30U) | (((QData)((IData)((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                     >> 8U))))) 
                                << 0x2cU) | (((QData)((IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                                   >> 6U))))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                                      >> 4U))))) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                                         >> 2U))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x10000000U 
                                                                       & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)) 
                                                                          << 0x1cU)) 
                                                                      | ((((0x2000U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                                                            ? 
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x34U)))
                                                                            : 
                                                                           (2U 
                                                                            | (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x38U))))) 
                                                                          << 0x18U) 
                                                                         | ((((0x800U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                                                               ? 
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x2cU)))
                                                                               : 
                                                                              (2U 
                                                                               | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x30U))))) 
                                                                             << 0x14U) 
                                                                            | ((((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x24U)))
                                                                                 : 
                                                                                (2U 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x28U))))) 
                                                                                << 0x10U) 
                                                                               | ((((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x1cU)))
                                                                                 : 
                                                                                (2U 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x20U))))) 
                                                                                << 0xcU) 
                                                                                | ((((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x14U)))
                                                                                 : 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x18U))))) 
                                                                                << 8U) 
                                                                                | ((((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0xcU)))
                                                                                 : 
                                                                                (4U 
                                                                                | (3U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 0x10U))))) 
                                                                                << 4U) 
                                                                                | ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                                                                 ? 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 4U)))
                                                                                 : 
                                                                                (8U 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
                                                                                >> 8U)))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__index_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2400(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2400\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gnt_o 
        = ((0x1000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                       >> 1U)) | ((0x800U & (((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                  >> 0xaU)) 
                                              << 0xbU) 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                >> 1U))) 
                                  | ((0x400U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                   >> 2U))) 
                                     | ((0x200U & (
                                                   ((~ 
                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                      >> 8U)) 
                                                    << 9U) 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                      >> 2U))) 
                                        | ((0x100U 
                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                  >> 3U))) 
                                           | ((0x80U 
                                               & (((~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                     >> 6U)) 
                                                   << 7U) 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                     >> 3U))) 
                                              | ((0x40U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 4U))) 
                                                 | ((0x20U 
                                                     & (((~ 
                                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                           >> 4U)) 
                                                         << 5U) 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                           >> 4U))) 
                                                    | ((0x10U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                              >> 5U))) 
                                                       | ((8U 
                                                           & (((~ 
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                                 >> 2U)) 
                                                               << 3U) 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                 >> 5U))) 
                                                          | ((4U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                    >> 6U))) 
                                                             | ((2U 
                                                                 & (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)) 
                                                                     << 1U) 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                       >> 6U))) 
                                                                | (1U 
                                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                         >> 7U)))))))))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2401(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2401\n"); );
    // Init
    VlWide<30>/*959:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = (IData)((((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[2U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[4U])))) 
                             >> 0x20U));
    __Vtemp_1[2U] = (IData)(((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[6U])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[8U])))));
    __Vtemp_1[3U] = (IData)((((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[6U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[8U])))) 
                             >> 0x20U));
    __Vtemp_1[4U] = (IData)(((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xaU])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xcU])))));
    __Vtemp_1[5U] = (IData)((((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xaU])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xcU])))) 
                             >> 0x20U));
    __Vtemp_1[6U] = (IData)(((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xfU])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xeU])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x11U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x10U])))));
    __Vtemp_1[7U] = (IData)((((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xeU])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x10U])))) 
                             >> 0x20U));
    __Vtemp_1[8U] = (IData)(((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                              ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x13U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x12U])))
                              : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x15U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x14U])))));
    __Vtemp_1[9U] = (IData)((((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                               ? (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x12U])))
                               : (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x14U])))) 
                             >> 0x20U));
    __Vtemp_1[0xaU] = (IData)(((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                ? (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x16U])))
                                : (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x19U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x18U])))));
    __Vtemp_1[0xbU] = (IData)((((0x800U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x17U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x16U])))
                                 : (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x19U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x18U])))) 
                               >> 0x20U));
    __Vtemp_1[0xcU] = (IData)(((0x2000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                ? (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1bU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1aU])))
                                : (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1dU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1cU])))));
    __Vtemp_1[0xdU] = (IData)((((0x2000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1bU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1aU])))
                                 : (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1dU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1cU])))) 
                               >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = (IData)(((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[2U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[4U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_1[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_1[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_1[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = __Vtemp_1[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = __Vtemp_1[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = (IData)(((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[2U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = (IData)((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[2U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = (IData)(((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[4U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[6U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = (IData)((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[4U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[6U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = (IData)(((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[8U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xbU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xaU])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (IData)((((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[9U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[8U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xbU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xaU])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x14U] 
        = (IData)(((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xdU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xcU])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xfU])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xeU])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x15U] 
        = (IData)((((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xdU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xcU])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xfU])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0xeU])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x16U] 
        = (IData)(((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x11U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x10U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x13U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x12U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x17U] 
        = (IData)((((0x100U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x11U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x10U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x13U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x12U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x18U] 
        = (IData)(((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                    ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x15U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x14U])))
                    : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x17U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x16U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x19U] 
        = (IData)((((0x400U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req))
                     ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x15U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x14U])))
                     : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x17U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x16U])))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x18U]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT____Vcellinp__genblk5__BRA__0__KET____DOT__i_sel_rs1__data_i[0x18U]))) 
                   >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1cU] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0x1dU] = 0U;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2402(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2402\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x2000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req) 
                             << 1U)) | (((IData)((0U 
                                                  != 
                                                  (0xc00U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)))) 
                                         << 0xcU) | 
                                        (((IData)((0U 
                                                   != 
                                                   (0x300U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)))) 
                                          << 0xbU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      (0xc0U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)))) 
                                             << 0xaU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x30U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)))) 
                                                << 9U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xcU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)))) 
                                                   << 8U) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req)))) 
                                                      << 7U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x6000U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                         << 6U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x1800U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                            << 5U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0x600U 
                                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                               << 4U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x180U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                  << 3U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x60U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                     << 2U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                        << 1U) 
                                                                       | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2403(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2403\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0xfU 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__15__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (0xfU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__14__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xfU 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__13__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__12__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__11__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__10__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__9__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(
                                                                              (0xfU 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__8__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__7__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x1cU) 
                                                                                | ((0xf000000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__6__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x18U)) 
                                                                                | ((0xf00000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__5__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__4__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__3__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__2__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__1__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__0__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0xfU 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__15__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                               << 0x3cU) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__14__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xfU 
                                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__13__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__12__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__11__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__10__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            (0xfU 
                                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__9__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (0xfU 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__8__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__7__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x1cU) 
                                                                                | ((0xf000000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__6__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x18U)) 
                                                                                | ((0xf00000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__5__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__4__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__3__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__2__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__1__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__0__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[0U] 
        = __Vtemp_1[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[1U] 
        = __Vtemp_1[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[2U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__23__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
            << 0x1cU) | ((0xf000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__22__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                        << 0x18U)) 
                         | ((0xf00000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__21__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                          << 0x14U)) 
                            | ((0xf0000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__20__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                            << 0x10U)) 
                               | ((0xf000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__19__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                              << 0xcU)) 
                                  | ((0xf00U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__18__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                << 8U)) 
                                     | ((0xf0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__17__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                  << 4U)) 
                                        | (0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__16__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[3U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__31__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
            << 0x1cU) | ((0xf000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__30__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                        << 0x18U)) 
                         | ((0xf00000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__29__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                          << 0x14U)) 
                            | ((0xf0000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__28__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                            << 0x10U)) 
                               | ((0xf000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__27__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                              << 0xcU)) 
                                  | ((0xf00U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__26__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                << 8U)) 
                                     | ((0xf0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__25__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                  << 4U)) 
                                        | (0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__24__KET____DOT__genblk1__DOT__i_sel_fpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2404(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2404\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)((0xfU 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__15__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (0xfU 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__14__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xfU 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__13__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__12__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__11__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        (0xfU 
                                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__10__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xfU 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__9__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(
                                                                              (0xfU 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__8__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__7__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x1cU) 
                                                                                | ((0xf000000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__6__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x18U)) 
                                                                                | ((0xf00000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__5__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__4__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__3__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__2__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__1__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__0__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes))))))))))))))))))));
    __Vtemp_1[1U] = (IData)(((((QData)((IData)((0xfU 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__15__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                               << 0x3cU) | (((QData)((IData)(
                                                             (0xfU 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__14__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xfU 
                                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__13__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                << 0x34U) 
                                               | (((QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__12__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__11__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__10__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            (0xfU 
                                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__9__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (0xfU 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__8__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__7__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x1cU) 
                                                                                | ((0xf000000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__6__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x18U)) 
                                                                                | ((0xf00000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__5__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__4__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__3__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__2__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__1__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__0__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes))))))))))))))))))) 
                             >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[0U] 
        = __Vtemp_1[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[1U] 
        = __Vtemp_1[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[2U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__23__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
            << 0x1cU) | ((0xf000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__22__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                        << 0x18U)) 
                         | ((0xf00000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__21__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                          << 0x14U)) 
                            | ((0xf0000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__20__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                            << 0x10U)) 
                               | ((0xf000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__19__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                              << 0xcU)) 
                                  | ((0xf00U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__18__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                << 8U)) 
                                     | ((0xf0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__17__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                  << 4U)) 
                                        | (0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__16__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[3U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__31__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
            << 0x1cU) | ((0xf000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__30__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                        << 0x18U)) 
                         | ((0xf00000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__29__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                          << 0x14U)) 
                            | ((0xf0000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__28__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                            << 0x10U)) 
                               | ((0xf000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__27__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                              << 0xcU)) 
                                  | ((0xf00U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__26__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                << 8U)) 
                                     | ((0xf0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__25__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes) 
                                                  << 4U)) 
                                        | (0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_sel_clobbers__BRA__24__KET____DOT__i_sel_gpr_clobbers__DOT__gen_arbiter__DOT__data_nodes)))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2405(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2405\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_has_raw 
        = (([&]() {
                vlSelf->__Vfunc_is_imm_fpr__127__op 
                    = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                >> 7U));
                {
                    if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__127__op)) 
                           & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__127__op))) 
                          || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__127__op)) 
                              & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__127__op)))) 
                         || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__127__op)) 
                             & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__127__op))))) {
                        vlSelf->__Vfunc_is_imm_fpr__127__Vfuncout = 1U;
                        goto __Vlabel1548;
                    } else {
                        vlSelf->__Vfunc_is_imm_fpr__127__Vfuncout = 0U;
                        goto __Vlabel1548;
                    }
                    __Vlabel1548: ;
                }
            }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__127__Vfuncout))
            ? (IData)((0U != (0xfU & (((0U == (0x1fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (0x1fU 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                                   >> 0x18U)), 2U)))
                                        ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                                (((IData)(3U) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                                       >> 0x18U)), 2U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0x1fU 
                                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                                      >> 0x18U)), 2U))))) 
                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                         (3U & (VL_SHIFTL_III(7,32,32, 
                                                              (0x1fU 
                                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                                  >> 0x18U)), 2U) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (0x1fU 
                                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                                 >> 0x18U)), 2U)))))))
            : 0U);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2406(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2406\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_has_raw 
        = ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
               >> 0x15U)) & (([&]() {
                    vlSelf->__Vfunc_is_rs1_fpr__123__op 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                    >> 7U));
                    {
                        if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op)) 
                                     & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op))) 
                                    || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op))) 
                                   || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op))) 
                                  || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op))) 
                                 || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op))) 
                                || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op))) 
                               || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op))) 
                              || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op)) 
                                  & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op)))) 
                             || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__op)))) {
                            vlSelf->__Vfunc_is_rs1_fpr__123__Vfuncout = 1U;
                            goto __Vlabel1549;
                        } else {
                            vlSelf->__Vfunc_is_rs1_fpr__123__Vfuncout = 0U;
                            goto __Vlabel1549;
                        }
                        __Vlabel1549: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__123__Vfuncout))
                              ? (0U != (0xfU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                       >> 2U)), 2U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                                  (((IData)(3U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (0x1fU 
                                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                         >> 2U)), 2U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    (0x1fU 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                        >> 2U)), 2U))))) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,32,32, 
                                                                     (0x1fU 
                                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                         >> 2U)), 2U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    (0x1fU 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                        >> 2U)), 2U))))))
                              : (0U != (0xfU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0x1fU 
                                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                       >> 2U)), 2U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                                  (((IData)(3U) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (0x1fU 
                                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                         >> 2U)), 2U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    (0x1fU 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                        >> 2U)), 2U))))) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                                   (3U 
                                                    & (VL_SHIFTL_III(7,32,32, 
                                                                     (0x1fU 
                                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                         >> 2U)), 2U) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    (0x1fU 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                        >> 2U)), 2U))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_has_raw 
        = (([&]() {
                vlSelf->__Vfunc_is_rs2_fpr__125__op 
                    = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                >> 7U));
                {
                    if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)) 
                               & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op))) 
                              || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)) 
                                  & (0x6dU >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)))) 
                             || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)) 
                                 & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)))) 
                            || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op))) 
                           || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)) 
                               & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)))) 
                          || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op))) 
                         || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op)) 
                             & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__op))))) {
                        vlSelf->__Vfunc_is_rs2_fpr__125__Vfuncout = 1U;
                        goto __Vlabel1550;
                    } else {
                        vlSelf->__Vfunc_is_rs2_fpr__125__Vfuncout = 0U;
                        goto __Vlabel1550;
                    }
                    __Vlabel1550: ;
                }
            }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__125__Vfuncout))
            ? (0U != (0xfU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                             (0x1fU 
                                                              & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                  << 3U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                    >> 0x1dU))), 2U)))
                                ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                        (((IData)(3U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (0x1fU 
                                                              & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                  << 3U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                    >> 0x1dU))), 2U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0x1fU 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                               << 3U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                 >> 0x1dU))), 2U))))) 
                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                 (3U & (VL_SHIFTL_III(7,32,32, 
                                                      (0x1fU 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                           << 3U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                             >> 0x1dU))), 2U) 
                                        >> 5U))] >> 
                                 (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                        (0x1fU 
                                                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                             << 3U) 
                                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                               >> 0x1dU))), 2U))))))
            : (0U != (0xfU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                             (0x1fU 
                                                              & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                  << 3U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                    >> 0x1dU))), 2U)))
                                ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                        (((IData)(3U) 
                                          + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (0x1fU 
                                                              & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                  << 3U) 
                                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                    >> 0x1dU))), 2U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(7,32,32, 
                                                          (0x1fU 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                               << 3U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                 >> 0x1dU))), 2U))))) 
                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                 (3U & (VL_SHIFTL_III(7,32,32, 
                                                      (0x1fU 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                           << 3U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                             >> 0x1dU))), 2U) 
                                        >> 5U))] >> 
                                 (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                        (0x1fU 
                                                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                             << 3U) 
                                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                               >> 0x1dU))), 2U)))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2407(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2407\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_valid 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__req_nodes) 
           & (([&]() {
                    vlSelf->__Vfunc_is_rs1_fpr__124__op 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                    >> 7U));
                    {
                        if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op)) 
                                     & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op))) 
                                    || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op))) 
                                   || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op))) 
                                  || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op))) 
                                 || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op))) 
                                || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op))) 
                               || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op))) 
                              || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op)) 
                                  & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op)))) 
                             || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__op)))) {
                            vlSelf->__Vfunc_is_rs1_fpr__124__Vfuncout = 1U;
                            goto __Vlabel1551;
                        } else {
                            vlSelf->__Vfunc_is_rs1_fpr__124__Vfuncout = 0U;
                            goto __Vlabel1551;
                        }
                        __Vlabel1551: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__124__Vfuncout)) 
              | ((6U != (0xfU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                                (0x1fU 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                    >> 2U)), 2U)))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                           (((IData)(3U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, 
                                                                (0x1fU 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                    >> 2U)), 2U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0x1fU 
                                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                      >> 2U)), 2U))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                    (3U & (VL_SHIFTL_III(7,32,32, 
                                                         (0x1fU 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                             >> 2U)), 2U) 
                                           >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                              (0x1fU 
                                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                  >> 2U)), 2U)))))) 
                 | (0x1eU == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                       >> 7U))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2408(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2408\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_valid 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__req_nodes) 
           & (([&]() {
                    vlSelf->__Vfunc_is_rs2_fpr__126__op 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                    >> 7U));
                    {
                        if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)) 
                                   & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op))) 
                                  || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)) 
                                      & (0x6dU >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)))) 
                                 || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)) 
                                     & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)))) 
                                || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op))) 
                               || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)) 
                                   & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)))) 
                              || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op))) 
                             || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op)) 
                                 & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__op))))) {
                            vlSelf->__Vfunc_is_rs2_fpr__126__Vfuncout = 1U;
                            goto __Vlabel1552;
                        } else {
                            vlSelf->__Vfunc_is_rs2_fpr__126__Vfuncout = 0U;
                            goto __Vlabel1552;
                        }
                        __Vlabel1552: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__126__Vfuncout)) 
              | ((6U != (0xfU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                                (0x1fU 
                                                                 & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                     << 3U) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                       >> 0x1dU))), 2U)))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                           (((IData)(3U) 
                                             + (0x7fU 
                                                & VL_SHIFTL_III(7,32,32, 
                                                                (0x1fU 
                                                                 & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                     << 3U) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                       >> 0x1dU))), 2U))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  (0x1fU 
                                                                   & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                       << 3U) 
                                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                         >> 0x1dU))), 2U))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                    (3U & (VL_SHIFTL_III(7,32,32, 
                                                         (0x1fU 
                                                          & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                              << 3U) 
                                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                >> 0x1dU))), 2U) 
                                           >> 5U))] 
                                    >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                              (0x1fU 
                                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                                   << 3U) 
                                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                     >> 0x1dU))), 2U)))))) 
                 | (0x1eU == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                       >> 7U))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2409(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2409\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_waw = 1U;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_busy)))) {
        if ((([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__131__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__131__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__131__Vfuncout = 1U;
                                goto __Vlabel1553;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__131__Vfuncout = 0U;
                                goto __Vlabel1553;
                            }
                            __Vlabel1553: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__131__Vfuncout))
              ? (0U == (0xfU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               (0x1fU 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                   >> 0x18U)), 2U)))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                          (((IData)(3U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (0x1fU 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                   >> 0x18U)), 2U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                     >> 0x18U)), 2U))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_fpr[
                                   (3U & (VL_SHIFTL_III(7,32,32, 
                                                        (0x1fU 
                                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                            >> 0x18U)), 2U) 
                                          >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                             (0x1fU 
                                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                 >> 0x18U)), 2U))))))
              : (0U == (0xfU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               (0x1fU 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                   >> 0x18U)), 2U)))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                          (((IData)(3U) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (0x1fU 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                   >> 0x18U)), 2U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (0x1fU 
                                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                     >> 0x18U)), 2U))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rd_clobber_gpr[
                                   (3U & (VL_SHIFTL_III(7,32,32, 
                                                        (0x1fU 
                                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                            >> 0x18U)), 2U) 
                                          >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                             (0x1fU 
                                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                                 >> 0x18U)), 2U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_waw = 0U;
        }
        if ((([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__132__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout = 1U;
                                goto __Vlabel1554;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout = 0U;
                                goto __Vlabel1554;
                            }
                            __Vlabel1554: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout))
              ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_fpr_commit_id) 
                 & ((0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__waddr_commit_id)) 
                    == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                 >> 0x18U)))) : ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_gpr_commit_id) 
                                                 & ((0x1fU 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__waddr_commit_id)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                        >> 0x18U)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_waw = 0U;
        }
        if ((([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__132__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__132__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout = 1U;
                                goto __Vlabel1555;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout = 0U;
                                goto __Vlabel1555;
                            }
                            __Vlabel1555: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout))
              ? (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_fpr_commit_id) 
                  >> 1U) & ((0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__waddr_commit_id) 
                                      >> 5U)) == (0x1fU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                     >> 0x18U))))
              : (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_gpr_commit_id) 
                  >> 1U) & ((0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__waddr_commit_id) 
                                      >> 5U)) == (0x1fU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                     >> 0x18U)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_waw = 0U;
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_check_waw_dependencies__DOT__unnamedblk6__DOT__unnamedblk7__DOT__c = 2U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__gen_check_waw_dependencies__DOT__unnamedblk6__DOT__i = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_commit_valid 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_ready) 
           & (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U] 
                   >> 9U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro) 
                              & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_waw)) 
                                 & (0x48000U == (0x78000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU]))))) 
              & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_unissued_instr_ctrl_id))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__x_transaction_accepted_iro_sb 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_commit_valid) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_resp) 
              >> 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__x_transaction_rejected 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_resp) 
               >> 3U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_commit_valid));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__x_transaction_rejected_n = 0U;
    if ((9U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                        >> 0xfU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__x_transaction_rejected_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__x_transaction_rejected;
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2410(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2410\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs3 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__stall_acc_id;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3 = 0U;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_has_raw) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fpr))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs3 = 1U;
        }
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3 = 1U;
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2411(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2411\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs1 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__stall_acc_id;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1 = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_has_raw) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_valid)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs1 = 1U;
        }
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_valid) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1 = 1U;
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2412(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2412\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs2 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__stall_acc_id;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2 = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_has_raw) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_valid)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs2 = 1U;
        }
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_valid) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2 = 1U;
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2413(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2413\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__stall_acc_id;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_has_raw) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_valid)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw = 1U;
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_has_raw) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_valid)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw = 1U;
        }
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_has_raw) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fpr))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw = 1U;
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2414(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2414\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U] 
        = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U]) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile) 
              << 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile) 
            >> 0x1dU) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile 
                                  >> 0x20U)) << 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
        = (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile 
                     >> 0x20U)) >> 0x1dU) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile) 
                                             << 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile) 
            >> 0x1dU) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile 
                                  >> 0x20U)) << 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U] 
        = ((0x7ff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U]) 
           | (0x7fffU & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile 
                                  >> 0x20U)) >> 0x1dU)));
    VL_ASSIGNSEL_WQ(207,64,3U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n, 
                    (([&]() {
                    vlSelf->__Vfunc_is_imm_fpr__129__op 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                    >> 7U));
                    {
                        if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__129__op)) 
                               & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__129__op))) 
                              || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__129__op)) 
                                  & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__129__op)))) 
                             || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__129__op)) 
                                 & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__129__op))))) {
                            vlSelf->__Vfunc_is_imm_fpr__129__Vfuncout = 1U;
                            goto __Vlabel1556;
                        } else {
                            vlSelf->__Vfunc_is_imm_fpr__129__Vfuncout = 0U;
                            goto __Vlabel1556;
                        }
                        __Vlabel1556: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__129__Vfuncout))
                      ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile
                      : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[9U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U])) 
                                                  >> 0x18U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[0U] 
        = ((0xfffffff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[0U]) 
           | (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                    >> 0x13U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U] 
        = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U]) 
           | (0x7ff8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                         >> 4U)));
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
            = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0U])))) 
                  << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0U])))) 
                >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                                      >> 0x20U)) << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U] 
            = ((0x7ff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U]) 
               | (0x7fffU & ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                                      >> 0x20U)) >> 0x1dU)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U] 
            = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0U])))) 
                  << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0U])))) 
                >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                                      >> 0x20U)) << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
            = ((0xfffffff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U]) 
               | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                           >> 0x20U)) >> 0x1dU));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[0U] 
            = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[0U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0U])))) 
                  << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[1U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0U])))) 
                >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                                      >> 0x20U)) << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U] 
            = ((0xfffffff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U]) 
               | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__genblk5__BRA__0__KET____DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0U]))) 
                           >> 0x20U)) >> 0x1dU));
    }
    if ((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
            = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xdU])) 
                            << 0x2aU) | (((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xcU])) 
                                          << 0xaU) 
                                         | ((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) 
                                            >> 0x16U)))) 
                  << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xdU])) 
                          << 0x2aU) | (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xcU])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) 
                                        >> 0x16U)))) 
                >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xdU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xcU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) 
                                         >> 0x16U))) 
                                      >> 0x20U)) << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U] 
            = ((0x7ff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U]) 
               | (0x7fffU & ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xdU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xcU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) 
                                         >> 0x16U))) 
                                      >> 0x20U)) >> 0x1dU)));
    }
    if ((0x200000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
            = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U]) 
               | ((IData)((QData)((IData)((0x1fU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                            >> 2U))))) 
                  << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U] 
            = (((IData)((QData)((IData)((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                  >> 2U))))) 
                >> 0x1dU) | ((IData)(((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                          >> 2U)))) 
                                      >> 0x20U)) << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U] 
            = ((0x7ff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U]) 
               | (0x7fffU & ((IData)(((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                          >> 2U)))) 
                                      >> 0x20U)) >> 0x1dU)));
    }
    if ((((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
             >> 0x16U) & (2U != (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                         >> 0xfU)))) 
           & (4U != (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                             >> 0xfU)))) & (0xaU != 
                                            (0xfU & 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                              >> 0xfU)))) 
         & (~ ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__130__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__130__Vfuncout = 1U;
                                goto __Vlabel1557;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__130__Vfuncout = 0U;
                                goto __Vlabel1557;
                            }
                            __Vlabel1557: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__130__Vfuncout))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U] 
            = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU])) 
                            << 0x28U) | (((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[9U])) 
                                          << 8U) | 
                                         ((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U])) 
                                          >> 0x18U)))) 
                  << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[9U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U])) 
                                                  >> 0x18U)))) 
                >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[9U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U])) 
                                                   >> 0x18U))) 
                                      >> 0x20U)) << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
            = ((0xfffffff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U]) 
               | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU])) 
                             << 0x28U) | (((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[9U])) 
                                           << 8U) | 
                                          ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U])) 
                                           >> 0x18U))) 
                           >> 0x20U)) >> 0x1dU));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[0U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U])) 
                      << 0x3dU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                                                 >> 3U)))) 
            << 2U) | (3U & (~ (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs2) 
                                << 1U) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_rs1)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[1U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U])) 
                      << 0x3dU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                                                 >> 3U)))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                                                    >> 3U))) 
                                  >> 0x20U)) << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U])) 
                       << 0x3dU) | (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                                                  >> 3U))) 
                     >> 0x20U)) >> 0x1eU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                                                       << 0x3dU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U])) 
                                                          << 0x1dU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U])) 
                                                            >> 3U)))) 
                                             << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[3U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                      << 0x3dU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U])) 
                                                 >> 3U)))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U])) 
                                                    >> 3U))) 
                                  >> 0x20U)) << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[4U] 
        = ((0xfffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[4U]) 
           | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U])) 
                         << 0x3dU) | (((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U])) 
                                       >> 3U))) >> 0x20U)) 
              >> 0x1eU));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2415(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2415\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event)) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              & (0x8000U == (0x78000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event)) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              & (0x10000U == (0x78000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event)) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              & (0x20000U == (0x78000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event)) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              & ((IData)(((0x20000U == (0x78000U & 
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU])) 
                          & ((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                                              >> 7U))) 
                             | (0x13U == (0xffU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                                                   >> 7U)))))) 
                 & ((1U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xaU] 
                                     >> 0x18U))) | 
                    (5U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xaU] 
                                     >> 0x18U)))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event)) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              & (IData)(((0U == (0x1f000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xaU])) 
                         & (0x980U == (0x7f80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU]))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event)) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              & ((3U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                                 >> 0xfU))) | (5U == 
                                               (0xfU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                                                   >> 0xfU))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event)) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              & ((7U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                                 >> 0xfU))) | (8U == 
                                               (0xfU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                                                   >> 0xfU))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event)) 
           | ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
                        >> 1U) & (0x20U == (0x1e0U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U])))) 
              << 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event)) 
           | ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
                        >> 1U) & (0x40U == (0x1e0U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U])))) 
              << 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event)) 
           | ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
                        >> 1U) & (0x80U == (0x1e0U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U])))) 
              << 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event)) 
           | (0xfffffffeU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
                             & (((IData)(((0x80U == 
                                           (0x1e0U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U])) 
                                          & ((0U == 
                                              (0xffU 
                                               & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                                                   << 3U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                                                     >> 0x1dU)))) 
                                             | (0x13U 
                                                == 
                                                (0xffU 
                                                 & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                                                     << 3U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                                                       >> 0x1dU))))))) 
                                 & ((1U == (0x1fU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                                             >> 0xeU))) 
                                    | (5U == (0x1fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                                                 >> 0xeU))))) 
                                << 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event)) 
           | (0xfffffffeU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
                             & ((IData)(((0U == (0x7c000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U])) 
                                         & (0x13U == 
                                            (0xffU 
                                             & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                                                 << 3U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                                                   >> 0x1dU)))))) 
                                << 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event)) 
           | (0xfffffffeU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
                             & (((3U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                                                 >> 5U))) 
                                 | (5U == (0xfU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                                                   >> 5U)))) 
                                << 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event)) 
           | (0xfffffffeU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
                             & (((7U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                                                 >> 5U))) 
                                 | (8U == (0xfU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                                                   >> 5U)))) 
                                << 1U))));
    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
         [0U])) {
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] = 0U;
        } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [0U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [0U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] = 0U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [0U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_tlb_ctrl_ex;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] = 0U;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17 
                = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0U] 
                           >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[4U] 
                                       >> 0x16U)) | 
                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[8U] 
                          >> 0x1eU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
                         >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16;
        }
    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [0U])) {
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [0U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [0U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15 
                        = (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [0U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] = 0U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U] 
                        >> 4U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[4U] 
                                  >> 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__eret;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8;
        }
    } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [0U])) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [0U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7 
                    = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dtlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4;
        }
    } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [0U])) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__itlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2;
        }
    } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [0U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_miss_cache_perf;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[0U] = 0U;
    }
    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
         [1U])) {
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [1U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] = 0U;
        } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [1U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [1U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [1U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] = 0U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [1U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [1U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [1U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_tlb_ctrl_ex;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] = 0U;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [1U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17 
                = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0U] 
                           >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[4U] 
                                       >> 0x16U)) | 
                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[8U] 
                          >> 0x1eU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
                         >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16;
        }
    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [1U])) {
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [1U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [1U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [1U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15 
                        = (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [1U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [1U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [1U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] = 0U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U] 
                        >> 4U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[4U] 
                                  >> 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [1U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__eret;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8;
        }
    } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [1U])) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [1U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [1U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7 
                    = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [1U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dtlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4;
        }
    } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [1U])) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [1U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__itlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2;
        }
    } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [1U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_miss_cache_perf;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[1U] = 0U;
    }
    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
         [2U])) {
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] = 0U;
        } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [2U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [2U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [2U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] = 0U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [2U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [2U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [2U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_tlb_ctrl_ex;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] = 0U;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17 
                = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0U] 
                           >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[4U] 
                                       >> 0x16U)) | 
                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[8U] 
                          >> 0x1eU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
                         >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16;
        }
    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [2U])) {
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [2U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [2U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [2U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15 
                        = (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [2U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [2U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [2U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] = 0U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U] 
                        >> 4U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[4U] 
                                  >> 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__eret;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8;
        }
    } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [2U])) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [2U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [2U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7 
                    = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dtlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4;
        }
    } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [2U])) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__itlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2;
        }
    } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [2U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_miss_cache_perf;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[2U] = 0U;
    }
    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
         [3U])) {
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [3U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] = 0U;
        } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [3U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [3U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [3U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] = 0U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [3U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [3U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [3U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_tlb_ctrl_ex;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] = 0U;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [3U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17 
                = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0U] 
                           >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[4U] 
                                       >> 0x16U)) | 
                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[8U] 
                          >> 0x1eU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
                         >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16;
        }
    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [3U])) {
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [3U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [3U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [3U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15 
                        = (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [3U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [3U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [3U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] = 0U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U] 
                        >> 4U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[4U] 
                                  >> 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [3U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__eret;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8;
        }
    } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [3U])) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [3U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [3U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7 
                    = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [3U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dtlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4;
        }
    } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [3U])) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [3U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__itlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2;
        }
    } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [3U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_miss_cache_perf;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[3U] = 0U;
    }
    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
         [4U])) {
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] = 0U;
        } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [4U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [4U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [4U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] = 0U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [4U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [4U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [4U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_tlb_ctrl_ex;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] = 0U;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17 
                = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0U] 
                           >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[4U] 
                                       >> 0x16U)) | 
                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[8U] 
                          >> 0x1eU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
                         >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16;
        }
    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [4U])) {
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [4U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [4U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [4U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15 
                        = (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [4U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [4U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [4U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] = 0U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U] 
                        >> 4U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[4U] 
                                  >> 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__eret;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8;
        }
    } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [4U])) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [4U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [4U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7 
                    = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dtlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4;
        }
    } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [4U])) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__itlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2;
        }
    } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [4U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_miss_cache_perf;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[4U] = 0U;
    }
    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
         [5U])) {
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [5U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] = 0U;
        } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [5U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [5U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [5U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] = 0U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__22;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [5U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__fp_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__21;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__int_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__20;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [5U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [5U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_tlb_ctrl_ex;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__19;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] = 0U;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [5U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17 
                = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0U] 
                           >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[4U] 
                                       >> 0x16U)) | 
                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[8U] 
                          >> 0x1eU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__17;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
                         >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__16;
        }
    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [5U])) {
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [5U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [5U])) {
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                     [5U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15 
                        = (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__15;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__14;
                }
            } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                        [5U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__return_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__13;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__call_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__12;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [5U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [5U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] = 0U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U] 
                        >> 4U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[4U] 
                                  >> 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__10;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [5U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__branch_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__9;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__eret;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__8;
        }
    } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [5U])) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [5U])) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                 [5U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7 
                    = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__7;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6 
                    = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__store_event));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__6;
            }
        } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                    [5U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5 
                = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__load_event));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__5;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dtlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__4;
        }
    } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [5U])) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
             [5U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__itlb_miss_ex_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__3;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__2;
        }
    } else if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                [5U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_miss_cache_perf;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hf579dcf5__1;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events[5U] = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
        [5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
        [4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
        [3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
        [2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
        [1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
        [0U];
    if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__debug_mode_q)) 
               & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_csr_perf))))) {
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events
             [0U] & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcountinhibit_q) 
                        >> 3U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0 
                = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
                   [0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0;
        }
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events
             [1U] & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcountinhibit_q) 
                        >> 4U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0 
                = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
                   [1U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0;
        }
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events
             [2U] & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcountinhibit_q) 
                        >> 5U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0 
                = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
                   [2U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0;
        }
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events
             [3U] & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcountinhibit_q) 
                        >> 6U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0 
                = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
                   [3U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0;
        }
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events
             [4U] & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcountinhibit_q) 
                        >> 7U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0 
                = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
                   [4U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0;
        }
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__events
             [5U] & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mcountinhibit_q) 
                        >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0 
                = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
                   [5U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_ha4c828c1__0;
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_csr_perf) {
        if (((0xb03U <= (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                   >> 1U))) & (0xb09U 
                                               > (0xfffU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                     >> 1U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hb07b942f__0 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_csr_perf;
            if ((5U >= (7U & ((0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                         >> 1U)) - (IData)(3U))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_d[(7U 
                                                                                & ((0xfffU 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                                                >> 1U)) 
                                                                                - (IData)(3U)))] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT____Vlvbound_hb07b942f__0;
            }
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2416(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2416\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hbd0fab91__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hbd0fab91__0 = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__issue_ack = 0U;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_busy)))) {
        if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_raw)) 
                   & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall_waw))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__issue_ack = 1U;
        }
        if ((0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__issue_ack = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__issue_ack;
    if ((IData)(((0x48000U == (0x78000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) 
                 & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__x_transaction_accepted_iro_sb) 
                       | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__x_transaction_rejected)))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U] 
                >> 9U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__alu_valid_n = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_valid_n = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__csr_valid_n = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_n = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_n = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__mult_valid_n = 0U;
    if ((((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U] 
              >> 9U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb))) {
        if ((0x40000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
            if ((7U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                >> 0xfU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_n 
                    = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                             >> 0xdU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_n 
                    = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                             >> 0x1aU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 1U;
            } else if ((8U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                       >> 0xfU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_n 
                    = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                             >> 0xfU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_n 
                    = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                             >> 0xdU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 1U;
            }
        } else if ((0x20000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
            if ((0x10000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                if ((0x8000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                    if ((7U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 0xfU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_n 
                            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                     >> 0xdU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_n 
                            = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                     >> 0x1aU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 1U;
                    } else if ((8U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                               >> 0xfU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_n 
                            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                     >> 0xfU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_n 
                            = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                     >> 0xdU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 1U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                             >> 0x10U)))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                          >> 0xfU)))) {
                if ((7U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                    >> 0xfU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_n 
                        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                 >> 0xdU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_n 
                        = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                 >> 0x1aU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 1U;
                } else if ((8U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                           >> 0xfU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_n 
                        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                 >> 0xfU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_n 
                        = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                                 >> 0xdU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 1U;
                }
            }
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__lsu_valid_n = 0U;
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                      >> 0x12U)))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                          >> 0x11U)))) {
                if ((0x10000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                    if ((0x8000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__alu_valid_n = 1U;
                    }
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                  >> 0xfU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__lsu_valid_n = 1U;
                    }
                } else if ((0x8000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__lsu_valid_n = 1U;
                }
            }
            if ((0x20000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                              >> 0x10U)))) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                  >> 0xfU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_valid_n = 1U;
                    }
                    if ((0x8000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__mult_valid_n = 1U;
                    }
                }
                if ((0x10000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                  >> 0xfU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__csr_valid_n = 1U;
                    }
                }
            }
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__lsu_valid_n = 0U;
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_unissued_instr_ctrl_id) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__alu_valid_n = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_valid_n = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__csr_valid_n = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_n = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__mult_valid_n = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__lsu_valid_n = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_d 
        = ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U] 
               >> 9U)) & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb) 
                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro)) 
                          & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_unissued_instr_ctrl_id)) 
                             & (0x50000U == (0x78000U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hbd0fab91__0 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb) 
           & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_instr_issue_id 
        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hbd0fab91__0;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_q;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_ex) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_d) 
              & (0x5c80U == (0x7f80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU]))) 
             ^ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_ld_disp))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_d 
                = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_ld_disp)
                            ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_q) 
                               - (IData)(1U)) : ((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_q))));
        }
        if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_d) 
              & (0x5d00U == (0x7f80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU]))) 
             ^ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_st_disp))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_d 
                = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_st_disp)
                            ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_q) 
                               - (IData)(1U)) : ((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_q))));
        }
    }
}

extern const VlWide<36>/*1151:0*/ Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2417(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2417\n"); );
    // Init
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0 = 0;
    CData/*7:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h99c809a4__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h99c809a4__0 = 0;
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_hd14f6bc2__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_hd14f6bc2__0 = 0;
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he5a0eb47__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he5a0eb47__0 = 0;
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he60b0aba__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he60b0aba__0 = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h2324a310__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h2324a310__0 = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[1U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[2U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[3U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[4U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[5U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[6U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[7U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[8U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[9U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xaU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xbU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xcU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xdU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xeU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0xeU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xfU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0xfU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x10U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x10U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x11U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x11U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x12U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x12U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x13U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x13U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x14U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x15U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x15U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x16U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x16U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x17U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x17U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x18U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x19U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1aU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x1aU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1bU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x1bU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1cU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x1cU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1dU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x1dU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1eU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x1eU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1fU] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x1fU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x20U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x20U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x21U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x21U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x22U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x22U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U] 
        = Vara_tb_verilator__ConstPool__CONST_h3f1861b2_0[0x23U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x22U] 
        = (IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_if)) 
                    << 0x22U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_instr_issue_id)) 
                                  << 0x21U) | (((QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (3U 
                                                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
                                                                   << 0x12U) 
                                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                                     >> 0xeU))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U] 
        = ((0x7ff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U]) 
           | (0x7fffU & (IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_if)) 
                                   << 0x22U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_instr_issue_id)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (~ (IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_queue_empty))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                                         >> 0xeU))))))) 
                                 >> 0x20U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x21U] 
        = ((0x7fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x21U]) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_compressed_rvc) 
              << 0x1fU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U] 
        = ((0xfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U]) 
           | (0x7000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer) 
                         << 0xcU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U] 
        = ((0x7fc7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U]) 
           | (0x7ff8U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_unissued_instr_ctrl_id) 
                          << 5U) | ((0x10U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xeU] 
                                              >> 0x13U)) 
                                    | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_instr_issue_id) 
                                       << 3U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1dU] 
        = ((0x7fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1dU]) 
           | (0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U] 
                             << 0x1cU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1eU] 
        = (((0x70000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U] 
                            << 0x1cU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[2U] 
                                          >> 4U)) | 
           (0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U] 
                           << 0x1cU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1fU] 
        = (((0x70000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
                            << 0x1cU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[3U] 
                                          >> 4U)) | 
           (0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
                           << 0x1cU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x20U] 
        = (((0x70000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U] 
                            << 0x1cU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[4U] 
                                          >> 4U)) | 
           (0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U] 
                           << 0x1cU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x21U] 
        = ((0x80000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x21U]) 
           | ((0x70000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[6U] 
                              << 0x1cU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_n[5U] 
                                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x12U] 
        = ((0x3ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x12U]) 
           | (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[6U])) 
                         << 0x35U) | (((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[5U])) 
                                       << 0x15U) | 
                                      ((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[4U])) 
                                       >> 0xbU)))) 
               << 0xdU) | ((0x1000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U] 
                                       << 0xcU)) | 
                           ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl) 
                            << 0xaU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x13U] 
        = (((0x3ffU & ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[6U])) 
                                 << 0x35U) | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[5U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[4U])) 
                                                 >> 0xbU)))) 
                       >> 0x13U)) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl) 
                                     >> 0x16U)) | (
                                                   (0x1c00U 
                                                    & ((IData)(
                                                               (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[6U])) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[5U])) 
                                                                    << 0x15U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[4U])) 
                                                                      >> 0xbU)))) 
                                                       >> 0x13U)) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[6U])) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[5U])) 
                                                                    << 0x15U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[4U])) 
                                                                      >> 0xbU))) 
                                                               >> 0x20U)) 
                                                      << 0xdU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U] 
        = ((0xffffe000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U]) 
           | ((0x3ffU & ((IData)(((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[6U])) 
                                    << 0x35U) | (((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[5U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[4U])) 
                                                    >> 0xbU))) 
                                  >> 0x20U)) >> 0x13U)) 
              | (0x1c00U & ((IData)(((((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[6U])) 
                                       << 0x35U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[5U])) 
                                        << 0x15U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[4U])) 
                                        >> 0xbU))) 
                                     >> 0x20U)) >> 0x13U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xfU] 
        = ((0x3fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xfU]) 
           | (0xc0000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                             << 0xfU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x10U] 
        = (((0x3ffffc00U & ((IData)((((QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                      << 0x25U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                                    << 5U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                      >> 0x1bU)))) 
                            << 0xaU)) | ((0x3c0U & 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                           >> 5U)) 
                                         | (0x3fU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                             >> 0x11U)))) 
           | (0xc0000000U & ((IData)((((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                       << 0x25U) | 
                                      (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                        << 5U) | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                  >> 0x1bU)))) 
                             << 0xaU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x11U] 
        = ((((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                       << 0x25U) | (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                     << 5U) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                               >> 0x1bU)))) 
             >> 0x16U) | (0x3ffffc00U & ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                                    << 0x25U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                                       << 5U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                         >> 0x1bU))) 
                                                  >> 0x20U)) 
                                         << 0xaU))) 
           | (0xc0000000U & ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                         << 5U) | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                   >> 0x1bU))) 
                                      >> 0x20U)) << 0xaU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x12U] 
        = ((0xfffffc00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x12U]) 
           | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                         << 0x25U) | (((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                       << 5U) | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                       >> 0x20U)) >> 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[5U] 
        = ((0x7ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[5U]) 
           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[0U] 
              << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[6U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[0U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[1U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[7U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[1U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[2U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[8U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[2U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[3U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[9U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[3U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[4U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xaU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[4U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[5U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xbU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[5U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[6U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xcU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[6U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[7U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xdU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[7U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[8U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xeU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[8U] 
            >> 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[9U] 
                      << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xfU] 
        = ((0xc0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0xfU]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[9U] 
               >> 5U) | (0x38000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                        << 0x1bU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[4U] 
        = (IData)(((0x1fffffffffffffeULL & (((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                                                             [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][4U])) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                                                                [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][3U])) 
                                                << 0x16U) 
                                               | (0x3ffffffffffffeULL 
                                                  & ((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                                                                     [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][2U])) 
                                                     >> 0xaU))))) 
                   | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__debug_mode_q))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[5U] 
        = ((0xfe000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[5U]) 
           | (IData)((((0x1fffffffffffffeULL & (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                                                                 [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][4U])) 
                                                 << 0x36U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                                                                    [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][3U])) 
                                                    << 0x16U) 
                                                   | (0x3ffffffffffffeULL 
                                                      & ((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                                                                         [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][2U])) 
                                                         >> 0xaU))))) 
                       | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__debug_mode_q))) 
                      >> 0x20U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U] 
        = ((0x703fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x23U]) 
           | (0x7fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                         << 6U)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0 
        = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xdU])) 
            << 0x2aU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xcU])) 
                          << 0xaU) | ((QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU])) 
                                      >> 0x16U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U] 
        = ((0x7fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0) 
              << 0x1fU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1aU] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0) 
            >> 1U) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0 
                               >> 0x20U)) << 0x1fU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1bU] 
        = ((0x80000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1bU]) 
           | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0 
                       >> 0x20U)) >> 1U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h99c809a4__0 
        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                    >> 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U] 
        = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h99c809a4__0) 
              << 0xfU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_hd14f6bc2__0 
        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                    >> 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U] 
        = ((0xfffffc1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_hd14f6bc2__0) 
              << 5U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he5a0eb47__0 
        = (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU] 
                     << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xaU] 
                               >> 0x1dU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U] 
        = ((0x7ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he5a0eb47__0) 
              << 0x1bU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he60b0aba__0 
        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xaU] 
                    >> 0x18U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U] 
        = ((0xffc1ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he60b0aba__0) 
              << 0x11U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0 
        = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xaU])) 
            << 0x28U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[9U])) 
                          << 8U) | ((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U])) 
                                    >> 0x18U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U] 
        = ((0x1ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0) 
              << 0x11U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x15U] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0) 
            >> 0xfU) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0 
                                 >> 0x20U)) << 0x11U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x16U] 
        = ((0xfffe0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x16U]) 
           | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0 
                       >> 0x20U)) >> 0xfU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h2324a310__0 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[8U] 
                 >> 0x17U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U] 
        = ((0xffff7fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h2324a310__0) 
              << 0xfU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0 
        = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x1bU])) 
            << 0x34U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x1aU])) 
                          << 0x14U) | ((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U])) 
                                       >> 0xcU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1bU] 
        = ((0x7fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1bU]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0) 
              << 0x1fU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1cU] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0) 
            >> 1U) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0 
                               >> 0x20U)) << 0x1fU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1dU] 
        = ((0x80000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x1dU]) 
           | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h40a13026__0 
                       >> 0x20U)) >> 1U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h99c809a4__0 
        = (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x19U] 
                     << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                               >> 0x1dU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U] 
        = ((0x807fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h99c809a4__0) 
              << 0x17U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_hd14f6bc2__0 
        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                    >> 0x18U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U] 
        = ((0xffff83ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_hd14f6bc2__0) 
              << 0xaU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he5a0eb47__0 
        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                    >> 0x13U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x19U]) 
           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he5a0eb47__0));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he60b0aba__0 
        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U] 
                    >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U] 
        = ((0xf83fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_he60b0aba__0) 
              << 0x16U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0 
        = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x18U])) 
            << 0x32U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x17U])) 
                          << 0x12U) | ((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x16U])) 
                                       >> 0xeU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x16U] 
        = ((0x1ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x16U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0) 
              << 0x11U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x17U] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0) 
            >> 0xfU) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0 
                                 >> 0x20U)) << 0x11U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U] 
        = ((0xfffe0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x18U]) 
           | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h367c1117__0 
                       >> 0x20U)) >> 0xfU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h2324a310__0 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0x16U] 
                 >> 0xdU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U] 
        = ((0xfffeffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT____Vlvbound_h2324a310__0) 
              << 0x10U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U] 
        = ((0xffff9fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0x14U]) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_drop_id_commit) 
              << 0xdU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[5U] 
        = ((0xf9ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[5U]) 
           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack) 
              << 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wdata_commit_id[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wdata_commit_id[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wdata_commit_id[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_cva6_rvfi_probes__DOT__instr[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wdata_commit_id[3U];
}

extern const VlWide<14>/*447:0*/ Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vara_tb_verilator__ConstPool__TABLE_h9feb95fa_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2418(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2418\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<14>/*447:0*/ __Vtemp_3;
    VlWide<14>/*447:0*/ __Vtemp_4;
    // Body
    VL_ASSIGN_W(3528,vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__num_issue = 0U;
    if ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xeU] 
           >> 0x17U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_instr_issue_id)) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_unissued_instr_ctrl_id)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__num_issue 
            = (1U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__num_issue)));
        __Vtemp_3[0U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[2U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[1U] 
                                          >> 1U)));
        __Vtemp_3[1U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[1U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[3U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[2U] 
                                          >> 1U)));
        __Vtemp_3[2U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[2U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[4U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[3U] 
                                          >> 1U)));
        __Vtemp_3[3U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[3U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[5U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[4U] 
                                          >> 1U)));
        __Vtemp_3[4U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[4U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[6U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[5U] 
                                          >> 1U)));
        __Vtemp_3[5U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[5U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[7U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[6U] 
                                          >> 1U)));
        __Vtemp_3[6U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[6U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[8U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[7U] 
                                          >> 1U)));
        __Vtemp_3[7U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[7U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[9U] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[8U] 
                                          >> 1U)));
        __Vtemp_3[8U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[8U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xaU] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[9U] 
                                          >> 1U)));
        __Vtemp_3[9U] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[9U] 
                         & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xbU] 
                             << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xaU] 
                                          >> 1U)));
        __Vtemp_3[0xaU] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xaU] 
                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xcU] 
                               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xbU] 
                                            >> 1U)));
        __Vtemp_3[0xbU] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xbU] 
                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xdU] 
                               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xcU] 
                                            >> 1U)));
        __Vtemp_3[0xcU] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xcU] 
                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xeU] 
                               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xdU] 
                                            >> 1U)));
        __Vtemp_3[0xdU] = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xdU] 
                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xeU] 
                              >> 1U));
        VL_CONCAT_WIW(439,1,438, __Vtemp_4, ([&]() {
                    vlSelf->__Vfunc_is_rd_fpr__42__op 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xcU] 
                                    >> 8U));
                    {
                        if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)) 
                                     & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op))) 
                                    || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)) 
                                        & (0x72U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)))) 
                                   || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op))) 
                                  || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op))) 
                                 || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op))) 
                                || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op))) 
                               || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)) 
                                   & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)))) 
                              || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)) 
                                  & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)))) 
                             || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__42__op)))) {
                            vlSelf->__Vfunc_is_rd_fpr__42__Vfuncout = 1U;
                            goto __Vlabel1558;
                        } else {
                            vlSelf->__Vfunc_is_rd_fpr__42__Vfuncout = 0U;
                            goto __Vlabel1558;
                        }
                        __Vlabel1558: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__42__Vfuncout)), __Vtemp_3);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[0U] 
            = __Vtemp_4[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[1U] 
            = __Vtemp_4[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[2U] 
            = __Vtemp_4[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[3U] 
            = __Vtemp_4[3U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[4U] 
            = __Vtemp_4[4U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[5U] 
            = __Vtemp_4[5U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[6U] 
            = __Vtemp_4[6U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[7U] 
            = __Vtemp_4[7U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[8U] 
            = __Vtemp_4[8U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[9U] 
            = __Vtemp_4[9U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[0xaU] 
            = __Vtemp_4[0xaU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[0xbU] 
            = __Vtemp_4[0xbU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[0xcU] 
            = __Vtemp_4[0xcU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0[0xdU] 
            = (0x1000000U | __Vtemp_4[0xdU]);
        if (VL_LIKELY((0xdc7U >= (0xfffU & ((IData)(0x1b9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer))))))) {
            VL_ASSIGNSEL_WW(3528,441,(0xfffU & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer)))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hae8b2dfd__0);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_fifo__DOT__unnamedblk3__DOT__i = 1U;
    if ((IData)(((0U == (0x78000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0xbU])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0xdU] 
                    >> 0x18U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[8U] 
            = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[8U]);
    }
    if ((IData)(((0U == (0xf00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x19U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x1bU] 
                    >> 0x11U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x16U] 
            = (0x10000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x16U]);
    }
    if ((IData)(((0U == (0x1eU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x27U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x29U] 
                    >> 0xaU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x24U] 
            = (0x200U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x24U]);
    }
    if ((IData)(((0U == (0x3c000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x34U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x37U] 
                    >> 3U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x32U] 
            = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x32U]);
    }
    if ((IData)(((0U == (0x780000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x42U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x44U] 
                    >> 0x1cU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x3fU] 
            = (0x8000000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x3fU]);
    }
    if ((IData)(((0U == (0xf000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x50U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x52U] 
                    >> 0x15U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4dU] 
            = (0x100000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4dU]);
    }
    if ((IData)(((0U == (0x1e0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x5eU])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x60U] 
                    >> 0xeU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5bU] 
            = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5bU]);
    }
    if (((0U == (0xfU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x6cU] 
                          << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x6bU] 
                                    >> 0x1eU)))) & 
         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x6eU] 
          >> 7U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x69U] 
            = (0x40U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x69U]);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_fifo__DOT__unnamedblk4__DOT__i = 8U;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
         & ((0xdc7U >= ((IData)(0x1b8U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))) 
            && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                      (((IData)(0x1b8U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                       >> 5U)] >> (0x1fU & ((IData)(0x1b8U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))))))) {
        if ((((0xdc7U >= ((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))) 
              && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                        (((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                         >> 5U)] >> (0x1fU & ((IData)(2U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))))) 
             & ((0xdc7U >= ((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))) 
                && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                          (((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                           >> 5U)] >> (0x1fU & ((IData)(4U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))))))) {
            if (((0xdc7U >= ((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))) 
                 && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                           (((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                            >> 5U)] >> (0x1fU & ((IData)(3U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)) 
                                                   - (IData)(1U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                ((7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)) 
                                                                                - (IData)(1U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       ((7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)) 
                                                        - (IData)(1U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    ((7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)) 
                                                     - (IData)(1U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      ((7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)) 
                                                       - (IData)(1U))))))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1 = 0U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))));
                }
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2 = 1U;
            if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x117U) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) 
                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                        (((IData)(0x117U) + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                         >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2) 
                                     << (0x1fU & ((IData)(0x117U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))));
            }
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[0U])));
        if (VL_LIKELY((0xdc7U >= ((IData)(0x118U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(0x118U) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0xdc7U >= ((IData)(6U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(6U) + 
                                     (0xfffU & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0);
        }
        if ((9U == ((0xdc7U >= ((IData)(0x16fU) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                          (((IData)(0x172U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                   (((IData)(0x16fU) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0 
                = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)
                    ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_rd_ex_id)
                    : 0U);
            if (VL_LIKELY((0xdc7U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
                VL_ASSIGNSEL_WI(3528,5,((IData)(0x158U) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0);
            }
        }
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[1U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[2U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[3U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[4U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[5U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[6U] 
                = (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[6U]);
            if (VL_LIKELY((0xdc7U >= ((IData)(0x49U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
                VL_ASSIGNSEL_WW(3528,203,((IData)(0x49U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0);
            }
        } else if (((7U == ((0xdc7U >= ((IData)(0x16fU) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x172U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x16fU) 
                                                       + 
                                                       (0xfffU 
                                                        & ((IData)(0x1b9U) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x16fU) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))))
                             : 0U)) | (8U == ((0xdc7U 
                                               >= ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x16fU) 
                                                           + 
                                                           (0xfffU 
                                                            & ((IData)(0x1b9U) 
                                                               * 
                                                               (7U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x172U) 
                                                         + 
                                                         (0xfffU 
                                                          & ((IData)(0x1b9U) 
                                                             * 
                                                             (7U 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x16fU) 
                                                          + 
                                                          (0xfffU 
                                                           & ((IData)(0x1b9U) 
                                                              * 
                                                              (7U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[6U])) 
                    << 0x35U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[5U])) 
                                  << 0x15U) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[4U])) 
                                               >> 0xbU)));
            if (VL_LIKELY((0xdc7U >= ((IData)(0xd4U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id)))))))) {
                VL_ASSIGNSEL_WQ(3528,64,((IData)(0xd4U) 
                                         + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 1U) & ((0xdc7U >= ((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U)))))) 
                    && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                              (((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U))))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(0x1b8U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U))))))))))) {
        if ((((0xdc7U >= ((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U)))))) 
              && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                        (((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U))))) 
                         >> 5U)] >> (0x1fU & ((IData)(2U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 3U))))))))) 
             & ((0xdc7U >= ((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 3U)))))) 
                && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                          (((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 3U))))) 
                           >> 5U)] >> (0x1fU & ((IData)(4U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U))))))))))) {
            if (((0xdc7U >= ((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 3U)))))) 
                 && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                           (((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 3U))))) 
                            >> 5U)] >> (0x1fU & ((IData)(3U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 3U)))))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 3U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 3U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U))))))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U)) 
                                                   - (IData)(1U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                ((7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 3U)) 
                                                                                - (IData)(1U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       ((7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 3U)) 
                                                        - (IData)(1U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    ((7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 3U)) 
                                                     - (IData)(1U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      ((7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 3U)) 
                                                       - (IData)(1U))))))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1 = 0U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 3U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 3U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U))))))));
                }
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2 = 1U;
            if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U)))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x117U) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U)))))))) 
                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                        (((IData)(0x117U) + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U))))) 
                         >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2) 
                                     << (0x1fU & ((IData)(0x117U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U))))))));
            }
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[2U])));
        if (VL_LIKELY((0xdc7U >= ((IData)(0x118U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                   >> 3U)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(0x118U) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0xdc7U >= ((IData)(6U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 3U)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(6U) + 
                                     (0xfffU & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0);
        }
        if ((9U == ((0xdc7U >= ((IData)(0x16fU) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                          (((IData)(0x172U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 3U))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                   (((IData)(0x16fU) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 3U)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0 
                = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)
                    ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_rd_ex_id)
                    : 0U);
            if (VL_LIKELY((0xdc7U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U)))))))) {
                VL_ASSIGNSEL_WI(3528,5,((IData)(0x158U) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0);
            }
        }
        if ((0x800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[6U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[7U] 
                    << 0x15U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[6U] 
                                 >> 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[8U] 
                    << 0x15U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[7U] 
                                 >> 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[9U] 
                    << 0x15U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[8U] 
                                 >> 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xaU] 
                    << 0x15U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[9U] 
                                 >> 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[4U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xbU] 
                    << 0x15U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xaU] 
                                 >> 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[5U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xcU] 
                    << 0x15U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xbU] 
                                 >> 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[6U] 
                = (0x7ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xcU] 
                             >> 0xbU));
            if (VL_LIKELY((0xdc7U >= ((IData)(0x49U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U)))))))) {
                VL_ASSIGNSEL_WW(3528,203,((IData)(0x49U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0);
            }
        } else if (((7U == ((0xdc7U >= ((IData)(0x16fU) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 3U))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 3U)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x172U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x16fU) 
                                                       + 
                                                       (0xfffU 
                                                        & ((IData)(0x1b9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                               >> 3U))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x16fU) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 3U)))))))))
                             : 0U)) | (8U == ((0xdc7U 
                                               >= ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 3U))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x16fU) 
                                                           + 
                                                           (0xfffU 
                                                            & ((IData)(0x1b9U) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                   >> 3U)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x172U) 
                                                         + 
                                                         (0xfffU 
                                                          & ((IData)(0x1b9U) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                 >> 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 3U))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x16fU) 
                                                          + 
                                                          (0xfffU 
                                                           & ((IData)(0x1b9U) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                  >> 3U))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 3U)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xcU])) 
                    << 0x2aU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xbU])) 
                                  << 0xaU) | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xaU])) 
                                              >> 0x16U)));
            if (VL_LIKELY((0xdc7U >= ((IData)(0xd4U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 3U)))))))) {
                VL_ASSIGNSEL_WQ(3528,64,((IData)(0xd4U) 
                                         + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 2U) & ((0xdc7U >= ((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U)))))) 
                    && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                              (((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U))))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(0x1b8U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U))))))))))) {
        if ((((0xdc7U >= ((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U)))))) 
              && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                        (((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U))))) 
                         >> 5U)] >> (0x1fU & ((IData)(2U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 6U))))))))) 
             & ((0xdc7U >= ((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 6U)))))) 
                && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                          (((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 6U))))) 
                           >> 5U)] >> (0x1fU & ((IData)(4U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U))))))))))) {
            if (((0xdc7U >= ((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 6U)))))) 
                 && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                           (((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 6U))))) 
                            >> 5U)] >> (0x1fU & ((IData)(3U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 6U)))))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 6U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 6U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 6U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U))))))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U)) 
                                                   - (IData)(1U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                ((7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 6U)) 
                                                                                - (IData)(1U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       ((7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 6U)) 
                                                        - (IData)(1U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    ((7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 6U)) 
                                                     - (IData)(1U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      ((7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 6U)) 
                                                       - (IData)(1U))))))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1 = 0U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 6U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 6U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 6U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U))))))));
                }
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2 = 1U;
            if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U)))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 6U))))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x117U) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U)))))))) 
                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                        (((IData)(0x117U) + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U))))) 
                         >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2) 
                                     << (0x1fU & ((IData)(0x117U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U))))))));
            }
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[4U])));
        if (VL_LIKELY((0xdc7U >= ((IData)(0x118U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                   >> 6U)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(0x118U) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0xdc7U >= ((IData)(6U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 6U)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(6U) + 
                                     (0xfffU & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0);
        }
        if ((9U == ((0xdc7U >= ((IData)(0x16fU) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                          (((IData)(0x172U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 6U))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                   (((IData)(0x16fU) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 6U)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0 
                = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)
                    ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_rd_ex_id)
                    : 0U);
            if (VL_LIKELY((0xdc7U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U)))))))) {
                VL_ASSIGNSEL_WI(3528,5,((IData)(0x158U) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0);
            }
        }
        if ((0x400000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xcU])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xdU] 
                    << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xcU] 
                                >> 0x16U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xeU] 
                    << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xdU] 
                                >> 0x16U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xfU] 
                    << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xeU] 
                                >> 0x16U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x10U] 
                    << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0xfU] 
                                >> 0x16U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[4U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x11U] 
                    << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x10U] 
                                >> 0x16U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[5U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x12U] 
                    << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x11U] 
                                >> 0x16U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[6U] 
                = (0x7ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x13U] 
                              << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x12U] 
                                          >> 0x16U)));
            if (VL_LIKELY((0xdc7U >= ((IData)(0x49U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U)))))))) {
                VL_ASSIGNSEL_WW(3528,203,((IData)(0x49U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0);
            }
        } else if (((7U == ((0xdc7U >= ((IData)(0x16fU) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 6U))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 6U)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x172U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x16fU) 
                                                       + 
                                                       (0xfffU 
                                                        & ((IData)(0x1b9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                               >> 6U))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x16fU) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 6U)))))))))
                             : 0U)) | (8U == ((0xdc7U 
                                               >= ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 6U))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x16fU) 
                                                           + 
                                                           (0xfffU 
                                                            & ((IData)(0x1b9U) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                   >> 6U)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x172U) 
                                                         + 
                                                         (0xfffU 
                                                          & ((IData)(0x1b9U) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                 >> 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 6U))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x16fU) 
                                                          + 
                                                          (0xfffU 
                                                           & ((IData)(0x1b9U) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                  >> 6U))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 6U)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x13U])) 
                    << 0x3fU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x12U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x11U])) 
                                               >> 1U)));
            if (VL_LIKELY((0xdc7U >= ((IData)(0xd4U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 6U)))))))) {
                VL_ASSIGNSEL_WQ(3528,64,((IData)(0xd4U) 
                                         + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 3U) & ((0xdc7U >= ((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U)))))) 
                    && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                              (((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U))))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(0x1b8U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U))))))))))) {
        if ((((0xdc7U >= ((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U)))))) 
              && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                        (((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U))))) 
                         >> 5U)] >> (0x1fU & ((IData)(2U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 9U))))))))) 
             & ((0xdc7U >= ((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 9U)))))) 
                && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                          (((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 9U))))) 
                           >> 5U)] >> (0x1fU & ((IData)(4U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U))))))))))) {
            if (((0xdc7U >= ((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 9U)))))) 
                 && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                           (((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 9U))))) 
                            >> 5U)] >> (0x1fU & ((IData)(3U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 9U)))))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 9U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 9U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 9U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U))))))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U)) 
                                                   - (IData)(1U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                ((7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 9U)) 
                                                                                - (IData)(1U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       ((7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 9U)) 
                                                        - (IData)(1U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    ((7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 9U)) 
                                                     - (IData)(1U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      ((7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 9U)) 
                                                       - (IData)(1U))))))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1 = 0U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 9U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 9U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 9U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U))))))));
                }
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2 = 1U;
            if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U)))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 9U))))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x117U) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U)))))))) 
                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                        (((IData)(0x117U) + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U))))) 
                         >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2) 
                                     << (0x1fU & ((IData)(0x117U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U))))))));
            }
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[6U])));
        if (VL_LIKELY((0xdc7U >= ((IData)(0x118U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                   >> 9U)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(0x118U) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0xdc7U >= ((IData)(6U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 9U)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(6U) + 
                                     (0xfffU & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0);
        }
        if ((9U == ((0xdc7U >= ((IData)(0x16fU) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                          (((IData)(0x172U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 9U))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                   (((IData)(0x16fU) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 9U)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0 
                = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)
                    ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_rd_ex_id)
                    : 0U);
            if (VL_LIKELY((0xdc7U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U)))))))) {
                VL_ASSIGNSEL_WI(3528,5,((IData)(0x158U) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0);
            }
        }
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x13U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x14U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x13U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x15U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x14U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x16U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x15U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x17U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x16U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[4U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x18U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x17U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[5U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x19U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x18U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[6U] 
                = (0x7ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x19U] 
                             >> 1U));
            if (VL_LIKELY((0xdc7U >= ((IData)(0x49U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U)))))))) {
                VL_ASSIGNSEL_WW(3528,203,((IData)(0x49U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0);
            }
        } else if (((7U == ((0xdc7U >= ((IData)(0x16fU) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 9U))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 9U)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x172U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x16fU) 
                                                       + 
                                                       (0xfffU 
                                                        & ((IData)(0x1b9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                               >> 9U))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x16fU) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 9U)))))))))
                             : 0U)) | (8U == ((0xdc7U 
                                               >= ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 9U))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x16fU) 
                                                           + 
                                                           (0xfffU 
                                                            & ((IData)(0x1b9U) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                   >> 9U)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x172U) 
                                                         + 
                                                         (0xfffU 
                                                          & ((IData)(0x1b9U) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                 >> 9U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 9U))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x16fU) 
                                                          + 
                                                          (0xfffU 
                                                           & ((IData)(0x1b9U) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                  >> 9U))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 9U)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x19U])) 
                    << 0x34U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x18U])) 
                                  << 0x14U) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x17U])) 
                                               >> 0xcU)));
            if (VL_LIKELY((0xdc7U >= ((IData)(0xd4U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 9U)))))))) {
                VL_ASSIGNSEL_WQ(3528,64,((IData)(0xd4U) 
                                         + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 4U) & ((0xdc7U >= ((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU)))))) 
                    && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                              (((IData)(0x1b8U) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU))))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(0x1b8U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU))))))))))) {
        if ((((0xdc7U >= ((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU)))))) 
              && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                        (((IData)(2U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU))))) 
                         >> 5U)] >> (0x1fU & ((IData)(2U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 0xcU))))))))) 
             & ((0xdc7U >= ((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 0xcU)))))) 
                && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                          (((IData)(4U) + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 0xcU))))) 
                           >> 5U)] >> (0x1fU & ((IData)(4U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU))))))))))) {
            if (((0xdc7U >= ((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 0xcU)))))) 
                 && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                           (((IData)(3U) + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 0xcU))))) 
                            >> 5U)] >> (0x1fU & ((IData)(3U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 0xcU)))))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 0xcU))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 0xcU)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 0xcU))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU))))))));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0 = 1U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU)) 
                                                   - (IData)(1U)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                ((7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 0xcU)) 
                                                                                - (IData)(1U))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       ((7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 0xcU)) 
                                                        - (IData)(1U)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    ((7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                         >> 0xcU)) 
                                                     - (IData)(1U))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h925dc216__0) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      ((7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 0xcU)) 
                                                       - (IData)(1U))))))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1 = 0U;
                if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU)))))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 0xcU))))) 
                                                                                >> 5U)] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x117U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 0xcU)))))))) 
                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                            (((IData)(0x117U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 0xcU))))) 
                             >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__1) 
                                         << (0x1fU 
                                             & ((IData)(0x117U) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU))))))));
                }
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2 = 1U;
            if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU)))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                                >> 0xcU))))) 
                                                                                >> 5U)] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x117U) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU)))))))) 
                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                        (((IData)(0x117U) + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU))))) 
                         >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdc27dc5f__2) 
                                     << (0x1fU & ((IData)(0x117U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU))))))));
            }
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wbdata_ex_id[8U])));
        if (VL_LIKELY((0xdc7U >= ((IData)(0x118U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                   >> 0xcU)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(0x118U) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9b621a89__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0xdc7U >= ((IData)(6U) + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                        >> 0xcU)))))))) {
            VL_ASSIGNSEL_WQ(3528,64,((IData)(6U) + 
                                     (0xfffU & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7b8111b3__0);
        }
        if ((9U == ((0xdc7U >= ((IData)(0x16fU) + (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU))))))
                     ? (0xfU & (((0U == (0x1fU & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU)))))))
                                  ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                          (((IData)(0x172U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 0xcU))))))))) 
                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                   (((IData)(0x16fU) 
                                     + (0xfffU & ((IData)(0x1b9U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 0xcU)))))))))
                     : 0U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0 
                = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)
                    ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_rd_ex_id)
                    : 0U);
            if (VL_LIKELY((0xdc7U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU)))))))) {
                VL_ASSIGNSEL_WI(3528,5,((IData)(0x158U) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h0bb72a0a__0);
            }
        }
        if ((0x1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x19U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1aU] 
                    << 0x14U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x19U] 
                                 >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1bU] 
                    << 0x14U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1aU] 
                                 >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1cU] 
                    << 0x14U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1bU] 
                                 >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1dU] 
                    << 0x14U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1cU] 
                                 >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[4U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1eU] 
                    << 0x14U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1dU] 
                                 >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[5U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1fU] 
                    << 0x14U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1eU] 
                                 >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0[6U] 
                = (0x7ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1fU] 
                             >> 0xcU));
            if (VL_LIKELY((0xdc7U >= ((IData)(0x49U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU)))))))) {
                VL_ASSIGNSEL_WW(3528,203,((IData)(0x49U) 
                                          + (0xfffU 
                                             & ((IData)(0x1b9U) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                      >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8145dda9__0);
            }
        } else if (((7U == ((0xdc7U >= ((IData)(0x16fU) 
                                        + (0xfffU & 
                                           ((IData)(0x1b9U) 
                                            * (7U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                >> 0xcU))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x16fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 0xcU)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x172U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(0x1b9U) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                            >> 0xcU))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x16fU) 
                                                       + 
                                                       (0xfffU 
                                                        & ((IData)(0x1b9U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                               >> 0xcU))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x16fU) 
                                             + (0xfffU 
                                                & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x16fU) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b9U) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                          >> 0xcU)))))))))
                             : 0U)) | (8U == ((0xdc7U 
                                               >= ((IData)(0x16fU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b9U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                           >> 0xcU))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x16fU) 
                                                           + 
                                                           (0xfffU 
                                                            & ((IData)(0x1b9U) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                   >> 0xcU)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x172U) 
                                                         + 
                                                         (0xfffU 
                                                          & ((IData)(0x1b9U) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                 >> 0xcU))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 0xcU))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x16fU) 
                                                          + 
                                                          (0xfffU 
                                                           & ((IData)(0x1b9U) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                  >> 0xcU))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x16fU) 
                                                            + 
                                                            (0xfffU 
                                                             & ((IData)(0x1b9U) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                                    >> 0xcU)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1fU])) 
                    << 0x29U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1eU])) 
                                  << 9U) | ((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_ex_ex_id[0x1dU])) 
                                            >> 0x17U)));
            if (VL_LIKELY((0xdc7U >= ((IData)(0xd4U) 
                                      + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                       >> 0xcU)))))))) {
                VL_ASSIGNSEL_WQ(3528,64,((IData)(0xd4U) 
                                         + (0xfffU 
                                            & ((IData)(0x1b9U) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trans_id_ex_id) 
                                                     >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h781358b3__0);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_fifo__DOT__unnamedblk5__DOT__i = 5U;
    if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack_commit_id))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64eeef67__0 = 0U;
        if (VL_LIKELY((0xdc7U >= ((IData)(0x1b8U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1b8U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1b8U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1b8U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64eeef67__0) 
                                 << (0x1fU & ((IData)(0x1b8U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64d19c03__0 = 0U;
        if (VL_LIKELY((0xdc7U >= ((IData)(0x1b7U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1b7U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1b7U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1b7U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64d19c03__0) 
                                 << (0x1fU & ((IData)(0x1b7U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h42755b89__0 = 0U;
        if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x117U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x117U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h42755b89__0) 
                                 << (0x1fU & ((IData)(0x117U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))))));
        }
    }
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack_commit_id))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64eeef67__0 = 0U;
        if (VL_LIKELY((0xdc7U >= ((IData)(0x1b8U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                   >> 3U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1b8U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1b8U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                         >> 3U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1b8U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                       >> 3U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64eeef67__0) 
                                 << (0x1fU & ((IData)(0x1b8U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                        >> 3U))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64d19c03__0 = 0U;
        if (VL_LIKELY((0xdc7U >= ((IData)(0x1b7U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                   >> 3U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1b7U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1b7U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                         >> 3U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1b7U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                       >> 3U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h64d19c03__0) 
                                 << (0x1fU & ((IData)(0x1b7U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                        >> 3U))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h42755b89__0 = 0U;
        if (VL_LIKELY((0xdc7U >= ((IData)(0x117U) + 
                                  (0xfffU & ((IData)(0x1b9U) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                   >> 3U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x117U) 
                                                                                + 
                                                                                (0xfffU 
                                                                                & ((IData)(0x1b9U) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x117U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b9U) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                         >> 3U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x117U) + (0xfffU & ((IData)(0x1b9U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                       >> 3U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h42755b89__0) 
                                 << (0x1fU & ((IData)(0x117U) 
                                              + (0xfffU 
                                                 & ((IData)(0x1b9U) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                        >> 3U))))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_fifo__DOT__unnamedblk6__DOT__i = 2U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_id) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xdU] 
            = (0xfe7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xdU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[8U] 
            = (0xff7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[8U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[2U] 
            = (0xfffffdffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[2U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x1bU] 
            = (0xfffcffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x1bU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x16U] 
            = (0xfffeffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x16U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x10U] 
            = (0xfffffffbU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x10U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x29U] 
            = (0xfffff9ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x29U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x24U] 
            = (0xfffffdffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x24U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x1dU] 
            = (0xf7ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x1dU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x37U] 
            = (0xfffffff3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x37U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x32U] 
            = (0xfffffffbU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x32U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x2bU] 
            = (0xffefffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x2bU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x44U] 
            = (0xe7ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x44U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x3fU] 
            = (0xf7ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x3fU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x39U] 
            = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x39U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x52U] 
            = (0xffcfffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x52U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4dU] 
            = (0xffefffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4dU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x47U] 
            = (0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x47U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x60U] 
            = (0xffff9fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x60U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5bU] 
            = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5bU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x54U] 
            = (0x7fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x54U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x6eU] 
            = (0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x6eU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x69U] 
            = (0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x69U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x62U] 
            = (0xfeffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x62U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_fifo__DOT__unnamedblk7__DOT__i = 8U;
    }
    __Vtableidx2 = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_id) 
                     << 7U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer) 
                                << 1U) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__num_issue)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_n 
        = Vara_tb_verilator__ConstPool__TABLE_h9feb95fa_0
        [__Vtableidx2];
}
