// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2674(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2674\n"); );
    // Body
    VL_ASSIGNBIT_II(0U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                       >> 0x10U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                           >> 0x10U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                           >> 0x10U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                      >> 0x10U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                              >> 0x18U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                >> 0x10U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                >> 0x10U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                          >> 0x14U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                           >> 0x13U))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__49__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                     >> 0x10U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                          >> 0x10U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                          >> 0x10U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__49__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__49__Vfuncout = 1U;
                                goto __Vlabel1669;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__49__Vfuncout = 0U;
                                goto __Vlabel1669;
                            }
                            __Vlabel1669: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__49__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__50__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__50__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__50__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__50__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__50__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__50__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__50__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__50__Vfuncout = 1U;
                                goto __Vlabel1670;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__50__Vfuncout = 0U;
                                goto __Vlabel1670;
                            }
                            __Vlabel1670: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__50__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                       >> 0x15U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                           >> 0x15U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                           >> 0x15U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                      >> 0x15U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                              >> 0x18U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                >> 0x15U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                >> 0x15U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                          >> 0x19U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                           >> 0x18U))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__55__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                     >> 0x15U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                          >> 0x15U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                          >> 0x15U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__55__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__55__Vfuncout = 1U;
                                goto __Vlabel1671;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__55__Vfuncout = 0U;
                                goto __Vlabel1671;
                            }
                            __Vlabel1671: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__55__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__56__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__56__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__56__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__56__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__56__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__56__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__56__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__56__Vfuncout = 1U;
                                goto __Vlabel1672;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__56__Vfuncout = 0U;
                                goto __Vlabel1672;
                            }
                            __Vlabel1672: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__56__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                       >> 0x1aU))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                           >> 0x1aU)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                           >> 0x1aU))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                      >> 0x1aU))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                              >> 0x18U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                >> 0x1aU)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                >> 0x1aU))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                          >> 0x1eU)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                           >> 0x1dU))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__61__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                     >> 0x1aU))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                          >> 0x1aU)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                          >> 0x1aU))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__61__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__61__Vfuncout = 1U;
                                goto __Vlabel1673;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__61__Vfuncout = 0U;
                                goto __Vlabel1673;
                            }
                            __Vlabel1673: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__61__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__62__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__62__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__62__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__62__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__62__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__62__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__62__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__62__Vfuncout = 1U;
                                goto __Vlabel1674;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__62__Vfuncout = 0U;
                                goto __Vlabel1674;
                            }
                            __Vlabel1674: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__62__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                        << 1U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                          >> 0x1fU)))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                            << 1U) 
                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                              >> 0x1fU))))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                            << 1U) 
                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                              >> 0x1fU)))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU)))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                       << 1U) 
                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                         >> 0x1fU)))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU))))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                              >> 0x18U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                 << 1U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                   >> 0x1fU))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                 << 1U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                   >> 0x1fU)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU))))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                          >> 3U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                        >> 2U))) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__67__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                      << 1U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                        >> 0x1fU)))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                           << 1U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                             >> 0x1fU))))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                           << 1U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                             >> 0x1fU)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU)))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU)))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU))))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__67__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__67__Vfuncout = 1U;
                                goto __Vlabel1675;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__67__Vfuncout = 0U;
                                goto __Vlabel1675;
                            }
                            __Vlabel1675: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__67__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__68__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__68__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__68__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__68__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__68__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__68__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__68__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__68__Vfuncout = 1U;
                                goto __Vlabel1676;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__68__Vfuncout = 0U;
                                goto __Vlabel1676;
                            }
                            __Vlabel1676: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__68__Vfuncout)))));
    VL_ASSIGNBIT_II(4U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                       >> 4U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                           >> 4U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                           >> 4U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                      >> 4U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                              >> 0x18U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                >> 4U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                >> 4U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 8U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                        >> 7U))) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__73__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                     >> 4U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                          >> 4U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                          >> 4U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__73__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__73__Vfuncout = 1U;
                                goto __Vlabel1677;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__73__Vfuncout = 0U;
                                goto __Vlabel1677;
                            }
                            __Vlabel1677: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__73__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__74__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__74__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__74__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__74__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__74__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__74__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__74__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__74__Vfuncout = 1U;
                                goto __Vlabel1678;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__74__Vfuncout = 0U;
                                goto __Vlabel1678;
                            }
                            __Vlabel1678: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__74__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0xaU] 
                                  >> 0x18U)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                    >> 0x18U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xcU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[8U] 
                                       >> 0x17U)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__79__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__79__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__79__Vfuncout = 1U;
                                goto __Vlabel1679;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__79__Vfuncout = 0U;
                                goto __Vlabel1679;
                            }
                            __Vlabel1679: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__79__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__80__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__80__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__80__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__80__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__80__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__80__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__80__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__80__Vfuncout = 1U;
                                goto __Vlabel1680;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__80__Vfuncout = 0U;
                                goto __Vlabel1680;
                            }
                            __Vlabel1680: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__80__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x18U] 
                                  >> 0xeU)) == (0x1fU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                   >> 0x18U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xdU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x16U] 
                                       >> 0xdU)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__85__op 
                            = (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x19U] 
                                         << 3U) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x18U] 
                                                   >> 0x1dU)));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__85__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__85__Vfuncout = 1U;
                                goto __Vlabel1681;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__85__Vfuncout = 0U;
                                goto __Vlabel1681;
                            }
                            __Vlabel1681: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__85__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__86__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__86__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__86__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__86__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__86__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__86__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__86__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__86__Vfuncout = 1U;
                                goto __Vlabel1682;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__86__Vfuncout = 0U;
                                goto __Vlabel1682;
                            }
                            __Vlabel1682: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__86__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x26U] 
                                  >> 4U)) == (0x1fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                 >> 0x18U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xeU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x24U] 
                                       >> 3U)) & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__91__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x26U] 
                                        >> 0x13U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__91__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__91__Vfuncout = 1U;
                                goto __Vlabel1683;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__91__Vfuncout = 0U;
                                goto __Vlabel1683;
                            }
                            __Vlabel1683: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__91__Vfuncout)) 
                                                  == 
                                                  ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__92__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__92__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__92__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__92__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__92__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__92__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__92__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__92__Vfuncout = 1U;
                                goto __Vlabel1684;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__92__Vfuncout = 0U;
                                goto __Vlabel1684;
                            }
                            __Vlabel1684: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__92__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x33U] 
                                  >> 0x1aU)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                    >> 0x18U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xfU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x31U] 
                                       >> 0x19U)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__97__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x34U] 
                                        >> 9U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__97__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__97__Vfuncout = 1U;
                                goto __Vlabel1685;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__97__Vfuncout = 0U;
                                goto __Vlabel1685;
                            }
                            __Vlabel1685: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__97__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__98__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__98__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__98__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__98__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__98__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__98__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__98__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__98__Vfuncout = 1U;
                                goto __Vlabel1686;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__98__Vfuncout = 0U;
                                goto __Vlabel1686;
                            }
                            __Vlabel1686: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__98__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x41U] 
                                  >> 0x10U)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                    >> 0x18U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x10U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x3fU] 
                                        >> 0xfU)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__103__op 
                            = (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x42U] 
                                         << 1U) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x41U] 
                                                   >> 0x1fU)));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__103__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__103__Vfuncout = 1U;
                                goto __Vlabel1687;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__103__Vfuncout = 0U;
                                goto __Vlabel1687;
                            }
                            __Vlabel1687: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__103__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__104__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__104__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__104__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__104__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__104__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__104__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__104__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__104__Vfuncout = 1U;
                                goto __Vlabel1688;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__104__Vfuncout = 0U;
                                goto __Vlabel1688;
                            }
                            __Vlabel1688: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__104__Vfuncout)))));
    VL_ASSIGNBIT_II(0xaU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4fU] 
                                  >> 6U)) == (0x1fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                 >> 0x18U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x11U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4dU] 
                                        >> 5U)) & (
                                                   ([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__109__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4fU] 
                                        >> 0x15U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__109__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__109__Vfuncout = 1U;
                                goto __Vlabel1689;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__109__Vfuncout = 0U;
                                goto __Vlabel1689;
                            }
                            __Vlabel1689: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__109__Vfuncout)) 
                                                   == 
                                                   ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__110__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__110__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__110__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__110__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__110__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__110__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__110__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__110__Vfuncout = 1U;
                                goto __Vlabel1690;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__110__Vfuncout = 0U;
                                goto __Vlabel1690;
                            }
                            __Vlabel1690: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__110__Vfuncout)))));
    VL_ASSIGNBIT_II(0xbU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5dU] 
                                   << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5cU] 
                                             >> 0x1cU))) 
                        == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                     >> 0x18U))) & 
                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                        >> 0x12U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5aU] 
                                      >> 0x1bU)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__115__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5dU] 
                                        >> 0xbU));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__115__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__115__Vfuncout = 1U;
                                goto __Vlabel1691;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__115__Vfuncout = 0U;
                                goto __Vlabel1691;
                            }
                            __Vlabel1691: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__115__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__116__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__116__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__116__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__116__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__116__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__116__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__116__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__116__Vfuncout = 1U;
                                goto __Vlabel1692;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__116__Vfuncout = 0U;
                                goto __Vlabel1692;
                            }
                            __Vlabel1692: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__116__Vfuncout)))));
    VL_ASSIGNBIT_II(0xcU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6aU] 
                                  >> 0x12U)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
                                                    >> 0x18U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x13U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x68U] 
                                        >> 0x11U)) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__121__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6bU] 
                                        >> 1U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__121__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__121__Vfuncout = 1U;
                                goto __Vlabel1693;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__121__Vfuncout = 0U;
                                goto __Vlabel1693;
                            }
                            __Vlabel1693: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__121__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_imm_fpr__122__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((0x69U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__122__op)) 
                                   & (0x6aU >= (IData)(vlSelf->__Vfunc_is_imm_fpr__122__op))) 
                                  || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_imm_fpr__122__op)) 
                                      & (0x72U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__122__op)))) 
                                 || ((0x86U <= (IData)(vlSelf->__Vfunc_is_imm_fpr__122__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_imm_fpr__122__op))))) {
                                vlSelf->__Vfunc_is_imm_fpr__122__Vfuncout = 1U;
                                goto __Vlabel1694;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__122__Vfuncout = 0U;
                                goto __Vlabel1694;
                            }
                            __Vlabel1694: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_imm_fpr__122__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                       >> 0x10U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                           >> 0x10U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                           >> 0x10U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                      >> 0x10U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                              >> 2U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                >> 0x10U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                >> 0x10U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                          >> 0x14U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                           >> 0x13U))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__45__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                     >> 0x10U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                          >> 0x10U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                          >> 0x10U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__45__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__45__Vfuncout = 1U;
                                goto __Vlabel1695;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__45__Vfuncout = 0U;
                                goto __Vlabel1695;
                            }
                            __Vlabel1695: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__45__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__46__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__46__Vfuncout = 1U;
                                goto __Vlabel1696;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__46__Vfuncout = 0U;
                                goto __Vlabel1696;
                            }
                            __Vlabel1696: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__46__Vfuncout)))));
    VL_ASSIGNBIT_II(0U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                       >> 0x10U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                           >> 0x10U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                           >> 0x10U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                      >> 0x10U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U)))))))))
                           : 0U) == (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                               << 3U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                 >> 0x1dU)))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                >> 0x10U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                >> 0x10U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                          >> 0x14U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                           >> 0x13U))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__47__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                     >> 0x10U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                          >> 0x10U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                          >> 0x10U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                         >> 0x10U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6dU] 
                                                              >> 0x10U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__47__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__47__Vfuncout = 1U;
                                goto __Vlabel1697;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__47__Vfuncout = 0U;
                                goto __Vlabel1697;
                            }
                            __Vlabel1697: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__47__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__48__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__48__Vfuncout = 1U;
                                goto __Vlabel1698;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__48__Vfuncout = 0U;
                                goto __Vlabel1698;
                            }
                            __Vlabel1698: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__48__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                       >> 0x15U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                           >> 0x15U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                           >> 0x15U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                      >> 0x15U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                              >> 2U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                >> 0x15U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                >> 0x15U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                          >> 0x19U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                           >> 0x18U))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__51__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                     >> 0x15U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                          >> 0x15U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                          >> 0x15U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__51__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__51__Vfuncout = 1U;
                                goto __Vlabel1699;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__51__Vfuncout = 0U;
                                goto __Vlabel1699;
                            }
                            __Vlabel1699: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__51__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__52__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__52__Vfuncout = 1U;
                                goto __Vlabel1700;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__52__Vfuncout = 0U;
                                goto __Vlabel1700;
                            }
                            __Vlabel1700: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__52__Vfuncout)))));
    VL_ASSIGNBIT_II(1U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                       >> 0x15U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                           >> 0x15U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                           >> 0x15U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                      >> 0x15U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U)))))))))
                           : 0U) == (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                               << 3U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                 >> 0x1dU)))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                >> 0x15U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                >> 0x15U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                          >> 0x19U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                           >> 0x18U))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__53__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                     >> 0x15U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                          >> 0x15U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                          >> 0x15U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                         >> 0x15U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6fU] 
                                                              >> 0x15U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__53__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__53__Vfuncout = 1U;
                                goto __Vlabel1701;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__53__Vfuncout = 0U;
                                goto __Vlabel1701;
                            }
                            __Vlabel1701: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__53__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__54__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__54__Vfuncout = 1U;
                                goto __Vlabel1702;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__54__Vfuncout = 0U;
                                goto __Vlabel1702;
                            }
                            __Vlabel1702: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__54__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                       >> 0x1aU))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                           >> 0x1aU)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                           >> 0x1aU))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                      >> 0x1aU))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                              >> 2U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                >> 0x1aU)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                >> 0x1aU))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                          >> 0x1eU)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                           >> 0x1dU))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__57__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                     >> 0x1aU))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                          >> 0x1aU)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                          >> 0x1aU))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__57__Vfuncout = 1U;
                                goto __Vlabel1703;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__57__Vfuncout = 0U;
                                goto __Vlabel1703;
                            }
                            __Vlabel1703: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__57__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__58__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__58__Vfuncout = 1U;
                                goto __Vlabel1704;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__58__Vfuncout = 0U;
                                goto __Vlabel1704;
                            }
                            __Vlabel1704: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__58__Vfuncout)))));
    VL_ASSIGNBIT_II(2U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                       >> 0x1aU))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                           >> 0x1aU)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                           >> 0x1aU))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                      >> 0x1aU))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU)))))))))
                           : 0U) == (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                               << 3U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                 >> 0x1dU)))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                >> 0x1aU)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                >> 0x1aU))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                          >> 0x1eU)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                           >> 0x1dU))) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__59__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                     >> 0x1aU))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                          >> 0x1aU)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                          >> 0x1aU))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                         >> 0x1aU))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x71U] 
                                                              >> 0x1aU)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__59__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__59__Vfuncout = 1U;
                                goto __Vlabel1705;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__59__Vfuncout = 0U;
                                goto __Vlabel1705;
                            }
                            __Vlabel1705: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__59__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__60__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__60__Vfuncout = 1U;
                                goto __Vlabel1706;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__60__Vfuncout = 0U;
                                goto __Vlabel1706;
                            }
                            __Vlabel1706: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__60__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                        << 1U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                          >> 0x1fU)))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                            << 1U) 
                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                              >> 0x1fU))))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                            << 1U) 
                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                              >> 0x1fU)))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU)))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                       << 1U) 
                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                         >> 0x1fU)))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU))))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                              >> 2U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                 << 1U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                   >> 0x1fU))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                 << 1U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                   >> 0x1fU)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU))))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                          >> 3U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                        >> 2U))) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__63__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                      << 1U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                        >> 0x1fU)))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                           << 1U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                             >> 0x1fU))))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                           << 1U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                             >> 0x1fU)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU)))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU)))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU))))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__63__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__63__Vfuncout = 1U;
                                goto __Vlabel1707;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__63__Vfuncout = 0U;
                                goto __Vlabel1707;
                            }
                            __Vlabel1707: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__63__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__64__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__64__Vfuncout = 1U;
                                goto __Vlabel1708;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__64__Vfuncout = 0U;
                                goto __Vlabel1708;
                            }
                            __Vlabel1708: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__64__Vfuncout)))));
    VL_ASSIGNBIT_II(3U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                        << 1U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                          >> 0x1fU)))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                            << 1U) 
                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                              >> 0x1fU))))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                            << 1U) 
                                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                              >> 0x1fU)))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU)))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                       << 1U) 
                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                         >> 0x1fU)))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU))))))))))
                           : 0U) == (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                               << 3U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                 >> 0x1dU)))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                 << 1U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                   >> 0x1fU))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                 << 1U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                   >> 0x1fU)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU))))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                          >> 3U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                        >> 2U))) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__65__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                      << 1U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                        >> 0x1fU)))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                           << 1U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                             >> 0x1fU))))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                           << 1U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                             >> 0x1fU)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU)))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                          << 1U) 
                                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                            >> 0x1fU)))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x74U] 
                                                               << 1U) 
                                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x73U] 
                                                                 >> 0x1fU))))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__65__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__65__Vfuncout = 1U;
                                goto __Vlabel1709;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__65__Vfuncout = 0U;
                                goto __Vlabel1709;
                            }
                            __Vlabel1709: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__65__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__66__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__66__Vfuncout = 1U;
                                goto __Vlabel1710;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__66__Vfuncout = 0U;
                                goto __Vlabel1710;
                            }
                            __Vlabel1710: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__66__Vfuncout)))));
    VL_ASSIGNBIT_II(4U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                       >> 4U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                           >> 4U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                           >> 4U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                      >> 4U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U)))))))))
                           : 0U) == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                              >> 2U))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                >> 4U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                >> 4U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 8U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                        >> 7U))) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__69__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                     >> 4U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                          >> 4U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                          >> 4U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__69__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__69__Vfuncout = 1U;
                                goto __Vlabel1711;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__69__Vfuncout = 0U;
                                goto __Vlabel1711;
                            }
                            __Vlabel1711: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__69__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__70__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__70__Vfuncout = 1U;
                                goto __Vlabel1712;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__70__Vfuncout = 0U;
                                goto __Vlabel1712;
                            }
                            __Vlabel1712: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__70__Vfuncout)))));
    VL_ASSIGNBIT_II(4U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((((0xf13U >= ((IData)(0x158U) 
                                      + (0xfffU & ((IData)(0x1b6U) 
                                                   * 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                       >> 4U))))))
                           ? (0x1fU & (((0U == (0x1fU 
                                                & ((IData)(0x158U) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                           >> 4U)))))))
                                         ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                                 (((IData)(0x15cU) 
                                                   + 
                                                   (0xfffU 
                                                    & ((IData)(0x1b6U) 
                                                       * 
                                                       (7U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                           >> 4U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x158U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U))))))))) 
                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                          (((IData)(0x158U) 
                                            + (0xfffU 
                                               & ((IData)(0x1b6U) 
                                                  * 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                      >> 4U))))) 
                                           >> 5U)] 
                                          >> (0x1fU 
                                              & ((IData)(0x158U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U)))))))))
                           : 0U) == (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                               << 3U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                 >> 0x1dU)))) 
                        & ((0xf13U >= ((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                >> 4U)))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                     (((IData)(0xf0cU) 
                                       + (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                >> 4U))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0xf0cU) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U)))))))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 8U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                        >> 7U))) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__71__op 
                            = ((0xf13U >= ((IData)(0x167U) 
                                           + (0xfffU 
                                              & ((IData)(0x1b6U) 
                                                 * 
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                     >> 4U))))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x167U) 
                                                  + 
                                                  (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                          >> 4U)))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                              (((IData)(0x16eU) 
                                                + (0xfffU 
                                                   & ((IData)(0x1b6U) 
                                                      * 
                                                      (7U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                          >> 4U))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U))))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[
                                               (((IData)(0x167U) 
                                                 + 
                                                 (0xfffU 
                                                  & ((IData)(0x1b6U) 
                                                     * 
                                                     (7U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                         >> 4U))))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x167U) 
                                                      + 
                                                      (0xfffU 
                                                       & ((IData)(0x1b6U) 
                                                          * 
                                                          (7U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x76U] 
                                                              >> 4U)))))))))
                                : 0U);
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__71__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__71__Vfuncout = 1U;
                                goto __Vlabel1713;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__71__Vfuncout = 0U;
                                goto __Vlabel1713;
                            }
                            __Vlabel1713: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__71__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__72__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__72__Vfuncout = 1U;
                                goto __Vlabel1714;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__72__Vfuncout = 0U;
                                goto __Vlabel1714;
                            }
                            __Vlabel1714: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__72__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0xaU] 
                                  >> 0x18U)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                    >> 2U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xcU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[8U] 
                                       >> 0x17U)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__75__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__75__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__75__Vfuncout = 1U;
                                goto __Vlabel1715;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__75__Vfuncout = 0U;
                                goto __Vlabel1715;
                            }
                            __Vlabel1715: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__75__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__76__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__76__Vfuncout = 1U;
                                goto __Vlabel1716;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__76__Vfuncout = 0U;
                                goto __Vlabel1716;
                            }
                            __Vlabel1716: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__76__Vfuncout)))));
    VL_ASSIGNBIT_II(5U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0xaU] 
                                  >> 0x18U)) == (0x1fU 
                                                 & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                     << 3U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                       >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xcU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[8U] 
                                       >> 0x17U)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__77__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__77__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__77__Vfuncout = 1U;
                                goto __Vlabel1717;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__77__Vfuncout = 0U;
                                goto __Vlabel1717;
                            }
                            __Vlabel1717: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__77__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__78__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__78__Vfuncout = 1U;
                                goto __Vlabel1718;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__78__Vfuncout = 0U;
                                goto __Vlabel1718;
                            }
                            __Vlabel1718: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__78__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x18U] 
                                  >> 0xeU)) == (0x1fU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                   >> 2U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xdU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x16U] 
                                       >> 0xdU)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__81__op 
                            = (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x19U] 
                                         << 3U) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x18U] 
                                                   >> 0x1dU)));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__81__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__81__Vfuncout = 1U;
                                goto __Vlabel1719;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__81__Vfuncout = 0U;
                                goto __Vlabel1719;
                            }
                            __Vlabel1719: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__81__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__82__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__82__Vfuncout = 1U;
                                goto __Vlabel1720;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__82__Vfuncout = 0U;
                                goto __Vlabel1720;
                            }
                            __Vlabel1720: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__82__Vfuncout)))));
    VL_ASSIGNBIT_II(6U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x18U] 
                                  >> 0xeU)) == (0x1fU 
                                                & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                    << 3U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                      >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xdU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x16U] 
                                       >> 0xdU)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__83__op 
                            = (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x19U] 
                                         << 3U) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x18U] 
                                                   >> 0x1dU)));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__83__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__83__Vfuncout = 1U;
                                goto __Vlabel1721;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__83__Vfuncout = 0U;
                                goto __Vlabel1721;
                            }
                            __Vlabel1721: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__83__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__84__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__84__Vfuncout = 1U;
                                goto __Vlabel1722;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__84__Vfuncout = 0U;
                                goto __Vlabel1722;
                            }
                            __Vlabel1722: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__84__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x26U] 
                                  >> 4U)) == (0x1fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                 >> 2U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xeU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x24U] 
                                       >> 3U)) & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__87__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x26U] 
                                        >> 0x13U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__87__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__87__Vfuncout = 1U;
                                goto __Vlabel1723;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__87__Vfuncout = 0U;
                                goto __Vlabel1723;
                            }
                            __Vlabel1723: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__87__Vfuncout)) 
                                                  == 
                                                  ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__88__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__88__Vfuncout = 1U;
                                goto __Vlabel1724;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__88__Vfuncout = 0U;
                                goto __Vlabel1724;
                            }
                            __Vlabel1724: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__88__Vfuncout)))));
    VL_ASSIGNBIT_II(7U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x26U] 
                                  >> 4U)) == (0x1fU 
                                              & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                  << 3U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                    >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xeU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x24U] 
                                       >> 3U)) & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__89__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x26U] 
                                        >> 0x13U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__89__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__89__Vfuncout = 1U;
                                goto __Vlabel1725;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__89__Vfuncout = 0U;
                                goto __Vlabel1725;
                            }
                            __Vlabel1725: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__89__Vfuncout)) 
                                                  == 
                                                  ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__90__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__90__Vfuncout = 1U;
                                goto __Vlabel1726;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__90__Vfuncout = 0U;
                                goto __Vlabel1726;
                            }
                            __Vlabel1726: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__90__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x33U] 
                                  >> 0x1aU)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                    >> 2U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xfU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x31U] 
                                       >> 0x19U)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__93__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x34U] 
                                        >> 9U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__93__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__93__Vfuncout = 1U;
                                goto __Vlabel1727;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__93__Vfuncout = 0U;
                                goto __Vlabel1727;
                            }
                            __Vlabel1727: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__93__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__94__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__94__Vfuncout = 1U;
                                goto __Vlabel1728;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__94__Vfuncout = 0U;
                                goto __Vlabel1728;
                            }
                            __Vlabel1728: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__94__Vfuncout)))));
    VL_ASSIGNBIT_II(8U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x33U] 
                                  >> 0x1aU)) == (0x1fU 
                                                 & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                     << 3U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                       >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0xfU)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x31U] 
                                       >> 0x19U)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__95__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x34U] 
                                        >> 9U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__95__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__95__Vfuncout = 1U;
                                goto __Vlabel1729;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__95__Vfuncout = 0U;
                                goto __Vlabel1729;
                            }
                            __Vlabel1729: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__95__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__96__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__96__Vfuncout = 1U;
                                goto __Vlabel1730;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__96__Vfuncout = 0U;
                                goto __Vlabel1730;
                            }
                            __Vlabel1730: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__96__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x41U] 
                                  >> 0x10U)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                    >> 2U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x10U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x3fU] 
                                        >> 0xfU)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__99__op 
                            = (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x42U] 
                                         << 1U) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x41U] 
                                                   >> 0x1fU)));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__99__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__99__Vfuncout = 1U;
                                goto __Vlabel1731;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__99__Vfuncout = 0U;
                                goto __Vlabel1731;
                            }
                            __Vlabel1731: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__99__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__100__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__100__Vfuncout = 1U;
                                goto __Vlabel1732;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__100__Vfuncout = 0U;
                                goto __Vlabel1732;
                            }
                            __Vlabel1732: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__Vfuncout)))));
    VL_ASSIGNBIT_II(9U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x41U] 
                                  >> 0x10U)) == (0x1fU 
                                                 & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                     << 3U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                       >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x10U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x3fU] 
                                        >> 0xfU)) & 
                     (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__101__op 
                            = (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x42U] 
                                         << 1U) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x41U] 
                                                   >> 0x1fU)));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__101__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__101__Vfuncout = 1U;
                                goto __Vlabel1733;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__101__Vfuncout = 0U;
                                goto __Vlabel1733;
                            }
                            __Vlabel1733: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__101__Vfuncout)) 
                      == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__102__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__102__Vfuncout = 1U;
                                goto __Vlabel1734;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__102__Vfuncout = 0U;
                                goto __Vlabel1734;
                            }
                            __Vlabel1734: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__Vfuncout)))));
    VL_ASSIGNBIT_II(0xaU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4fU] 
                                  >> 6U)) == (0x1fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                 >> 2U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x11U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4dU] 
                                        >> 5U)) & (
                                                   ([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__105__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4fU] 
                                        >> 0x15U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__105__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__105__Vfuncout = 1U;
                                goto __Vlabel1735;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__105__Vfuncout = 0U;
                                goto __Vlabel1735;
                            }
                            __Vlabel1735: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__105__Vfuncout)) 
                                                   == 
                                                   ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__106__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__106__Vfuncout = 1U;
                                goto __Vlabel1736;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__106__Vfuncout = 0U;
                                goto __Vlabel1736;
                            }
                            __Vlabel1736: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__106__Vfuncout)))));
    VL_ASSIGNBIT_II(0xaU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4fU] 
                                  >> 6U)) == (0x1fU 
                                              & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                  << 3U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                    >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x11U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4dU] 
                                        >> 5U)) & (
                                                   ([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__107__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x4fU] 
                                        >> 0x15U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout = 1U;
                                goto __Vlabel1737;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout = 0U;
                                goto __Vlabel1737;
                            }
                            __Vlabel1737: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout)) 
                                                   == 
                                                   ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__108__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__108__Vfuncout = 1U;
                                goto __Vlabel1738;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__108__Vfuncout = 0U;
                                goto __Vlabel1738;
                            }
                            __Vlabel1738: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__108__Vfuncout)))));
    VL_ASSIGNBIT_II(0xbU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5dU] 
                                   << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5cU] 
                                             >> 0x1cU))) 
                        == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                     >> 2U))) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                                                 >> 0x12U)) 
                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5aU] 
                         >> 0x1bU)) & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__111__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5dU] 
                                        >> 0xbU));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__111__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__111__Vfuncout = 1U;
                                goto __Vlabel1739;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__111__Vfuncout = 0U;
                                goto __Vlabel1739;
                            }
                            __Vlabel1739: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__111__Vfuncout)) 
                                       == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__112__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__112__Vfuncout = 1U;
                                goto __Vlabel1740;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__112__Vfuncout = 0U;
                                goto __Vlabel1740;
                            }
                            __Vlabel1740: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__112__Vfuncout)))));
    VL_ASSIGNBIT_II(0xbU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5dU] 
                                   << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5cU] 
                                             >> 0x1cU))) 
                        == (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                      << 3U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x12U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5aU] 
                                        >> 0x1bU)) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__113__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x5dU] 
                                        >> 0xbU));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__113__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__113__Vfuncout = 1U;
                                goto __Vlabel1741;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__113__Vfuncout = 0U;
                                goto __Vlabel1741;
                            }
                            __Vlabel1741: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__113__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__114__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__114__Vfuncout = 1U;
                                goto __Vlabel1742;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__114__Vfuncout = 0U;
                                goto __Vlabel1742;
                            }
                            __Vlabel1742: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__114__Vfuncout)))));
    VL_ASSIGNBIT_II(0xcU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs1_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6aU] 
                                  >> 0x12U)) == (0x1fU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                    >> 2U))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x13U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x68U] 
                                        >> 0x11U)) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__117__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6bU] 
                                        >> 1U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__117__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__117__Vfuncout = 1U;
                                goto __Vlabel1743;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__117__Vfuncout = 0U;
                                goto __Vlabel1743;
                            }
                            __Vlabel1743: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__117__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs1_fpr__118__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op))) 
                                        || (0x73U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op))) 
                                       || (0x75U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op))) 
                                      || (0x76U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op))) 
                                     || (0x77U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op))) 
                                    || (0x79U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op))) 
                                   || (0x7aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op))) 
                                  || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op)))) 
                                 || (0xb7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__op)))) {
                                vlSelf->__Vfunc_is_rs1_fpr__118__Vfuncout = 1U;
                                goto __Vlabel1744;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__118__Vfuncout = 0U;
                                goto __Vlabel1744;
                            }
                            __Vlabel1744: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs1_fpr__118__Vfuncout)))));
    VL_ASSIGNBIT_II(0xcU, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs2_fwd_req, 
                    (((((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6aU] 
                                  >> 0x12U)) == (0x1fU 
                                                 & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                                     << 3U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
                                                       >> 0x1dU)))) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x78U] 
                          >> 0x13U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x68U] 
                                        >> 0x11U)) 
                     & (([&]() {
                        vlSelf->__Vfunc_is_rd_fpr__119__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__fwd[0x6bU] 
                                        >> 1U));
                        {
                            if (((((((((((0x61U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)) 
                                         & (0x64U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op))) 
                                        || ((0x69U 
                                             <= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)) 
                                            & (0x72U 
                                               >= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)))) 
                                       || (0x74U == (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op))) 
                                      || (0x75U == (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op))) 
                                     || (0x76U == (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op))) 
                                    || (0x78U == (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op))) 
                                   || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)) 
                                       & (0x7fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)))) 
                                  || ((0x86U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)) 
                                      & (0x89U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)))) 
                                 || (0xb8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__119__op)))) {
                                vlSelf->__Vfunc_is_rd_fpr__119__Vfuncout = 1U;
                                goto __Vlabel1745;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__119__Vfuncout = 0U;
                                goto __Vlabel1745;
                            }
                            __Vlabel1745: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rd_fpr__119__Vfuncout)) 
                        == ([&]() {
                        vlSelf->__Vfunc_is_rs2_fpr__120__op 
                            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                        >> 7U));
                        {
                            if (((((((((0x65U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)) 
                                       & (0x68U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op))) 
                                      || ((0x69U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)) 
                                          & (0x6dU 
                                             >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)))) 
                                     || ((0x6fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)) 
                                         & (0x72U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)))) 
                                    || (0x75U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op))) 
                                   || ((0x76U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)) 
                                       & (0x77U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)))) 
                                  || (0x79U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op))) 
                                 || ((0x7bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op)) 
                                     & (0x89U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__op))))) {
                                vlSelf->__Vfunc_is_rs2_fpr__120__Vfuncout = 1U;
                                goto __Vlabel1746;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__120__Vfuncout = 0U;
                                goto __Vlabel1746;
                            }
                            __Vlabel1746: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__Vfuncout)))));
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

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2887(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2887\n"); );
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
                        goto __Vlabel1747;
                    } else {
                        vlSelf->__Vfunc_is_imm_fpr__127__Vfuncout = 0U;
                        goto __Vlabel1747;
                    }
                    __Vlabel1747: ;
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

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2888(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2888\n"); );
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
                            goto __Vlabel1748;
                        } else {
                            vlSelf->__Vfunc_is_rs1_fpr__123__Vfuncout = 0U;
                            goto __Vlabel1748;
                        }
                        __Vlabel1748: ;
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
                        goto __Vlabel1749;
                    } else {
                        vlSelf->__Vfunc_is_rs2_fpr__125__Vfuncout = 0U;
                        goto __Vlabel1749;
                    }
                    __Vlabel1749: ;
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

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2889(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2889\n"); );
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
                            goto __Vlabel1750;
                        } else {
                            vlSelf->__Vfunc_is_rs1_fpr__124__Vfuncout = 0U;
                            goto __Vlabel1750;
                        }
                        __Vlabel1750: ;
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

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2890(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2890\n"); );
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
                            goto __Vlabel1751;
                        } else {
                            vlSelf->__Vfunc_is_rs2_fpr__126__Vfuncout = 0U;
                            goto __Vlabel1751;
                        }
                        __Vlabel1751: ;
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

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2891(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2891\n"); );
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
                                goto __Vlabel1752;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__131__Vfuncout = 0U;
                                goto __Vlabel1752;
                            }
                            __Vlabel1752: ;
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
                                goto __Vlabel1753;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout = 0U;
                                goto __Vlabel1753;
                            }
                            __Vlabel1753: ;
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
                                goto __Vlabel1754;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__132__Vfuncout = 0U;
                                goto __Vlabel1754;
                            }
                            __Vlabel1754: ;
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

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2896(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2896\n"); );
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
                            goto __Vlabel1755;
                        } else {
                            vlSelf->__Vfunc_is_imm_fpr__129__Vfuncout = 0U;
                            goto __Vlabel1755;
                        }
                        __Vlabel1755: ;
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
                                goto __Vlabel1756;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__130__Vfuncout = 0U;
                                goto __Vlabel1756;
                            }
                            __Vlabel1756: ;
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

extern const VlWide<14>/*447:0*/ Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vara_tb_verilator__ConstPool__TABLE_h9feb95fa_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__2900(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__2900\n"); );
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
                            goto __Vlabel1757;
                        } else {
                            vlSelf->__Vfunc_is_rd_fpr__42__Vfuncout = 0U;
                            goto __Vlabel1757;
                        }
                        __Vlabel1757: ;
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
