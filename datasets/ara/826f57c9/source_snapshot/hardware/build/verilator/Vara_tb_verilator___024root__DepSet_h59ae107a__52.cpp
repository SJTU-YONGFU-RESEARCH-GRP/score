// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1152(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1152\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
        = (0xfU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__instr_queue_ready) 
                    << 3U) | (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__bmiss) 
                                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_if)) 
                                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__replay)) 
                               << 2U) | ((2U & ((0x7ffffffeU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[2U] 
                                                    >> 1U)) 
                                                | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bp_valid) 
                                                   << 1U))) 
                                         | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__speculative_d)))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1153(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1153\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DN 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Fsm_enable_S)
            ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Sqrt_enable_S)
                ? (((QData)((IData)((1U & (IData)((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                                   [2U] 
                                                   >> 0x39U))))) 
                    << 0x39U) | ((0x1fffffffffffffcULL 
                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
                                     [2U] << 2U)) | (QData)((IData)(
                                                                    (3U 
                                                                     & (~ 
                                                                        ((2U 
                                                                          & ((0xfffffffeU 
                                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                                                              [2U]) 
                                                                             ^ 
                                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                                                              [2U] 
                                                                              << 1U))) 
                                                                         | (1U 
                                                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Sqrt_DI
                                                                            [2U]))))))))
                : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Iteration_cell_sum_AMASK_D
               [2U]) : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__nrbd_nrsc_U0__DOT__control_U0__DOT__Partial_remainder_DP);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1154(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1154\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = (0x9000U | ((0x200U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                                 << 9U)) | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? (2U 
                                                  | (1U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                        >> 0x12U)))
                                               : (1U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                     >> 0xfU))) 
                                             << 6U) 
                                            | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                        >> 0xcU)))
                                                  : 
                                                 (1U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                     >> 9U))) 
                                                << 3U) 
                                               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  (4U 
                                                   | (3U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                         >> 6U)))
                                                   : 
                                                  (3U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__index_nodes 
                                                      >> 3U)))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1155(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1155\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((8U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                  << 3U)) | (((IData)((0U != (0x60U 
                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (6U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1156(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1156\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                      >> 3U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                 >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__hold_en 
        = ((~ (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__result_vec_op_q)) 
                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__divsqrt_done_o)) 
               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  >> 1U))) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1157(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1157\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1158(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1158\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                    ? 4U : 5U) << 0xfU) | ((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                                              ? 2U : 3U) 
                                            << 0xcU) 
                                           | ((((1U 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                                                 ? 0U
                                                 : 1U) 
                                               << 9U) 
                                              | ((0x1c0U 
                                                  & (((0x20U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                       ? 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                       >> 0x12U)) 
                                                     << 6U)) 
                                                 | ((0x38U 
                                                     & (((8U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                          ? 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 9U)
                                                          : 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                          >> 0xcU)) 
                                                        << 3U)) 
                                                    | (7U 
                                                       & ((2U 
                                                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                           ? 
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                           >> 3U)
                                                           : 
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                           >> 6U))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1159(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1159\n"); );
    // Body
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__load_en) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__cnt_d 
            = (0x3fU & (0x3fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__div_shift)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__div_res_zero_d 
            = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__div_shift) 
                     >> 7U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__cnt_d 
            = (0x3fU & ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__cnt_q))
                         ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__cnt_q)
                         : ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__cnt_q) 
                            - (IData)(1U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__div_res_zero_d 
            = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__div_res_zero_q));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__b_reg_en)
            ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__load_en)
                ? VL_SHIFTL_QQI(64,64,8, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__operand_b, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__div_shift))
                : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__comp_inv_q)) 
                    << 0x3fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_q 
                                 >> 1U))) : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_q);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1160(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1160\n"); );
    // Body
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__load_en) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_zero_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_zero;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_neg_one_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_neg_one;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__res_inv_d 
            = (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_zero)) 
                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__rem)) 
               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__div_signed) 
                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT____VdfgTmp_h45a8f98d__0) 
                     ^ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_neg_one))));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_zero_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_zero_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_neg_one_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__op_b_neg_one_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__res_inv_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__i_mult__DOT__i_div__DOT__res_inv_q;
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1161(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1161\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                      >> 0x12U)) : 
                     ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                       << 0x17U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                    >> 9U)));
    __Vtemp_1[2U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                            << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                         >> 4U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                         << 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                   >> 0x1bU))) << 9U) 
                     | (0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                       << 0xeU) | (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                   >> 0x12U))
                                   : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       << 0x17U) | 
                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                       >> 9U)))));
    __Vtemp_1[3U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                            << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                         >> 4U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                         << 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                   >> 0x1bU))) >> 0x17U) 
                     | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                              << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                           >> 4U)) : 
                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                           << 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     >> 0x1bU))) << 9U));
    __Vtemp_1[4U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                            << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                        >> 0x16U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                         << 0x13U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                      >> 0xdU))) << 0x12U) 
                     | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                               << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                            >> 4U))
                           : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                               << 5U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                         >> 0x1bU))) 
                         >> 0x17U) | (0x3fe00U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                    ? 
                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                     << 0x1cU) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                       >> 4U))
                                                    : 
                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     << 5U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                       >> 0x1bU))) 
                                                  << 9U))));
    __Vtemp_1[5U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                            << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                        >> 0x16U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                         << 0x13U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                      >> 0xdU))) >> 0xeU) 
                     | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                          ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                              << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                          >> 0x16U))
                          : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                              << 0x13U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                           >> 0xdU))) 
                        << 0x12U));
    __Vtemp_1[6U] = ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                        ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U]
                        : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                            << 0x17U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
                                         >> 9U))) << 0x1bU) 
                     | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                               << 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                           >> 0x16U))
                           : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                               << 0x13U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                            >> 0xdU))) 
                         >> 0xeU) | (0x7fc0000U & (
                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                     ? 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x16U)
                                                     : 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                      << 0x13U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                        >> 0xdU))) 
                                                   << 0x12U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                            >> 0x12U)) : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 0x17U) 
                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                             >> 9U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_1[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
              ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U]
              : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                  << 0x17U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
                               >> 9U))) >> 5U) | ((
                                                   (1U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                                                    ? 
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U]
                                                    : 
                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                                     << 0x17U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                                       >> 9U))) 
                                                  << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
              ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U]
              : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                  << 0x17U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                               >> 9U))) >> 5U) | ((
                                                   (1U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                                                    ? 
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U]
                                                    : 
                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                                     << 0x17U) 
                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                                       >> 9U))) 
                                                  << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
             << 9U) | (0x1f0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[6U] 
                                 >> 0x17U))) | (0xfU 
                                                & (((1U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                                                     ? 
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U]
                                                     : 
                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                                      << 0x17U) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                                        >> 9U))) 
                                                   >> 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
                    >> 0x17U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                                   << 9U) | (0x1f0U 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
                                                >> 0x17U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((0xffffe000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xbU]) 
           | ((0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                       >> 0x17U)) | (0x1ff0U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                                                 << 9U) 
                                                | (0x1f0U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                                                      >> 0x17U))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((0x1fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xcU]) 
           | (0xffffe000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xcU]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((0x1fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xdU]) 
           | (0x3fe000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xdU]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] = 0U;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1162(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1162\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_d 
        = (0xffU & (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lzc__DOT__gen_lzc__DOT__sel_nodes)) 
                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_wren))
                     ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_q), 1U) 
                        ^ (0xfaU & (- (IData)((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_q))))))
                     : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__i_lfsr__DOT__lfsr_q)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1163(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1163\n"); );
    // Body
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_rst_load_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__rst_addr_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_select__DOT__fetch_address 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__rst_addr_q;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_select__DOT__fetch_address 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_q;
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bp_valid) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_select__DOT__fetch_address 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__predict_address;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__predict_address;
    }
    if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[9U] 
          >> 0xdU) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__instr_queue_ready))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = ((1ULL + (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_select__DOT__fetch_address 
                        >> 2U)) << 2U);
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__replay) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__address_overflow)
                ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__addr[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__addr[0U])))
                : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__addr[
                                    (((IData)(0x3fU) 
                                      + (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                               (1U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U))) 
                                     >> 5U)])) << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U))))) 
                   | (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                     (1U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U)))
                        ? 0ULL : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__addr[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0x7fU 
                                                     & VL_SHIFTL_III(7,7,32, 
                                                                     (1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U))) 
                                                   >> 5U)])) 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                               (1U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U))))) 
                      | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__addr[
                                         (3U & (VL_SHIFTL_III(7,7,32, 
                                                              (1U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U) 
                                                >> 5U))])) 
                         >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                   (1U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__popcount)), 6U))))));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__bmiss) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__eret) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__epc_commit_pcgen;
    }
    if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_commit[0U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__trap_vector_base_commit_pcgen;
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__set_pc_ctrl_pcgen) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d 
            = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xdU])) 
                 << 0x2aU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xcU])) 
                               << 0xaU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__commit_instr_o[0xbU])) 
                                           >> 0x16U))) 
               + ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__halt_ctrl)
                   ? 0ULL : 4ULL));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__set_debug_pc) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_d = 0x800ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[0U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_select__DOT__fetch_address);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_if_cache[1U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__npc_select__DOT__fetch_address 
                   >> 0x20U));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1164(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1164\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_n[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_n[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_n[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_n[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_q[3U];
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_icache_data_ack) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT____Vlvbound_h09f53be4__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__icache_adapter;
        if ((0x79U >= (0x7fU & ((IData)(0x3dU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WQ(122,61,(0x7fU & ((IData)(0x3dU) 
                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__write_pointer_q))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT____Vlvbound_h09f53be4__0);
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1165(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1165\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__update_lfsr = 0U;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q)))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__update_lfsr 
                        = (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_inv__DOT__gen_lzc__DOT__sel_nodes)));
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q)))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_flush_ctrl_cache) 
                          | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcache_q) 
                             & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))))))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__amo_req[4U] 
                              >> 6U)))) {
                    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__miss_req_masked_d))) {
                        if ((1U & (~ (8U >> (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes)))))) {
                            if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q)) 
                                       | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__load_ack)))) {
                                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_d) 
                                              >> (3U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes)))))) {
                                    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__tx_rdwr_collision)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__update_lfsr 
                                            = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_inv__DOT__gen_lzc__DOT__sel_nodes)) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lfsr_inv__DOT__lfsr_d 
        = (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__update_lfsr)
                     ? (VL_SHIFTR_III(8,8,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lfsr_inv__DOT__lfsr_q), 1U) 
                        ^ (0xfaU & (- (IData)((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lfsr_inv__DOT__lfsr_q))))))
                     : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lfsr_inv__DOT__lfsr_q)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1166(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1166\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_allocate = 0U;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__amo_ack) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 0U;
                }
            } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 0U;
            }
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q)))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_allocate = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 0U;
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d 
                = ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__cache_init_q))
                    ? 0U : 3U);
        }
    } else {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
                if ((0x3fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cnt_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 0U;
                }
            } else if ((IData)(((4U != (0x3cU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__amo_req[4U])) 
                                | (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_exp_backoff__DOT__cnt_q))))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 7U;
                }
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
            if ((1U & ((~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                       & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 0U;
            }
        } else if ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_flush_ctrl_cache) 
                          | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcache_q) 
                             & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d 
                = ((1U & ((~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                          & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q))))
                    ? 3U : 1U);
        } else if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__amo_req[4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d 
                = ((1U & ((~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                          & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q))))
                    ? 2U : 1U);
        } else if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__miss_req_masked_d))) {
            if ((1U & (8U >> (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes))))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdwr_collision)))) {
                    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 5U;
                    }
                }
            } else if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q)) 
                              | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__load_ack)))) {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_d) 
                              >> (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes)))))) {
                    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__tx_rdwr_collision)))) {
                        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_d = 6U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q)))) {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_flush_ctrl_cache) 
                              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcache_q) 
                                 & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))))))) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__amo_req[4U] 
                                  >> 6U)))) {
                        if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__miss_req_masked_d))) {
                            if ((1U & (~ (8U >> (3U 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes)))))) {
                                if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q)) 
                                           | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__load_ack)))) {
                                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_d) 
                                                  >> 
                                                  (3U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes)))))) {
                                        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__tx_rdwr_collision)))) {
                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_allocate 
                                                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack;
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
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_allocate) 
           | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__load_ack)) 
              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_h239cea81__0)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_allocate));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__dcache_stall_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__dcache_stall_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__runtime_cnt_en_q) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_miss_cache_perf))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__dcache_stall_cnt_d 
            = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__dcache_stall_cnt_d);
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1167(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1167\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
            << 2U) | ((2U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
                              & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                             << 1U)) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__dirty_rd_en)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1168(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1168\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((0xffffffc0U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
                            << 4U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel) 
                                      << 6U))) | ((0x20U 
                                                   & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 3U) 
                                                      & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                         << 5U))) 
                                                  | ((0xfffffff0U 
                                                      & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 3U) 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                            << 4U))) 
                                                     | ((8U 
                                                         & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             << 2U) 
                                                            & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 3U))) 
                                                        | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__dirty_rd_en)))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1169(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1169\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__dirty_rd_en) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_tx_id_rr__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1170(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1170\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__dirty_rd_en) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1171(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1171\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
                if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d 
                        = ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d) 
                                  | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__rd_ack_q))))
                            ? 6U : (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_hit_oh_d)) 
                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))
                                     ? 0U : 2U));
                }
            } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_ack_i) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 7U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_replay))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
            } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_ack))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 4U;
            }
        } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
            }
        } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_replay))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 6U;
        } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_ack))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d 
                = ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d) 
                          | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__rd_ack_q))))
                    ? 6U : (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_hit_oh_d)) 
                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))
                             ? 0U : 2U));
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1172(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1172\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
                if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
                } else if ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U] 
                                  | (7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))))) {
                    if ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d) 
                               | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__rd_ack_q))))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 6U;
                    } else if (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_hit_oh_d)) 
                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
                        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_ack_i) 
                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U] 
                                >> 0xeU))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 1U;
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 2U;
                    }
                }
            } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
            } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_ack_i) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 7U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_replay))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
            } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_ack))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 4U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d 
                    = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))
                        ? 0U : 4U);
            } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
            }
        } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d 
                = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_ack))
                    ? 4U : 5U);
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_replay))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 6U;
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_ack))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 3U;
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
        } else if ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U] 
                          | (7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))))) {
            if ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d) 
                       | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__rd_ack_q))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 6U;
            } else if (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_hit_oh_d)) 
                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 0U;
                if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_ack_i) 
                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U] 
                        >> 0xeU))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 1U;
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 2U;
            }
        }
    } else if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U] 
                 >> 0xeU) & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__fence_t_state_q)))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellinp__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_ack_i) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_d = 1U;
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1173(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1173\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_q[8U];
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT____Vlvbound_hea9a83b8__0[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__dcache_adapter[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT____Vlvbound_hea9a83b8__0[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__dcache_adapter[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT____Vlvbound_hea9a83b8__0[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__dcache_adapter[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT____Vlvbound_hea9a83b8__0[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__dcache_adapter[3U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT____Vlvbound_hea9a83b8__0[4U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__dcache_adapter[4U];
        if ((0x10dU >= (0x1ffU & ((IData)(0x87U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(270,135,(0x1ffU & ((IData)(0x87U) 
                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__write_pointer_q))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT____Vlvbound_hea9a83b8__0);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__dcache_adapter_data_req) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__adapter_dcache_data_ack) 
              & (0U == (0x60U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__dcache_adapter[4U]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_d 
        = (7U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_ack) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent))
                  ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_q)
                  : ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_ack)
                      ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_q) 
                         - (IData)(1U)) : ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__stores_inflight_q) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__store_sent)))));
}

extern const VlWide<18>/*575:0*/ Vara_tb_verilator__ConstPool__CONST_he144a37f_0;
extern const VlWide<9>/*287:0*/ Vara_tb_verilator__ConstPool__CONST_h4a851b67_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1174(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1174\n"); );
    // Init
    VlWide<4>/*104:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0;
    VL_ZERO_W(105, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0);
    VlWide<3>/*73:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0;
    VL_ZERO_W(74, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0);
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h6535c9cd__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h6535c9cd__0 = 0;
    VlWide<4>/*98:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0;
    VL_ZERO_W(99, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0);
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h2b29ec3c__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h2b29ec3c__0 = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0xeU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0xfU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0x10U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = Vara_tb_verilator__ConstPool__CONST_he144a37f_0[0x11U];
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                        >> 0x12U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
                        >> 0x12U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[8U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                        >> 0x12U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[3U] 
        = (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[8U] 
                     >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0x1ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
              << 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((0x1ffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
                        >> 0xeU)) | ((0x20000U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
                                                  >> 0xeU)) 
                                     | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
                                        << 0x12U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0x1ffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
                        >> 0xeU)) | ((0x20000U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
                                                  >> 0xeU)) 
                                     | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
                                        << 0x12U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0xf8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U]) 
           | ((0x1ffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
                           >> 0xeU)) | ((0x20000U & 
                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
                                          >> 0xeU)) 
                                        | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[3U] 
                                           << 0x12U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
            = (0x20000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
            << 0x19U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                         >> 7U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
            << 0x19U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
                         >> 7U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[2U] 
        = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                     >> 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
              << 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0x3fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
                     >> 0x19U)) | ((0x40U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
                                             >> 0x19U)) 
                                   | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
                                      << 7U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0xfffe0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
           | ((0x3fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
                        >> 0x19U)) | ((0x40U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
                                                >> 0x19U)) 
                                      | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[2U] 
                                         << 7U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h651a8e42__1 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                     >> 6U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
            = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h651a8e42__1) 
                  << 6U));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h6535c9cd__0 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0xffffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h6535c9cd__0) 
              << 5U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[3U] 
        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                 >> 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
              << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
                  >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
                                       >> 0x1eU)) | 
                                (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
                                 << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
                  >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
                                       >> 0x1eU)) | 
                                (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
                                 << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
                     >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
                                          >> 0x1eU)) 
                                   | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[3U] 
                                      << 2U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_ar_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h2b29ec3c__0 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h2b29ec3c__0));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                        >> 0x12U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
                        >> 0x12U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[8U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                        >> 0x12U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[3U] 
        = (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[8U] 
                     >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0xfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
              << 0xdU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = ((0xfffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
                      >> 0x13U)) | ((0x1000U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[0U] 
                                                >> 0x13U)) 
                                    | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
                                       << 0xdU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
        = ((0xfffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
                      >> 0x13U)) | ((0x1000U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[1U] 
                                                >> 0x13U)) 
                                    | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
                                       << 0xdU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
        = (0x3fffffU & ((0xfffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
                                   >> 0x13U)) | ((0x1000U 
                                                  & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[2U] 
                                                     >> 0x13U)) 
                                                 | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hdf64de79__0[3U] 
                                                    << 0xdU))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
            = (0x1000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
            << 0x19U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                         >> 7U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
            << 0x19U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
                         >> 7U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[2U] 
        = (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                     >> 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
              << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
                  >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[0U] 
                                       >> 0x1eU)) | 
                                (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
                                 << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0xfffff000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU]) 
           | ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
                     >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[1U] 
                                          >> 0x1eU)) 
                                   | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h4bdb36a2__0[2U] 
                                      << 2U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h651a8e42__1 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                     >> 6U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
            = ((0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h651a8e42__1) 
                  << 1U));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h6535c9cd__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
                 >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h6535c9cd__0));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[3U] 
        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                 >> 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
              << 0x1dU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0xfffffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
                          >> 3U)) | ((0x10000000U & 
                                      (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[0U] 
                                       >> 3U)) | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
                                                  << 0x1dU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xfffffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
                          >> 3U)) | ((0x10000000U & 
                                      (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[1U] 
                                       >> 3U)) | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
                                                  << 0x1dU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = ((0xfffffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
                          >> 3U)) | ((0x10000000U & 
                                      (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[2U] 
                                       >> 3U)) | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hf9498cae__0[3U] 
                                                  << 0x1dU)));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_ar_select))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
            = (0x10000000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h2b29ec3c__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
                 >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0xf7ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h2b29ec3c__0) 
              << 0x1bU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                      >> 0xcU) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                               >> 0x12U))))) {
                    if ((0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
                                    >> 0x11U));
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
        = ((0x3ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U]) 
           | (0xfffc0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                             << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[6U] 
        = (((0x3ffe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                         << 5U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                    >> 0x1bU)) | (0xfffc0000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                                                     << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[7U] 
        = (((0x3ffe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
                         << 5U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                                    >> 0x1bU)) | (0xfffc0000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
                                                     << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[8U] 
        = (0x7ffffffU & (((0x3ffe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
                                       << 5U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x10U] 
                                                  >> 0x1bU)) 
                         | (0x7fc0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0x11U] 
                                          << 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
        = (0xfe07ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
               << 5U) | (0x1eU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                                  >> 0x1bU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[1U] 
        = ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
                  >> 0x1bU)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                 << 5U) | (0x1eU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
                                            >> 0x1bU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[2U] 
        = ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                  >> 0x1bU)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
                                 << 5U) | (0x1eU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                            >> 0x1bU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
           | ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
                     >> 0x1bU)) | (0x1eU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
                                            >> 0x1bU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
        = ((0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
           | (0xffffff80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                             << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
        = (((0x60U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
                      << 5U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                                 >> 0x1bU)) | (0xffffff80U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
                                                  << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
        = ((0xfffe0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U]) 
           | (((0x60U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                         << 5U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
                                    >> 0x1bU)) | (0x1ff80U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                                     << 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U]) 
           | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                    >> 0x1bU)));
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
                = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U]);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
        = (0xfffdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
        = ((0xffffff9fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
           | (0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                       << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x11U] 
        = ((0x3fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x11U]) 
           | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[0U] 
               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
              << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x12U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[0U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[1U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x13U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[1U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[2U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[2U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[3U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x15U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[3U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[4U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x16U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[4U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[5U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[5U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[6U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x18U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[6U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[7U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x19U] 
        = (((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[7U] 
             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
            >> 0xaU) | ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[8U] 
                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U]) 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x1aU] 
        = (0x1ffffU & ((Vara_tb_verilator__ConstPool__CONST_h4a851b67_0[8U] 
                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U]) 
                       >> 0xaU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                    = (0xffffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]);
            }
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                    = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
                       | (0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                                   << 5U)));
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (1U > (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
                = ((0xfffdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U]) 
                   | (0x20000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                  << 5U)));
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x1000U == (0xc1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU]))) 
                & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
                   | (0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                               << 5U)));
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
              >> 0xcU) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                       >> 0x12U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
                = (0xfffdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U]);
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                    = (0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]);
            }
        }
    }
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                     >> 5U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U])) {
            if ((0U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
              >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
              >> 0x11U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__id_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q))) {
                if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
                      >> 7U) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
                                             >> 0xdU))))) {
                    if ((0x4000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__id_d 
                        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x1aU] 
                                    >> 0xcU));
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
        = ((0x3ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U]) 
           | (0xfffc0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
                             << 0xaU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
        = (((0x3fc00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x18U] 
                         << 0xaU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
                                      >> 0x16U)) | 
           (0xfffc0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x18U] 
                           << 0xaU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[7U] 
        = (((0x3fc00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x19U] 
                         << 0xaU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x18U] 
                                      >> 0x16U)) | 
           (0xfffc0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x19U] 
                           << 0xaU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
        = (0x7ffffffU & (((0x3fc00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x1aU] 
                                       << 0xaU)) | 
                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x19U] 
                           >> 0x16U)) | (0x7fc0000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x1aU] 
                                            << 0xaU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
        = (0xfe07ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x12U] 
               << 0xaU) | (0x3feU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x11U] 
                                     >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[1U] 
        = ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x12U] 
                  >> 0x16U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x13U] 
                                 << 0xaU) | (0x3feU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x12U] 
                                                >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[2U] 
        = ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x13U] 
                  >> 0x16U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
                                 << 0xaU) | (0x3feU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x13U] 
                                                >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U]) 
           | ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
                     >> 0x16U)) | (0x1eU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
                                            >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
        = ((0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x15U] 
               << 0xaU) | (0x380U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
                                     >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[4U] 
        = ((0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x15U] 
                     >> 0x16U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x16U] 
                                    << 0xaU) | (0x380U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x15U] 
                                                   >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
        = ((0xfffe0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U]) 
           | ((0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x16U] 
                        >> 0x16U)) | (0x1ff80U & ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
                                                   << 0xaU) 
                                                  | (0x380U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x16U] 
                                                        >> 0x16U))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U]) 
           | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x11U] 
                    >> 0x16U)));
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__r_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__r_state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U]);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
        = (0xfffdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
        = ((0xffffff9fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U]) 
           | (0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
                       >> 0x16U)));
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                    = (0xffffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U]);
            }
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q)))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                    = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U]) 
                       | (0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
                                   >> 0x16U)));
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_state_q))) {
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (1U > (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                = ((0xfffdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U]) 
                   | (0x20000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
                                  << 0xaU)));
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x80U == (0x6080U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U]))) 
                & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U]) 
                   | (0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x14U] 
                               >> 0x16U)));
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
              >> 7U) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__periph_narrow_axi_req[0x17U] 
                                     >> 0xdU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                = (0xfffdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U]);
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U] 
                    = (0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U]);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he1b2196d__0 
            = ((0x1f00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                           << 8U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
                                      >> 0x18U));
        if ((0xcU >= (0xfU & ((IData)(0xdU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fffU) << (0xfU & 
                                             ((IData)(0xdU) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n)) 
                   | (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he1b2196d__0) 
                                 << (0xfU & ((IData)(0xdU) 
                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_data 
        = ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q))))
            ? (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                        >> (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__occupied 
                 >> (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                 >> (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[3U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__occupied 
                 >> (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
                              >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                 >> (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
                              >> 0x16U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT____Vlvbound_hbd47936f__0 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[8U] 
                        >> 0x16U));
        if ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (7U & ((IData)(5U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
                   | (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT____Vlvbound_hbd47936f__0) 
                               << (7U & ((IData)(5U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))));
        }
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_data 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[8U] 
                        >> 0x16U));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported 
        = (1U & (~ ([&]() {
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__len 
                        = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                           >> 0x18U);
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__cache 
                        = (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                                   >> 0xeU));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__burst 
                        = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                                 >> 0x13U));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__atop = 0U;
                    {
                        if ((0U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__len))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__Vfuncout = 1U;
                            goto __Vlabel1446;
                        }
                        if ((2U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__burst))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__Vfuncout = 0U;
                            goto __Vlabel1446;
                        }
                        if ((0U != (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__atop))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__Vfuncout = 0U;
                            goto __Vlabel1446;
                        }
                        if ((1U & (~ ([&]() {
                                            vlSelf->__Vfunc_modifiable__20__cache 
                                                = vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__cache;
                                            vlSelf->__Vfunc_modifiable__20__Vfuncout 
                                                = (0U 
                                                   != 
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_modifiable__20__cache)));
                                        }(), (IData)(vlSelf->__Vfunc_modifiable__20__Vfuncout))))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__Vfuncout 
                                = ((1U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__burst)) 
                                   & (0x10U < (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__len)));
                            goto __Vlabel1446;
                        }
                        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__Vfuncout = 1U;
                        __Vlabel1446: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__19__Vfuncout))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported 
        = (1U & (~ ([&]() {
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__len 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                                    >> 0xeU));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__cache 
                        = (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                                   >> 4U));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__burst 
                        = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[6U] 
                                 >> 9U));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__atop 
                        = (0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                                    >> 0x13U));
                    {
                        if ((0U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__len))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__Vfuncout = 1U;
                            goto __Vlabel1447;
                        }
                        if ((2U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__burst))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__Vfuncout = 0U;
                            goto __Vlabel1447;
                        }
                        if ((0U != (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__atop))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__Vfuncout = 0U;
                            goto __Vlabel1447;
                        }
                        if ((1U & (~ ([&]() {
                                            vlSelf->__Vfunc_modifiable__18__cache 
                                                = vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__cache;
                                            vlSelf->__Vfunc_modifiable__18__Vfuncout 
                                                = (0U 
                                                   != 
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_modifiable__18__cache)));
                                        }(), (IData)(vlSelf->__Vfunc_modifiable__18__Vfuncout))))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__Vfuncout 
                                = ((1U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__burst)) 
                                   & (0x10U < (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__len)));
                            goto __Vlabel1447;
                        }
                        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__Vfuncout = 1U;
                        __Vlabel1447: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__txn_supported__17__Vfuncout))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U] 
        = (0x37ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]);
    if (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U])))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U] 
            = (0x80000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full))))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_q)
            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT____Vlvbound_he4ab719f__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_data;
        if ((9U >= (0xfU & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (0xfU & ((IData)(5U) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
                   | (0x3ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT____Vlvbound_he4ab719f__0) 
                                << (0xfU & ((IData)(5U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
          >> 0x11U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U] 
                       >> 0x15U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (IData)(((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U])) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U] 
                          >> 0x13U))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 2U) & (0U == (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else if (((0U == (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
                & (3U == (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (4U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
        = ((0x2fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
           | (0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
        = ((0x3ffc00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
           | (0x3ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U] 
                        >> 9U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                                  >> 0x1bU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[0U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[1U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = (0x3ffe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = ((0x3ffe0fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
                   | (0x3fffffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                   << 4U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[0U] 
                = ((0xfffffff1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[0U]) 
                   | (0xfffffffeU & (8U | ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_q)) 
                                           << 1U))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = (0x200U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
            if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U])) {
                if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U] 
                    >> 9U) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                                 >> 0x1bU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 3U;
        } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((1U & (((~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full))) 
                    & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                   & (~ ((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full) 
                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                            >> 0x18U)))))) {
            if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                         >> 0x11U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) 
                       & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                          | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((1U & (((~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full))) 
                       & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                      & (~ ((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full) 
                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                               >> 0x18U)))))) {
        if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[5U] 
                     >> 0x11U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                  | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                     == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) 
                   & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
        = (0x1fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
        = ((0x3003ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
           | (0x7fc00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
            } else if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = (0x3c03ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) 
                        & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                        ? 6U : 1U);
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = ((0x3807ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
                   | (0x3ff800U & (0x41000U | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                               << 0xdU))));
        } else if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                           >> 0x12U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = (0x80000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
            if ((IData)((0xaU == (0xaU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                               >> 0x12U) & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])))
                        ? 4U : 5U);
            }
        } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = ((0x37ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
                   | (0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = (0x80000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                = ((IData)((0xaU == (0xaU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])))
                    ? ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                               >> 0x12U) & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])))
                        ? 4U : 5U) : 3U);
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (1U > (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = ((0x1fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
                   | (0x200000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]));
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x1000U == (0xc1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU]))) 
                & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = ((0x37ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]) 
                   | (0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp[2U]));
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
              >> 0xcU) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                       >> 0x12U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                = (0x200000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 2U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                    = (0x80000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((IData)((0xaU == (0xaU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])))
                        ? ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp[2U] 
                                   >> 0x12U) & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])))
                            ? 4U : 5U) : 3U);
            }
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
            ? ((IData)(1U) << (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__filtered_req[8U] 
                                        >> 0x16U)))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)));
}

extern const VlWide<16>/*511:0*/ Vara_tb_verilator__ConstPool__CONST_hce66387d_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1175(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1175\n"); );
    // Init
    VlWide<4>/*104:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0;
    VL_ZERO_W(105, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0);
    QData/*37:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb8cc19e__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb8cc19e__0 = 0;
    VlWide<4>/*98:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0;
    VL_ZERO_W(99, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0);
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h0ec1f384__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h0ec1f384__0 = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[0xeU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = Vara_tb_verilator__ConstPool__CONST_hce66387d_0[0xfU];
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
                         >> 0xeU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                         >> 0xeU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
                         >> 0xeU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[3U] 
        = (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                     >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0x1fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
              << 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U] 
        = ((0x1fffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
                       >> 0x12U)) | ((0x2000U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
                                                 >> 0x12U)) 
                                     | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
                                        << 0xeU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U] 
        = ((0x1fffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
                       >> 0x12U)) | ((0x2000U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
                                                 >> 0x12U)) 
                                     | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
                                        << 0xeU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xff800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((0x1fffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
                          >> 0x12U)) | ((0x2000U & 
                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
                                          >> 0x12U)) 
                                        | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[3U] 
                                           << 0xeU))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
            = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U])) 
                               << 0x19U) | ((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U])) 
                                            >> 7U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
                       << 1U)) << 6U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
        = ((0xffffe000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]) 
           | (((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
                        << 1U)) >> 0x1aU) | ((IData)(
                                                     ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
                                                       << 1U) 
                                                      >> 0x20U)) 
                                             << 6U)));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb90f62c__1 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                     >> 6U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
            = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb90f62c__1) 
                  << 6U));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb8cc19e__0 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0xffffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb8cc19e__0) 
              << 5U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[3U] 
        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                 >> 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
              << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U] 
        = ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
                  >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
                                       >> 0x1eU)) | 
                                (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
                                 << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U] 
        = ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
                  >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
                                       >> 0x1eU)) | 
                                (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
                                 << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
           | ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
                     >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
                                          >> 0x1eU)) 
                                   | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[3U] 
                                      << 2U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_ar_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
            = (2U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h0ec1f384__0 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]) 
           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h0ec1f384__0));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
                         >> 0xeU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                         >> 0xeU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
                         >> 0xeU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[3U] 
        = (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                     >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
              << 5U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
        = ((0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
                    >> 0x1bU)) | ((0x10U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[0U] 
                                            >> 0x1bU)) 
                                  | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
                                     << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
        = ((0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
                    >> 0x1bU)) | ((0x10U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[1U] 
                                            >> 0x1bU)) 
                                  | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
                                     << 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
        = (0x3fffU & ((0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
                               >> 0x1bU)) | ((0x10U 
                                              & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[2U] 
                                                 >> 0x1bU)) 
                                             | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hbee04519__0[3U] 
                                                << 5U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
            = (0x10U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U])) 
                               << 0x19U) | ((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U])) 
                                            >> 7U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0x1fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
                       << 1U)) << 0x1dU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU] 
        = (((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
                     << 1U)) >> 3U) | ((IData)(((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
                                                 << 1U) 
                                                >> 0x20U)) 
                                       << 0x1dU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
        = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]) 
           | ((IData)(((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h270cd839__0 
                        << 1U) >> 0x20U)) >> 3U));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb90f62c__1 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                     >> 6U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
            = ((0xdfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
               | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb90f62c__1) 
                  << 0x1dU));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb8cc19e__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_b_readies) 
                 >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xefffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_hcb8cc19e__0) 
              << 0x1cU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
            << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
                         >> 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[3U] 
        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
                 >> 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
              << 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
        = ((0xffffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
                         >> 7U)) | ((0x1000000U & (
                                                   ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[0U] 
                                                   >> 7U)) 
                                    | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
                                       << 0x19U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
        = ((0xffffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
                         >> 7U)) | ((0x1000000U & (
                                                   ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[1U] 
                                                   >> 7U)) 
                                    | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
                                       << 0x19U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
        = ((0xf0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU]) 
           | ((0xffffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
                            >> 7U)) | ((0x1000000U 
                                        & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[2U] 
                                           >> 7U)) 
                                       | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h7da722ba__0[3U] 
                                          << 0x19U))));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_ar_select))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
            = (0x1000000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h0ec1f384__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__mst_r_readies) 
                 >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
        = ((0xff7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT____Vlvbound_h0ec1f384__0) 
              << 0x17U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__id_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q))) {
                if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
                      >> 0xdU) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
                                               >> 0x13U))))) {
                    if ((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__id_d 
                        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                                    >> 0x12U));
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_q;
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                      >> 4U) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                                             >> 0xaU))))) {
                    if ((0x800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_valid = 1U;
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_d 
                        = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                                    >> 9U));
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
        = ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U]) 
           | (0xffffc000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                             << 9U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[5U] 
        = (((0x3e00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
                        << 9U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                                   >> 0x17U)) | (0xffffc000U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
                                                    << 9U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[6U] 
        = (((0x3e00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                        << 9U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xdU] 
                                   >> 0x17U)) | (0xffffc000U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                                    << 9U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[7U] 
        = (0x7fffffU & (((0x3e00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                                     << 9U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xeU] 
                                                >> 0x17U)) 
                        | (0x7fc000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xfU] 
                                        << 9U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
        = (0xffe07fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
               << 9U) | (0x1feU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                                   >> 0x17U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[1U] 
        = ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                  >> 0x17U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
                                 << 9U) | (0x1feU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[8U] 
                                            >> 0x17U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[2U] 
        = ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
                  >> 0x17U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                 << 9U) | (0x1feU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[9U] 
                                            >> 0x17U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
           | ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                     >> 0x17U)) | (0x1eU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                            >> 0x17U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
        = ((0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
           | ((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])) 
                                           << 0x22U) 
                                          | (((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU])) 
                                              << 2U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])) 
                                                >> 0x1eU))))) 
              << 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
        = ((0xffffe000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U]) 
           | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])) 
                                            << 0x22U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU])) 
                                               << 2U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])) 
                                                 >> 0x1eU))))) 
               >> 0x19U) | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU])) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xbU])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])) 
                                               >> 0x1eU)))) 
                                     >> 0x20U)) << 7U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U]) 
           | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                    >> 0x17U)));
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
                = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U]);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
        = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
        = ((0xffffff9fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
           | (0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                       >> 0x17U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
        = ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U]) 
           | (0xffffc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[5U] 
        = ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]) 
           | (0xffffc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[5U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[6U] 
        = ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]) 
           | (0xffffc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[6U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[7U] 
        = (0x7fffffU & ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U]) 
                        | (0x7fc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
        = (0xffe07fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U]) 
           | (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[1U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U]) 
           | (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[1U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[2U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]) 
           | (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[2U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]) 
           | ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]) 
              | (0x1eU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
        = ((0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]) 
           | ((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U])) 
                                           << 0x19U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U])) 
                                             >> 7U)))) 
              << 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
        = ((0xffffe000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U]) 
           | (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U])) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U])) 
                                              >> 7U)))) 
               >> 0x19U) | ((IData)(((0x3fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U])) 
                                          << 0x19U) 
                                         | ((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U])) 
                                            >> 7U))) 
                                     >> 0x20U)) << 7U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
        = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U]) 
           | (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0U]));
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__r_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__r_state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
                = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U]);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
        = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
        = ((0xffffff9fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]) 
           | (0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]));
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
                    = (0xffffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]);
            }
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q)))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
                    = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]) 
                       | (0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]));
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_state_q))) {
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (1U > (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                = ((0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U]) 
                   | (0x2000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]));
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x2000U == (0x182000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U]))) 
                & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
                = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]) 
                   | (0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[3U]));
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
              >> 0xdU) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[4U] 
                                       >> 0x13U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U]);
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
                    = (0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_load = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_en = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_clear = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop = 0U;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                    = (0xffffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]);
            }
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q)))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                    = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
                       | (0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                   >> 0x17U)));
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (1U > (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
                = ((0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U]) 
                   | (0x2000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                                 << 9U)));
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x10U == (0xc10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]))) 
                & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                = ((0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]) 
                   | (0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                               >> 0x17U)));
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
              >> 4U) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                                     >> 0xaU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
                = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U]);
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                    = (0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U]);
            }
        }
    }
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                     >> 5U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_q) {
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U])) {
            if ((0U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_d = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_clear = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop = 1U;
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_en = 1U;
        }
    } else if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_d = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_busy_load = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
              >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
              >> 0xdU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__occupied 
                 >> (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__mst_select_q 
                 >> (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__occupied 
                 >> (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[7U] 
                              >> 0x12U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__mst_select_q 
                 >> (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[7U] 
                              >> 0x12U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported 
        = (1U & (~ ([&]() {
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__len 
                        = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
                           >> 0x18U);
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__cache 
                        = (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
                                   >> 0xeU));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__burst 
                        = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
                                 >> 0x13U));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__atop = 0U;
                    {
                        if ((0U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__len))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__Vfuncout = 1U;
                            goto __Vlabel1448;
                        }
                        if ((2U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__burst))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__Vfuncout = 0U;
                            goto __Vlabel1448;
                        }
                        if ((0U != (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__atop))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__Vfuncout = 0U;
                            goto __Vlabel1448;
                        }
                        if ((1U & (~ ([&]() {
                                            vlSelf->__Vfunc_modifiable__8__cache 
                                                = vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__cache;
                                            vlSelf->__Vfunc_modifiable__8__Vfuncout 
                                                = (0U 
                                                   != 
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_modifiable__8__cache)));
                                        }(), (IData)(vlSelf->__Vfunc_modifiable__8__Vfuncout))))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__Vfuncout 
                                = ((1U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__burst)) 
                                   & (0x10U < (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__len)));
                            goto __Vlabel1448;
                        }
                        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__Vfuncout = 1U;
                        __Vlabel1448: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__7__Vfuncout))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported 
        = (1U & (~ ([&]() {
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__len 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[5U] 
                                    >> 0xaU));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__cache 
                        = (0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[5U]);
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__burst 
                        = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[5U] 
                                 >> 5U));
                    vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__atop 
                        = (0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                                    >> 0xfU));
                    {
                        if ((0U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__len))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__Vfuncout = 1U;
                            goto __Vlabel1449;
                        }
                        if ((2U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__burst))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__Vfuncout = 0U;
                            goto __Vlabel1449;
                        }
                        if ((0U != (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__atop))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__Vfuncout = 0U;
                            goto __Vlabel1449;
                        }
                        if ((1U & (~ ([&]() {
                                            vlSelf->__Vfunc_modifiable__6__cache 
                                                = vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__cache;
                                            vlSelf->__Vfunc_modifiable__6__Vfuncout 
                                                = (0U 
                                                   != 
                                                   (2U 
                                                    & (IData)(vlSelf->__Vfunc_modifiable__6__cache)));
                                        }(), (IData)(vlSelf->__Vfunc_modifiable__6__Vfuncout))))) {
                            vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__Vfuncout 
                                = ((1U == (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__burst)) 
                                   & (0x10U < (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__len)));
                            goto __Vlabel1449;
                        }
                        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__Vfuncout = 1U;
                        __Vlabel1449: ;
                    }
                }(), (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__txn_supported__5__Vfuncout))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_clear) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d = 0U;
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_load) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT____Vcellout__i_r_fifo__data_o));
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_cnt_en) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_d 
            = (0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_counter__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__r_fifo_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he1b2196d__0 
            = ((0x1f00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U] 
                           << 8U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[0U] 
                                      >> 0x18U));
        if ((0xcU >= (0xfU & ((IData)(0xdU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fffU) << (0xfU & 
                                             ((IData)(0xdU) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__mem_n)) 
                   | (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT____Vlvbound_he1b2196d__0) 
                                 << (0xfU & ((IData)(0xdU) 
                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_r_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_data 
        = ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q))))
            ? (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_q) 
                        >> (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full))))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_q)
            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
        = (0x37ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp);
    if (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        if ((IData)((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U])))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push = 1U;
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
            = (0x8000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((1U & (((~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full))) 
                    & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                   & (~ ((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full) 
                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                            >> 0x14U)))))) {
            if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                         >> 0xdU) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                     | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                        == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) 
                       & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                          | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((1U & (((~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full))) 
                       & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                      & (~ ((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full) 
                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                               >> 0x14U)))))) {
        if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                     >> 0xdU) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                 | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                    == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) 
                   & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported) 
                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT____Vlvbound_hbd47936f__0 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[7U] 
                        >> 0x12U));
        if ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (7U & ((IData)(5U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__mem_n)) 
                   | (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT____Vlvbound_hbd47936f__0) 
                               << (7U & ((IData)(5U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_push))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_data 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[7U] 
                        >> 0x12U));
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_pop) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__write_pointer_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__status_cnt_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_w_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_pop)) 
          & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__b_fifo_push) 
         & (2U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT____Vlvbound_he4ab719f__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__w_fifo_data;
        if ((9U >= (0xfU & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (0xfU & ((IData)(5U) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__mem_n)) 
                   | (0x3ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT____Vlvbound_he4ab719f__0) 
                                << (0xfU & ((IData)(5U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__i_b_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q;
    if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[4U] 
          >> 0xdU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                      >> 0x35U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))));
    }
    if ((1U & (IData)(((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_req[3U])) 
                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                          >> 0x33U))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d)) 
               | (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d) 
                        - (IData)(1U))));
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q) 
          >> 2U) & (0U == (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    } else if (((0U == (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))) 
                & (3U == (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d 
            = (4U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_d));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
        = ((0x2fffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
           | ((QData)((IData)((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                                             >> 0x34U))))) 
              << 0x34U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
        = ((0x3ffc0000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
           | (0x3ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q;
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
            if ((1U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                                >> 0x29U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                                              >> 0x17U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = (0x3ffe0000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = ((0x3ffe0fffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
                   | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_q)) 
                      << 0x24U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = ((0x3ffffffffffff1ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
                   | ((QData)((IData)((4U | (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_q))))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = (0x20000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
            if ((0x800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U])) {
                if ((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                                   >> 1U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready = 1U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                        = (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d) 
                                    - (IData)(1U)));
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_q))) {
        if ((1U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                            >> 0x29U)) & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[7U] 
                                             >> 0x17U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 3U;
        } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_beats_d 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT____Vcellout__r_resp_cmd__data_o;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 2U;
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_state_d = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
            ? ((IData)(1U) << (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[7U] 
                                        >> 0x12U)))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_push_ready 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
        = (0x1fffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
        = ((0x3003ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
           | ((QData)((IData)((0x1ffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                                                 >> 0x2aU))))) 
              << 0x2aU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 0U;
            } else if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = (0x3c03ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
            if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_valid) 
                        & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__r_resp_cmd_pop_ready)))
                        ? 6U : 1U);
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = ((0x3807ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
                   | ((QData)((IData)((0x82U | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__id_q) 
                                                << 2U)))) 
                      << 0x2bU));
        } else if ((1U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                                   >> 0x32U)) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                                 >> 0x1cU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = (0x8000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
            if ((IData)((0xa0000000U == (0xa0000000U 
                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((1U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                                       >> 0x32U)) & 
                              (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                  >> 0x1cU)))) ? 4U
                        : 5U);
            }
        } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = ((0x37ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                                                     >> 0x33U))))) 
                      << 0x33U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = (0x8000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                = ((IData)((0xa0000000U == (0xa0000000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])))
                    ? ((1U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                                       >> 0x32U)) & 
                              (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                  >> 0x1cU)))) ? 4U
                        : 5U) : 3U);
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_q))) {
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream) 
             | (1U > (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_cnt_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = ((0x1fffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                                                     >> 0x35U))))) 
                      << 0x35U));
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) 
             | ((IData)((0x10U == (0xc10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU]))) 
                & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__complete_w_without_aw_downstream))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = ((0x37ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__err_resp 
                                                     >> 0x33U))))) 
                      << 0x33U));
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
              >> 4U) & (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xcU] 
                                     >> 0xaU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                = (0x20000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__aw_without_complete_w_downstream) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 2U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                    = (0x8000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d 
                    = ((IData)((0xa0000000U == (0xa0000000U 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU])))
                        ? ((1U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__axi_err_resp 
                                           >> 0x32U)) 
                                  & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_demux_simple__mst_reqs_o[0xaU] 
                                        >> 0x1cU))))
                            ? 4U : 5U) : 3U);
            }
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_uart_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_err_slv__DOT__genblk1__DOT__i_atop_filter__DOT__w_state_d = 1U;
    }
}

extern const VlWide<8>/*255:0*/ Vara_tb_verilator__ConstPool__CONST_hedc19b44_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1176(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1176\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_18;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_21;
    VlWide<4>/*127:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_43;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_46;
    VlWide<4>/*127:0*/ __Vtemp_47;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_49;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__inject_aw_into_ar_req = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U] 
        = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[5U] 
               << 0x19U) | (0x1000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[4U] 
                                          >> 7U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[8U] 
        = ((0xffffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[5U] 
                         >> 7U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U] 
                                     << 0x19U) | (0x1000000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[5U] 
                                                     >> 7U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[9U] 
        = ((0xffffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U] 
                         >> 7U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U] 
                                     << 0x19U) | (0x1000000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U] 
                                                     >> 7U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[0xaU] 
        = ((0xffffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U] 
                         >> 7U)) | (0xff000000U & (
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U] 
                                                    << 0x19U) 
                                                   | (0x1000000U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U] 
                                                         >> 7U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[0xbU] 
        = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U] 
                 >> 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
        = (0x7ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U] 
        = ((0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[1U] 
               << 0x1aU) | (0x3ffffe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U] 
                                          >> 6U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[4U] 
        = ((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[1U] 
                     >> 6U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[2U] 
                                 << 0x1aU) | (0x3ffffe0U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[1U] 
                                                 >> 6U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[5U] 
        = ((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[2U] 
                     >> 6U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[3U] 
                                 << 0x1aU) | (0x3ffffe0U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[2U] 
                                                 >> 6U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[6U] 
        = ((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[3U] 
                     >> 6U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[4U] 
                                 << 0x1aU) | (0x3ffffe0U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[3U] 
                                                 >> 6U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U] 
        = ((0xff000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U]) 
           | ((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[4U] 
                        >> 6U)) | (0xffffe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[4U] 
                                                >> 6U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
        = (0xdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[1U] 
            << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U] 
                      >> 0x1eU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[2U] 
            << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[1U] 
                      >> 0x1eU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[3U] 
            << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[2U] 
                      >> 0x1eU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[4U] 
            << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[3U] 
                      >> 0x1eU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
        = ((0xe01ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U]) 
           | (0x1fe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U] 
        = ((0xffffffefU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U]) 
           | (0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[3U]));
    if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U] 
          >> 0x18U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                       >> 0x13U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
            = (0x3fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U]);
    }
    if (((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_q)) 
         || (2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_q)))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U] 
                    >> 5U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                              >> 0x11U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                = (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[1U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[2U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[3U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
                = (0xc0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U]);
        }
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[4U] 
                      >> 0x1fU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                = ((0xdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U]) 
                   | (0x20000U & (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U] 
                                       >> 5U)) << 0x11U) 
                                  | (0xfffe0000U & 
                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U]))));
            if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[3U] 
                        >> 5U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                                  >> 0x11U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset 
                    = (QData)((IData)((0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U] 
                                               >> 4U))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b = 0x10U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                    = (QData)((IData)((7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U] 
                                             >> 4U))));
                if ((((0ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] 
                        = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U]) 
                           | ((0x118U >= ((IData)(0x70U) 
                                          + (0x3fU 
                                             & (IData)(
                                                       VL_SHIFTL_QQI(64,64,32, 
                                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                                                                      - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                               ? (0xffU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                             ? 0U : 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                             (((IData)(0x77U) 
                                               + (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x70U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                               : 0U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xffffbfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0xeU));
                }
                if ((((1ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((1ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] 
                        = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((1ULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((1ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((1ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((1ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 8U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xffff7fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0xfU));
                }
                if ((((2ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((2ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((2ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] 
                        = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((2ULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((2ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((2ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((2ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x10U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(2U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(2U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xfffeffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x10U));
                }
                if ((((3ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((3ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((3ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] 
                        = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((3ULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((3ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((3ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((3ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x18U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(3U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(3U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(3U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xfffdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x11U));
                }
                if ((((4ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((4ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((4ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] 
                        = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U]) 
                           | ((0x118U >= ((IData)(0x70U) 
                                          + (0x3fU 
                                             & (IData)(
                                                       VL_SHIFTL_QQI(64,64,32, 
                                                                     ((4ULL 
                                                                       + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                      - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                               ? (0xffU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((4ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                             ? 0U : 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                             (((IData)(0x77U) 
                                               + (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((4ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x70U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((4ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                               : 0U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(4U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(4U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(4U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xfffbffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x12U));
                }
                if ((((5ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((5ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((5ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] 
                        = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((5ULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((5ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((5ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((5ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 8U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(5U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(5U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(5U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xfff7ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x13U));
                }
                if ((((6ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((6ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((6ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] 
                        = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((6ULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((6ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((6ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((6ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x10U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(6U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(6U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(6U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xffefffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x14U));
                }
                if ((((7ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((7ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((7ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] 
                        = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((7ULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((7ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((7ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((7ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x18U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(7U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(7U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(7U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xffdfffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x15U));
                }
                if ((((8ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((8ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((8ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] 
                        = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U]) 
                           | ((0x118U >= ((IData)(0x70U) 
                                          + (0x3fU 
                                             & (IData)(
                                                       VL_SHIFTL_QQI(64,64,32, 
                                                                     ((8ULL 
                                                                       + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                      - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                               ? (0xffU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((8ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                             ? 0U : 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                             (((IData)(0x77U) 
                                               + (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((8ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x70U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((8ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                               : 0U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xffbfffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x16U));
                }
                if ((((9ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((9ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((9ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] 
                        = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((9ULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((9ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((9ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((9ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 8U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xff7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x17U));
                }
                if ((((0xaULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((0xaULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((0xaULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] 
                        = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((0xaULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xaULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xaULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xaULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x10U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(2U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(2U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(2U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xfeffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x18U));
                }
                if ((((0xbULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((0xbULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((0xbULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] 
                        = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((0xbULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xbULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xbULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xbULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x18U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(3U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(3U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(3U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xfdffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x19U));
                }
                if ((((0xcULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((0xcULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((0xcULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] 
                        = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U]) 
                           | ((0x118U >= ((IData)(0x70U) 
                                          + (0x3fU 
                                             & (IData)(
                                                       VL_SHIFTL_QQI(64,64,32, 
                                                                     ((0xcULL 
                                                                       + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                      - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                               ? (0xffU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xcULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                             ? 0U : 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                             (((IData)(0x77U) 
                                               + (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xcULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x70U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xcULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              >> (0x1fU 
                                                  & ((IData)(0x70U) 
                                                     + 
                                                     (0x3fU 
                                                      & (IData)(
                                                                VL_SHIFTL_QQI(64,64,32, 
                                                                              ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                               - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                               : 0U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(4U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(4U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(4U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xfbffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x1aU));
                }
                if ((((0xdULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((0xdULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((0xdULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] 
                        = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((0xdULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xdULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xdULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xdULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 8U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(5U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(5U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(5U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xf7ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x1bU));
                }
                if ((((0xeULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((0xeULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((0xeULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] 
                        = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((0xeULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xeULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xeULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xeULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x10U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(6U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(6U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(6U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xefffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x1cU));
                }
                if ((((0xfULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                      & ((0xfULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset) 
                         < (1ULL << (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U])))) 
                     & (8ULL > ((0xfULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] 
                        = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U]) 
                           | (((0x118U >= ((IData)(0x70U) 
                                           + (0x3fU 
                                              & (IData)(
                                                        VL_SHIFTL_QQI(64,64,32, 
                                                                      ((0xfULL 
                                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                       - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))
                                ? (0xffU & (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x70U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                              (((IData)(0x77U) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xfULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                               (((IData)(0x70U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xfULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xfULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset), 3U))))))))
                                : 0U) << 0x18U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0 
                        = ((0x118U >= ((IData)(0x68U) 
                                       + (7U & (((IData)(7U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))) 
                           && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[
                                     (((IData)(0x68U) 
                                       + (7U & (((IData)(7U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset)))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x68U) 
                                                     + 
                                                     (7U 
                                                      & (((IData)(7U) 
                                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__slv_port_offset)) 
                                                         - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk5__DOT__mst_port_offset))))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = ((0xdfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT____Vlvbound_hcf9f9877__0) 
                              << 0x1dU));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                    = ((0xfffff807U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                       | (0x7f8U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U] 
                                       << 0x1dU) | 
                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U] 
                                       >> 3U)) - (IData)(1U)) 
                                    << 3U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                    = ((0x3fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] 
                          << 0x1eU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[1U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[0U] 
                        >> 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] 
                                  << 0x1eU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[2U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[1U] 
                        >> 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] 
                                  << 0x1eU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[3U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[2U] 
                        >> 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] 
                                  << 0x1eU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
                    = ((0xc0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U]) 
                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_data[3U] 
                          >> 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                    = ((0xffffcfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                       | (0xfffff000U & (((0U == (0xffU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U] 
                                                     >> 3U))) 
                                          << 0xdU) 
                                         | (0x1000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[3U] 
                                               << 6U)))));
                if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[5U] 
                                  >> 0x17U)))) {
                    __Vtemp_9[0U] = 1U;
                    __Vtemp_9[1U] = 0U;
                    __Vtemp_9[2U] = 0U;
                    __Vtemp_9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,3, __Vtemp_10, __Vtemp_9, 
                                  (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U]));
                    VL_ASSIGNSEL_WQ(264,64,0xc4U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d, 
                                    (VL_SEL_QWII(128, 
                                                 ([&]() {
                                        vlSelf->__Vfunc_aligned_addr__247__size 
                                            = (7U & 
                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U]);
                                        vlSelf->__Vfunc_aligned_addr__247__addr[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                                             >> 4U))));
                                        vlSelf->__Vfunc_aligned_addr__247__addr[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                                              >> 4U))) 
                                                       >> 0x20U));
                                        vlSelf->__Vfunc_aligned_addr__247__addr[2U] = 0U;
                                        vlSelf->__Vfunc_aligned_addr__247__addr[3U] = 0U;
                                        VL_SHIFTR_WWI(128,128,3, __Vtemp_8, vlSelf->__Vfunc_aligned_addr__247__addr, (IData)(vlSelf->__Vfunc_aligned_addr__247__size));
                                        VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__247__Vfuncout, __Vtemp_8, (IData)(vlSelf->__Vfunc_aligned_addr__247__size));
                                    }(), vlSelf->__Vfunc_aligned_addr__247__Vfuncout), 0U, 0x40U) 
                                     + (((QData)((IData)(
                                                         __Vtemp_10[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp_10[0U])))));
                } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[5U] 
                                         >> 0x17U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U] 
                        = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U]) 
                           | ((IData)((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                           >> 4U)))) 
                              << 4U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[7U] 
                        = (((IData)((((QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                      << 0x3cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                                    << 0x1cU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                                      >> 4U)))) 
                            >> 0x1cU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                                       << 0x1cU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                                         >> 4U))) 
                                                  >> 0x20U)) 
                                         << 4U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[8U] 
                        = ((0xf0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[8U]) 
                           | (0xffU & ((IData)(((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                                       >> 4U))) 
                                                >> 0x20U)) 
                                       >> 0x1cU)));
                }
                if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                        = (0x800U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]);
                } else if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_q))) {
                    if (((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U] 
                                          >> 3U))) 
                         | VL_NEQ_W(4, ([&]() {
                                        vlSelf->__Vfunc_aligned_addr__248__addr[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[8U])) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[7U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U])) 
                                                             >> 4U))));
                                        vlSelf->__Vfunc_aligned_addr__248__addr[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[8U])) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[7U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U])) 
                                                              >> 4U))) 
                                                       >> 0x20U));
                                        vlSelf->__Vfunc_aligned_addr__248__addr[2U] = 0U;
                                        vlSelf->__Vfunc_aligned_addr__248__addr[3U] = 0U;
                                        vlSelf->__Vfunc_aligned_addr__248__Vfuncout[0U] 
                                            = (0xfffffff0U 
                                               & vlSelf->__Vfunc_aligned_addr__248__addr[0U]);
                                        vlSelf->__Vfunc_aligned_addr__248__Vfuncout[1U] 
                                            = vlSelf->__Vfunc_aligned_addr__248__addr[1U];
                                        vlSelf->__Vfunc_aligned_addr__248__Vfuncout[2U] 
                                            = vlSelf->__Vfunc_aligned_addr__248__addr[2U];
                                        vlSelf->__Vfunc_aligned_addr__248__Vfuncout[3U] 
                                            = vlSelf->__Vfunc_aligned_addr__248__addr[3U];
                                    }(), vlSelf->__Vfunc_aligned_addr__248__Vfuncout), 
                                    ([&]() {
                                        vlSelf->__Vfunc_aligned_addr__249__addr[0U] 
                                            = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                                        << 0x3cU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                                             >> 4U))));
                                        vlSelf->__Vfunc_aligned_addr__249__addr[1U] 
                                            = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[8U])) 
                                                         << 0x3cU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[7U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[6U])) 
                                                              >> 4U))) 
                                                       >> 0x20U));
                                        vlSelf->__Vfunc_aligned_addr__249__addr[2U] = 0U;
                                        vlSelf->__Vfunc_aligned_addr__249__addr[3U] = 0U;
                                        vlSelf->__Vfunc_aligned_addr__249__Vfuncout[0U] 
                                            = (0xfffffff0U 
                                               & vlSelf->__Vfunc_aligned_addr__249__addr[0U]);
                                        vlSelf->__Vfunc_aligned_addr__249__Vfuncout[1U] 
                                            = vlSelf->__Vfunc_aligned_addr__249__addr[1U];
                                        vlSelf->__Vfunc_aligned_addr__249__Vfuncout[2U] 
                                            = vlSelf->__Vfunc_aligned_addr__249__addr[2U];
                                        vlSelf->__Vfunc_aligned_addr__249__Vfuncout[3U] 
                                            = vlSelf->__Vfunc_aligned_addr__249__addr[3U];
                                    }(), vlSelf->__Vfunc_aligned_addr__249__Vfuncout)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                            = (0x800U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]);
                    }
                }
            }
        }
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U] 
                    >> 5U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_resp[4U] 
                              >> 0x11U)))) {
            if ((0xffU == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_q[0U] 
                                    >> 3U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                    = (0xdffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d = 0U;
            }
        }
    }
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
            = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
               | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[0U] 
                  << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[1U] 
            = ((Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[0U] 
                >> 0x15U) | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[1U] 
                             << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[2U] 
            = ((Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[1U] 
                >> 0x15U) | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[2U] 
                             << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[3U] 
            = ((Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[2U] 
                >> 0x15U) | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[3U] 
                             << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
            = ((Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[3U] 
                >> 0x15U) | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[4U] 
                             << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[5U] 
            = ((Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[4U] 
                >> 0x15U) | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[5U] 
                             << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U] 
            = ((Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[5U] 
                >> 0x15U) | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[6U] 
                             << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[7U] 
            = ((Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[6U] 
                >> 0x15U) | (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[7U] 
                             << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[8U] 
            = (0xffU & (Vara_tb_verilator__ConstPool__CONST_hedc19b44_0[7U] 
                        >> 0x15U));
        if ((IData)((0x810000U == (0x810000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[5U])))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__inject_aw_into_ar_req = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                = ((0x7ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U]) 
                   | (0xfffffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__inject_aw_into_ar_gnt) 
                                  << 0x13U)));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                = (0x80000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U]);
        }
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[5U] 
              >> 0x10U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                           >> 0x13U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
                = (0x80000000U | (0x7fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U]));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[5U] 
                = (((0x7fff8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                    << 0xfU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[5U] 
                                                 >> 0x11U)) 
                   | (0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                     << 0xfU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U] 
                = (((0x7fff8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[7U] 
                                    << 0xfU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                                 >> 0x11U)) 
                   | (0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[7U] 
                                     << 0xfU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[7U] 
                = (((0x7fff8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[8U] 
                                    << 0xfU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[7U] 
                                                 >> 0x11U)) 
                   | (0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[8U] 
                                     << 0xfU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[8U] 
                = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[8U] 
                            >> 0x11U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U] 
                = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[0U]) 
                   | (0x7ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                >> 0xaU)));
            if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                              >> 8U)))) {
                if (([&]() {
                            vlSelf->__Vfunc_modifiable__250__cache 
                                = (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                           >> 3U));
                            vlSelf->__Vfunc_modifiable__250__Vfuncout 
                                = (0U != (2U & (IData)(vlSelf->__Vfunc_modifiable__250__cache)));
                        }(), (IData)(vlSelf->__Vfunc_modifiable__250__Vfuncout))) {
                    if ((0U != (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                         >> 0xdU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk7__DOT__start_addr 
                            = VL_SEL_QWII(128, ([&]() {
                                    vlSelf->__Vfunc_aligned_addr__251__addr[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[8U])) 
                                                    << 0x2bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[7U])) 
                                                       << 0xbU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U])) 
                                                         >> 0x15U))));
                                    vlSelf->__Vfunc_aligned_addr__251__addr[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[8U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[7U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U])) 
                                                          >> 0x15U))) 
                                                   >> 0x20U));
                                    vlSelf->__Vfunc_aligned_addr__251__addr[2U] = 0U;
                                    vlSelf->__Vfunc_aligned_addr__251__addr[3U] = 0U;
                                    vlSelf->__Vfunc_aligned_addr__251__Vfuncout[0U] 
                                        = (0xfffffff0U 
                                           & vlSelf->__Vfunc_aligned_addr__251__addr[0U]);
                                    vlSelf->__Vfunc_aligned_addr__251__Vfuncout[1U] 
                                        = vlSelf->__Vfunc_aligned_addr__251__addr[1U];
                                    vlSelf->__Vfunc_aligned_addr__251__Vfuncout[2U] 
                                        = vlSelf->__Vfunc_aligned_addr__251__addr[2U];
                                    vlSelf->__Vfunc_aligned_addr__251__Vfuncout[3U] 
                                        = vlSelf->__Vfunc_aligned_addr__251__addr[3U];
                                }(), vlSelf->__Vfunc_aligned_addr__251__Vfuncout), 0U, 0x40U);
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d = 2U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk7__DOT__end_addr 
                            = VL_SEL_QWII(128, ([&]() {
                                    vlSelf->__Vfunc_beat_addr__253__i_beat 
                                        = (0xffU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                            >> 0xdU));
                                    vlSelf->__Vfunc_beat_addr__253__burst 
                                        = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                                 >> 8U));
                                    vlSelf->__Vfunc_beat_addr__253__len 
                                        = (0xffU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                            >> 0xdU));
                                    vlSelf->__Vfunc_beat_addr__253__size 
                                        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                                 >> 0xaU));
                                    vlSelf->__Vfunc_beat_addr__253__addr[0U] 
                                        = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[8U])) 
                                                    << 0x2bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[7U])) 
                                                       << 0xbU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U])) 
                                                         >> 0x15U))));
                                    vlSelf->__Vfunc_beat_addr__253__addr[1U] 
                                        = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[8U])) 
                                                     << 0x2bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[7U])) 
                                                        << 0xbU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U])) 
                                                          >> 0x15U))) 
                                                   >> 0x20U));
                                    vlSelf->__Vfunc_beat_addr__253__addr[2U] = 0U;
                                    vlSelf->__Vfunc_beat_addr__253__addr[3U] = 0U;
                                    vlSelf->__Vfunc_beat_addr__253__ret_addr[0U] 
                                        = vlSelf->__Vfunc_beat_addr__253__addr[0U];
                                    vlSelf->__Vfunc_beat_addr__253__ret_addr[1U] 
                                        = vlSelf->__Vfunc_beat_addr__253__addr[1U];
                                    vlSelf->__Vfunc_beat_addr__253__ret_addr[2U] 
                                        = vlSelf->__Vfunc_beat_addr__253__addr[2U];
                                    vlSelf->__Vfunc_beat_addr__253__ret_addr[3U] 
                                        = vlSelf->__Vfunc_beat_addr__253__addr[3U];
                                    vlSelf->__Vfunc_beat_addr__253__wrp_bond[0U] = 0U;
                                    vlSelf->__Vfunc_beat_addr__253__wrp_bond[1U] = 0U;
                                    vlSelf->__Vfunc_beat_addr__253__wrp_bond[2U] = 0U;
                                    vlSelf->__Vfunc_beat_addr__253__wrp_bond[3U] = 0U;
                                    if ((2U == (IData)(vlSelf->__Vfunc_beat_addr__253__burst))) {
                                        vlSelf->__Vfunc_wrap_boundary__254__len 
                                            = vlSelf->__Vfunc_beat_addr__253__len;
                                        vlSelf->__Vfunc_wrap_boundary__254__size 
                                            = vlSelf->__Vfunc_beat_addr__253__size;
                                        vlSelf->__Vfunc_wrap_boundary__254__addr[0U] 
                                            = vlSelf->__Vfunc_beat_addr__253__addr[0U];
                                        vlSelf->__Vfunc_wrap_boundary__254__addr[1U] 
                                            = vlSelf->__Vfunc_beat_addr__253__addr[1U];
                                        vlSelf->__Vfunc_wrap_boundary__254__addr[2U] 
                                            = vlSelf->__Vfunc_beat_addr__253__addr[2U];
                                        vlSelf->__Vfunc_wrap_boundary__254__addr[3U] 
                                            = vlSelf->__Vfunc_beat_addr__253__addr[3U];
                                        VL_SHIFTR_WWI(128,128,32, __Vtemp_18, vlSelf->__Vfunc_wrap_boundary__254__addr, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        VL_SHIFTL_WWI(128,128,32, __Vtemp_19, __Vtemp_18, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        VL_SHIFTR_WWI(128,128,32, __Vtemp_20, vlSelf->__Vfunc_wrap_boundary__254__addr, 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        VL_SHIFTL_WWI(128,128,32, __Vtemp_21, __Vtemp_20, 
                                                      ((IData)(2U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        VL_SHIFTR_WWI(128,128,32, __Vtemp_22, vlSelf->__Vfunc_wrap_boundary__254__addr, 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        VL_SHIFTL_WWI(128,128,32, __Vtemp_23, __Vtemp_22, 
                                                      ((IData)(3U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        VL_SHIFTR_WWI(128,128,32, __Vtemp_24, vlSelf->__Vfunc_wrap_boundary__254__addr, 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        VL_SHIFTL_WWI(128,128,32, __Vtemp_25, __Vtemp_24, 
                                                      ((IData)(4U) 
                                                       + (IData)(vlSelf->__Vfunc_wrap_boundary__254__size)));
                                        vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[0U] 
                                            = ((1U 
                                                == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                ? __Vtemp_19[0U]
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                    ? 
                                                   __Vtemp_21[0U]
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                     ? 
                                                    __Vtemp_23[0U]
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                      ? 
                                                     __Vtemp_25[0U]
                                                      : 0U))));
                                        vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[1U] 
                                            = ((1U 
                                                == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                ? __Vtemp_19[1U]
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                    ? 
                                                   __Vtemp_21[1U]
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                     ? 
                                                    __Vtemp_23[1U]
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                      ? 
                                                     __Vtemp_25[1U]
                                                      : 0U))));
                                        vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[2U] 
                                            = ((1U 
                                                == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                ? __Vtemp_19[2U]
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                    ? 
                                                   __Vtemp_21[2U]
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                     ? 
                                                    __Vtemp_23[2U]
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                      ? 
                                                     __Vtemp_25[2U]
                                                      : 0U))));
                                        vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[3U] 
                                            = ((1U 
                                                == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                ? __Vtemp_19[3U]
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                    ? 
                                                   __Vtemp_21[3U]
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                     ? 
                                                    __Vtemp_23[3U]
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelf->__Vfunc_wrap_boundary__254__len))
                                                      ? 
                                                     __Vtemp_25[3U]
                                                      : 0U))));
                                        vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[0U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[0U];
                                        vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[1U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[1U];
                                        vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[2U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[2U];
                                        vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[3U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__wrap_addr[3U];
                                        vlSelf->__Vfunc_beat_addr__253__wrp_bond[0U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[0U];
                                        vlSelf->__Vfunc_beat_addr__253__wrp_bond[1U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[1U];
                                        vlSelf->__Vfunc_beat_addr__253__wrp_bond[2U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[2U];
                                        vlSelf->__Vfunc_beat_addr__253__wrp_bond[3U] 
                                            = vlSelf->__Vfunc_wrap_boundary__254__Vfuncout[3U];
                                    }
                                    if (((0U != (IData)(vlSelf->__Vfunc_beat_addr__253__i_beat)) 
                                         & (0U != (IData)(vlSelf->__Vfunc_beat_addr__253__burst)))) {
                                        __Vtemp_35[0U] 
                                            = vlSelf->__Vfunc_beat_addr__253__i_beat;
                                        __Vtemp_35[1U] = 0U;
                                        __Vtemp_35[2U] = 0U;
                                        __Vtemp_35[3U] = 0U;
                                        VL_EXTEND_WI(128,16, __Vtemp_36, 
                                                     ([&]() {
                                                    vlSelf->__Vfunc_num_bytes__256__size 
                                                        = vlSelf->__Vfunc_beat_addr__253__size;
                                                    vlSelf->__Vfunc_num_bytes__256__Vfuncout 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            << (IData)(vlSelf->__Vfunc_num_bytes__256__size)));
                                                }(), (IData)(vlSelf->__Vfunc_num_bytes__256__Vfuncout)));
                                        VL_MUL_W(4, __Vtemp_37, __Vtemp_35, __Vtemp_36);
                                        VL_ADD_W(4, vlSelf->__Vfunc_beat_addr__253__ret_addr, 
                                                 ([&]() {
                                                    vlSelf->__Vfunc_aligned_addr__255__size 
                                                        = vlSelf->__Vfunc_beat_addr__253__size;
                                                    vlSelf->__Vfunc_aligned_addr__255__addr[0U] 
                                                        = 
                                                        vlSelf->__Vfunc_beat_addr__253__addr[0U];
                                                    vlSelf->__Vfunc_aligned_addr__255__addr[1U] 
                                                        = 
                                                        vlSelf->__Vfunc_beat_addr__253__addr[1U];
                                                    vlSelf->__Vfunc_aligned_addr__255__addr[2U] 
                                                        = 
                                                        vlSelf->__Vfunc_beat_addr__253__addr[2U];
                                                    vlSelf->__Vfunc_aligned_addr__255__addr[3U] 
                                                        = 
                                                        vlSelf->__Vfunc_beat_addr__253__addr[3U];
                                                    VL_SHIFTR_WWI(128,128,3, __Vtemp_34, vlSelf->__Vfunc_aligned_addr__255__addr, (IData)(vlSelf->__Vfunc_aligned_addr__255__size));
                                                    VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__255__Vfuncout, __Vtemp_34, (IData)(vlSelf->__Vfunc_aligned_addr__255__size));
                                                }(), vlSelf->__Vfunc_aligned_addr__255__Vfuncout), __Vtemp_37);
                                        VL_EXTEND_WI(128,16, __Vtemp_38, 
                                                     ([&]() {
                                                    vlSelf->__Vfunc_num_bytes__257__size 
                                                        = vlSelf->__Vfunc_beat_addr__253__size;
                                                    vlSelf->__Vfunc_num_bytes__257__Vfuncout 
                                                        = 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            << (IData)(vlSelf->__Vfunc_num_bytes__257__size)));
                                                }(), (IData)(vlSelf->__Vfunc_num_bytes__257__Vfuncout)));
                                        __Vtemp_39[0U] = 1U;
                                        __Vtemp_39[1U] = 0U;
                                        __Vtemp_39[2U] = 0U;
                                        __Vtemp_39[3U] = 0U;
                                        __Vtemp_40[0U] 
                                            = vlSelf->__Vfunc_beat_addr__253__len;
                                        __Vtemp_40[1U] = 0U;
                                        __Vtemp_40[2U] = 0U;
                                        __Vtemp_40[3U] = 0U;
                                        VL_ADD_W(4, __Vtemp_41, __Vtemp_39, __Vtemp_40);
                                        VL_MUL_W(4, __Vtemp_42, __Vtemp_38, __Vtemp_41);
                                        VL_ADD_W(4, __Vtemp_43, vlSelf->__Vfunc_beat_addr__253__wrp_bond, __Vtemp_42);
                                        if (((2U == (IData)(vlSelf->__Vfunc_beat_addr__253__burst)) 
                                             & VL_GTE_W(4, vlSelf->__Vfunc_beat_addr__253__ret_addr, __Vtemp_43))) {
                                            VL_EXTEND_WI(128,16, __Vtemp_45, 
                                                         ([&]() {
                                                        vlSelf->__Vfunc_num_bytes__258__size 
                                                            = vlSelf->__Vfunc_beat_addr__253__size;
                                                        vlSelf->__Vfunc_num_bytes__258__Vfuncout 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                << (IData)(vlSelf->__Vfunc_num_bytes__258__size)));
                                                    }(), (IData)(vlSelf->__Vfunc_num_bytes__258__Vfuncout)));
                                            __Vtemp_46[0U] = 1U;
                                            __Vtemp_46[1U] = 0U;
                                            __Vtemp_46[2U] = 0U;
                                            __Vtemp_46[3U] = 0U;
                                            __Vtemp_47[0U] 
                                                = vlSelf->__Vfunc_beat_addr__253__len;
                                            __Vtemp_47[1U] = 0U;
                                            __Vtemp_47[2U] = 0U;
                                            __Vtemp_47[3U] = 0U;
                                            VL_ADD_W(4, __Vtemp_48, __Vtemp_46, __Vtemp_47);
                                            VL_MUL_W(4, __Vtemp_49, __Vtemp_45, __Vtemp_48);
                                            VL_SUB_W(4, __Vtemp_44, vlSelf->__Vfunc_beat_addr__253__ret_addr, __Vtemp_49);
                                            vlSelf->__Vfunc_beat_addr__253__ret_addr[0U] 
                                                = __Vtemp_44[0U];
                                            vlSelf->__Vfunc_beat_addr__253__ret_addr[1U] 
                                                = __Vtemp_44[1U];
                                            vlSelf->__Vfunc_beat_addr__253__ret_addr[2U] 
                                                = __Vtemp_44[2U];
                                            vlSelf->__Vfunc_beat_addr__253__ret_addr[3U] 
                                                = __Vtemp_44[3U];
                                        }
                                    }
                                    vlSelf->__Vfunc_beat_addr__253__Vfuncout[0U] 
                                        = vlSelf->__Vfunc_beat_addr__253__ret_addr[0U];
                                    vlSelf->__Vfunc_beat_addr__253__Vfuncout[1U] 
                                        = vlSelf->__Vfunc_beat_addr__253__ret_addr[1U];
                                    vlSelf->__Vfunc_beat_addr__253__Vfuncout[2U] 
                                        = vlSelf->__Vfunc_beat_addr__253__ret_addr[2U];
                                    vlSelf->__Vfunc_beat_addr__253__Vfuncout[3U] 
                                        = vlSelf->__Vfunc_beat_addr__253__ret_addr[3U];
                                    vlSelf->__Vfunc_aligned_addr__252__addr[0U] 
                                        = vlSelf->__Vfunc_beat_addr__253__Vfuncout[0U];
                                    vlSelf->__Vfunc_aligned_addr__252__addr[1U] 
                                        = vlSelf->__Vfunc_beat_addr__253__Vfuncout[1U];
                                    vlSelf->__Vfunc_aligned_addr__252__addr[2U] 
                                        = vlSelf->__Vfunc_beat_addr__253__Vfuncout[2U];
                                    vlSelf->__Vfunc_aligned_addr__252__addr[3U] 
                                        = vlSelf->__Vfunc_beat_addr__253__Vfuncout[3U];
                                    vlSelf->__Vfunc_aligned_addr__252__Vfuncout[0U] 
                                        = (0xfffffff0U 
                                           & vlSelf->__Vfunc_aligned_addr__252__addr[0U]);
                                    vlSelf->__Vfunc_aligned_addr__252__Vfuncout[1U] 
                                        = vlSelf->__Vfunc_aligned_addr__252__addr[1U];
                                    vlSelf->__Vfunc_aligned_addr__252__Vfuncout[2U] 
                                        = vlSelf->__Vfunc_aligned_addr__252__addr[2U];
                                    vlSelf->__Vfunc_aligned_addr__252__Vfuncout[3U] 
                                        = vlSelf->__Vfunc_aligned_addr__252__addr[3U];
                                }(), vlSelf->__Vfunc_aligned_addr__252__Vfuncout), 0U, 0x40U);
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[5U] 
                            = ((0x1ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[5U]) 
                               | (0xfe000000U & (0x8000000U 
                                                 | ((IData)(
                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk7__DOT__end_addr 
                                                              - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk7__DOT__start_addr) 
                                                             >> 4U)) 
                                                    << 0x1cU))));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U] 
                            = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[6U]) 
                               | (0xfU & ((IData)((
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk7__DOT__end_addr 
                                                    - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__unnamedblk7__DOT__start_addr) 
                                                   >> 4U)) 
                                          >> 4U)));
                    }
                }
            } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                     >> 8U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d = 1U;
            } else if ((2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                     >> 8U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
                    = (0x40000000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U]);
                if ((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                     >> 0xdU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U] 
                        = (0xbfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_req_d[4U]);
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__rr_q)) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__inject_aw_into_ar_req)) 
            << 1U) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[0U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__rr_q)) 
            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__inject_aw_into_ar_req)) 
           << 1U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (1U & ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[0U] 
                     >> 1U)) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__rr_q) 
                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__inject_aw_into_ar_req))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__req_nodes 
        = (1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[0U] 
                  >> 1U) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__inject_aw_into_ar_req)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q;
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_req) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_d 
                = ((1U == ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                                  >> 0x12U)) | (1U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                                                   >> 0x11U))))
                    ? 1U : ((2U == ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                                           >> 0x12U)) 
                                    | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                                             >> 0x11U))))
                             ? 2U : 0U));
        }
    } else if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
        if ((0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_d = 0U;
        }
    } else if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
        if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_q))) {
            if ((0x20000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_d = 0U;
            }
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_d = 0U;
    }
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__w_state_d))) {
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[5U] 
              >> 0x10U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                           >> 0x13U))) {
            if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                              >> 8U)))) {
                if (([&]() {
                            vlSelf->__Vfunc_modifiable__250__cache 
                                = (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_req[6U] 
                                           >> 3U));
                            vlSelf->__Vfunc_modifiable__250__Vfuncout 
                                = (0U != (2U & (IData)(vlSelf->__Vfunc_modifiable__250__cache)));
                        }(), (IData)(vlSelf->__Vfunc_modifiable__250__Vfuncout))) {
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_clr = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_b_fifo__data_i 
        = (((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                          >> 0xaU))) << 5U) | (0xfU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
                                                  >> 0xcU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_gnt = 0U;
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_req) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_clr = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_gnt 
                = (IData)((0xa0000U == (0xa0000U & 
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U])));
        }
    } else {
        if ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
            if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
                if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_q))) {
                    if ((0x20000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_clr = 1U;
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
            if ((0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_gnt = 1U;
            }
        } else if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_state_q))) {
            if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_q))) {
                if ((0x20000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_gnt = 1U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_rd_gnt 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_rd_req) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
              >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__b_push 
        = ((4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__ariane_narrow_axi_resp[2U] 
              >> 0x10U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U] 
            >> 0x18U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_ready_chan));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U] 
            >> 0x18U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_ready_sel));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[0U] 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_ar_ready_chan));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[0U] 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_ar_ready_sel));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[0U] 
            << 2U) | (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                         | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                           | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                       << 1U) | (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[0U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[0U] 
            >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[1U] 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[1U] 
            >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[2U] 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
        = ((0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[3U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[2U] 
               >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[3U] 
                            << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
        = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[4U]) 
           | (0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[4U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
        = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[5U]) 
           | (0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[5U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
        = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[6U]) 
           | (0xfffffff0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[6U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[0U] 
            << 0x19U) | (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                            | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                              | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                          << 0x18U) | ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U]) 
                                       | (0xfffff0U 
                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__mst_req[7U]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[8U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[0U] 
            >> 7U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[1U] 
                      << 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[9U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[1U] 
            >> 7U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[2U] 
                      << 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[0xaU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[2U] 
            >> 7U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[3U] 
                      << 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[0xbU] 
        = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[3U] 
           >> 7U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_state_q)))) {
            if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__req_nodes) 
                 & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__idx_ar_upsizer)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__index_nodes)))) {
                    if ((1U == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                >> 0x1eU))) {
                        if (([&]() {
                                    vlSelf->__Vfunc_modifiable__217__cache 
                                        = (0xfU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                                   >> 0x19U));
                                    vlSelf->__Vfunc_modifiable__217__Vfuncout 
                                        = (0U != (2U 
                                                  & (IData)(vlSelf->__Vfunc_modifiable__217__cache)));
                                }(), (IData)(vlSelf->__Vfunc_modifiable__217__Vfuncout))) {
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_state_q)))) {
            if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__req_nodes) 
                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__idx_ar_upsizer))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__index_nodes)))) {
                    if ((1U == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                >> 0x1eU))) {
                        if (([&]() {
                                    vlSelf->__Vfunc_modifiable__238__cache 
                                        = (0xfU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__gen_read_upsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                                   >> 0x19U));
                                    vlSelf->__Vfunc_modifiable__238__Vfuncout 
                                        = (0U != (2U 
                                                  & (IData)(vlSelf->__Vfunc_modifiable__238__cache)));
                                }(), (IData)(vlSelf->__Vfunc_modifiable__238__Vfuncout))) {
                        }
                    }
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_clr)
            ? 0U : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_axi_shim__DOT__wr_cnt_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_rd_gnt) 
           | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_gnt));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__b_push) 
         & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT____Vlvbound_h0912f972__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_b_fifo__data_i;
        if ((0x17U >= (0x1fU & ((IData)(6U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__mem_n 
                = (((~ ((IData)(0x3fU) << (0x1fU & 
                                           ((IData)(6U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__mem_n) 
                   | (0xffffffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT____Vlvbound_h0912f972__0) 
                                   << (0x1fU & ((IData)(6U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__b_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__b_push)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__status_cnt_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellout__i_b_fifo__data_o 
        = ((0x17U >= (0x1fU & ((IData)(6U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__read_pointer_q))))
            ? (0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__mem_q 
                        >> (0x1fU & ((IData)(6U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__read_pointer_q)))))
            : 0U);
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_b_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__b_push))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellout__i_b_fifo__data_o 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_b_fifo__data_i;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((1U & (((~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                    & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                   & (~ ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                            >> 0x1fU)))))) {
            if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                         >> 0x18U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_select)))) 
                       & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                          | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_select) 
                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)))))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_ar_select) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((1U & (((~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full)))) 
                       & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                      & (~ ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full)) 
                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                               >> 0x1fU)))))) {
        if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
                     >> 0x18U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                  | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                     == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_select)))) 
                   & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__slv_aw_select) 
                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__arb_slv_ar_gnt_tran)) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__req_o))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_icache_data_fifo__pop_i 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__index_nodes)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__index_nodes));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__invalidate = 0U;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__arb_req))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__index_nodes) {
            if ((1U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__dcache_data[4U] 
                              >> 5U)))) {
                if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__dcache_data[4U] 
                                  >> 5U)))) {
                    if ((2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__dcache_data[4U] 
                                      >> 5U)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__invalidate 
                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes;
                    }
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
            ? (0xffffU & ((IData)(1U) << (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[3U] 
                                                  >> 4U))))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane_axi_dwc__DOT__gen_dw_upsize__DOT__i_axi_dw_upsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_icache_data_fifo__pop_i) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_icache_data_fifo__DOT__read_pointer_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_rd_icache_id__push_i 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_icache_data_fifo__pop_i) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_rd_gnt));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_dcache_data_fifo__DOT__read_pointer_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_rd_dcache_id__push_i 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_rd_gnt));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_wr_dcache_id__push_i 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_dcache_data_fifo__pop_i) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__axi_wr_gnt));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_rd_icache_id__push_i) 
         & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__mem_n 
            = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__mem_n)) 
               | (0xffU & ((3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__icache_data)) 
                           << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_icache_id__DOT__write_pointer_q), 1U)))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_rd_dcache_id__push_i) 
         & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__mem_n 
            = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__mem_n)) 
               | (0xffU & ((3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__dcache_data[0U] 
                                  >> 4U)) << (7U & 
                                              VL_SHIFTL_III(3,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_rd_dcache_id__DOT__write_pointer_q), 1U)))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__mem_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT____Vcellinp__i_wr_dcache_id__push_i) 
         & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__mem_n 
            = (((~ ((IData)(3U) << (7U & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__mem_n)) 
               | (0xffU & ((3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__dcache_data[0U] 
                                  >> 4U)) << (7U & 
                                              VL_SHIFTL_III(3,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_adapter__DOT__i_wr_dcache_id__DOT__write_pointer_q), 1U)))));
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1177(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1177\n"); );
    // Init
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0 = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0 = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0 = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__tag_valid_n = 0U;
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q))) {
                if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[2U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__tag_valid_n = 1U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q;
    if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
         [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q][0U])) {
        if ((0x800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[6U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_n 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q)));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata 
        = ((0x1bU >= (0x1fU & ((IData)(0xeU) * (1U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                                   >> 5U)))))
            ? (0x3fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_q 
                          >> (0x1fU & ((IData)(0xeU) 
                                       * (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                                >> 5U))))))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__rdata_sign_bit 
        = ((((0x28U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
             | ((0x2bU == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                | ((0x2eU == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                   | ((0x36U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                      | ((0x33U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                         | (0x31U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))))))) 
            & (((0x80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                          << 3U)) | ((0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[3U] 
                                               >> 0x16U)) 
                                     | ((0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[3U] 
                                                  >> 0xfU)) 
                                        | ((0x10U & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[3U] 
                                             >> 8U)) 
                                           | ((8U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[3U] 
                                                >> 1U)) 
                                              | ((4U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[2U] 
                                                     >> 0x1aU)) 
                                                 | ((2U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[2U] 
                                                        >> 0x13U)) 
                                                    | (1U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[2U] 
                                                          >> 0xcU))))))))) 
               >> (7U & (((0x28U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                          | ((0x62U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                             | (0x36U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))))
                          ? ((IData)(3U) + (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata) 
                                                  >> 8U)))
                          : ((7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata) 
                                    >> 8U)) + ((0x2bU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                                               | ((0x63U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                                                  | (0x33U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))))))))) 
           | ((0x62U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
              | ((0x63U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))) 
                 | (0x64U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data 
        = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U])) 
             << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[3U])) 
                           << 0x1bU) | ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[2U])) 
                                        >> 5U))) >> 
           (0x38U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata) 
                     >> 5U)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0 
        = (((QData)((IData)((- (IData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__rdata_sign_bit))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0 
        = (((- (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__rdata_sign_bit))) 
            << 0x10U) | (QData)((IData)((0xffffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0 
        = (((- (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__rdata_sign_bit))) 
            << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_result 
        = ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
            ? ((0x62U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                : ((0x63U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                    : ((0x64U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                        : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))
            : ((0x40U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                ? ((0x62U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                    : ((0x63U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                        : ((0x64U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))
                : ((0x20U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                    ? ((0x10U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                        ? ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                            ? ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                ? ((0x62U == (0xffU 
                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                    : ((0x63U == (0xffU 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                        : ((0x64U == 
                                            (0xffU 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                            : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))
                                : ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                    ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                        : ((0x62U == 
                                            (0xffU 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                            : ((0x63U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                                : (
                                                   (0x64U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data))))
                                    : ((0x62U == (0xffU 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                        : ((0x63U == 
                                            (0xffU 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                            : ((0x64U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                                : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))))
                            : ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                ? ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                    : ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0)
                                : ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                    ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                        : ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0)
                                    : ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0)))
                        : ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                            ? ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                ? ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                    ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                        ? ((0x62U == 
                                            (0xffU 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                            : ((0x63U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                                : (
                                                   (0x64U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))
                                        : ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0)
                                    : ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                        ? ((0x62U == 
                                            (0xffU 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                            : ((0x63U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                                : (
                                                   (0x64U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))
                                        : ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0))
                                : ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                    ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata))
                                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                        : ((0x62U == 
                                            (0xffU 
                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                            : ((0x63U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                                : (
                                                   (0x64U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data))))
                                    : ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0))
                            : ((0x62U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                                : ((0x63U == (0xffU 
                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                    ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                                    : ((0x64U == (0xffU 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                        : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data)))))
                    : ((0x62U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                        ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hb6328cc8__0
                        : ((0x63U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                            ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_hd14ba85c__0
                            : ((0x64U == (0xffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_rdata)))
                                ? ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT____VdfgExtracted_h4a1c992e__0
                                : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__shifted_data))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1178(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1178\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_trans_id 
        = ((0x1bU >= ((IData)(0xbU) + (0x1fU & ((IData)(0xeU) 
                                                * (1U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                                      >> 5U))))))
            ? (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_q 
                     >> ((IData)(0xbU) + (0x1fU & ((IData)(0xeU) 
                                                   * 
                                                   (1U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                                       >> 5U)))))))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_ex[0U] 
        = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_ex[0U]);
    if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                >> 6U) & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_flushed_q) 
                             >> (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                       >> 5U))))))) {
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U] 
             & (2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_ex[0U] 
                = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_ex[0U]);
        }
    }
    if (((((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q)) 
           & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                 >> 6U))) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U]) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_valid_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_trans_id 
            = (7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_ex[0U] 
            = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_ex[0U]);
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1179(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1179\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__store_if__DOT__commit_status_cnt 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_status_cnt_q;
    if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
         [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q][0U])) {
        if ((0x800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[6U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__store_if__DOT__commit_status_cnt 
                = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__store_if__DOT__commit_status_cnt) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__lsu_commit_commit_ex) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__store_if__DOT__commit_status_cnt 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__store_if__DOT__commit_status_cnt)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__store_if__DOT__commit_status_cnt;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[3U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [3U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[3U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [3U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[3U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [3U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[3U][3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [3U][3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[3U][4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [3U][4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[2U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [2U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[2U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [2U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[2U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [2U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[2U][3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [2U][3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[2U][4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [2U][4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[1U][3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [1U][3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[1U][4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [1U][4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[0U][3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [0U][3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[0U][4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
        [0U][4U];
    if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
         [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q][0U])) {
        if ((0x800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[6U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q][0U] 
                = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n
                   [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_read_pointer_q][0U]);
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__lsu_commit_commit_ex) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_write_pointer_q][0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
            [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_write_pointer_q][1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
            [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_write_pointer_q][2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
            [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_write_pointer_q][3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
            [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][3U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_n[vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_write_pointer_q][4U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
            [vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_read_pointer_q][4U];
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__1180(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__1180\n"); );
    // Init
    CData/*7:0*/ __Vfunc_extract_transfer_size__149__op;
    __Vfunc_extract_transfer_size__149__op = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_translation_req = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
        = (0xffffbfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
        = (0xfffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
        = ((0xffffe01fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]) 
           | (0x1fe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                         >> 0xaU)));
    __Vfunc_extract_transfer_size__149__op = (0xffU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                                 >> 3U));
    {
        if ((0x80U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
            vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
            goto __Vlabel1450;
        } else if ((0x40U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
            if ((0x20U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                if ((0x10U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                } else if ((8U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                        goto __Vlabel1450;
                    } else if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                        goto __Vlabel1450;
                    } else if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 0U;
                        goto __Vlabel1450;
                    }
                } else if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                            vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 1U;
                            goto __Vlabel1450;
                        } else {
                            vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                            goto __Vlabel1450;
                        }
                    } else if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 0U;
                        goto __Vlabel1450;
                    }
                } else if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 1U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                        goto __Vlabel1450;
                    }
                } else if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                } else {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                }
            } else if ((0x10U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                if ((8U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                } else if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                } else {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                }
            } else if ((8U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                } else if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                        goto __Vlabel1450;
                    }
                } else {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                    goto __Vlabel1450;
                }
            } else if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                goto __Vlabel1450;
            } else if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                goto __Vlabel1450;
            } else if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                goto __Vlabel1450;
            } else {
                vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                goto __Vlabel1450;
            }
        } else if ((0x20U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
            if ((0x10U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                if ((8U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                            if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                                vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                                goto __Vlabel1450;
                            } else {
                                vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                                goto __Vlabel1450;
                            }
                        } else {
                            vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                            goto __Vlabel1450;
                        }
                    } else if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                        goto __Vlabel1450;
                    } else if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 1U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 0U;
                        goto __Vlabel1450;
                    }
                } else if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 1U;
                        goto __Vlabel1450;
                    }
                } else if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 1U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 0U;
                        goto __Vlabel1450;
                    }
                } else {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 0U;
                    goto __Vlabel1450;
                }
            } else if ((8U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 0U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 1U;
                        goto __Vlabel1450;
                    }
                } else if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    if ((1U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 1U;
                        goto __Vlabel1450;
                    } else {
                        vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                        goto __Vlabel1450;
                    }
                } else {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 2U;
                    goto __Vlabel1450;
                }
            } else if ((4U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                if ((2U & (IData)(__Vfunc_extract_transfer_size__149__op))) {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                } else {
                    vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                    goto __Vlabel1450;
                }
            } else {
                vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
                goto __Vlabel1450;
            }
        } else {
            vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout = 3U;
            goto __Vlabel1450;
        }
        __Vlabel1450: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
        = ((0xffffffe7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]) 
           | ((IData)(vlSelf->__Vfunc_extract_transfer_size__149__Vfuncout) 
              << 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pop_ld = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__load_control__DOT__accept_req 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_valid_i) 
           & (~ (IData)((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_valid_q)))));
    if ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
        if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 6U;
        } else if ((5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 8U;
        } else if (((8U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q)) 
                    & (~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__ni_pending_q)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 6U;
        } else if ((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_translation_req = 1U;
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_dtlb_hit) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 1U;
            }
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pop_ld 
                    = (1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                >> 6U)));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
        }
    } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                    = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
            } else if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                    = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 6U;
            } else if ((5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                    = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 8U;
            } else if (((8U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q)) 
                        & (~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__ni_pending_q)))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 6U;
            } else if ((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_translation_req = 1U;
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_dtlb_hit) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 1U;
                }
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pop_ld 
                        = (1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                    >> 6U)));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
            }
        } else if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 6U;
        } else if ((5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 8U;
        } else if (((8U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q)) 
                    & (~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__ni_pending_q)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 6U;
        } else if ((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_translation_req = 1U;
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_dtlb_hit) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 1U;
            }
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pop_ld 
                    = (1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                >> 6U)));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__page_offset_matches)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 1U;
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 0U;
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__load_control__DOT__accept_req) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_translation_req = 1U;
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__page_offset_matches) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 3U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                        = (0x4000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
                    if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U])) {
                        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_dtlb_hit) {
                            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__stall_ni) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 5U;
                            } else {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 2U;
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pop_ld = 1U;
                            }
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 4U;
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 1U;
                    }
                }
            }
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                    = (2U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_translation_req = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
            = (0x4000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U])) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_dtlb_hit) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__stall_ni) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 5U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 2U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pop_ld = 1U;
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 4U;
            }
        }
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__load_control__DOT__accept_req) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_translation_req = 1U;
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__page_offset_matches) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 3U;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                = (0x4000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
            if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U])) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_dtlb_hit) {
                    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__stall_ni) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 5U;
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 2U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pop_ld = 1U;
                    }
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 4U;
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_valid = 0U;
    if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                >> 6U) & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_flushed_q) 
                             >> (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                       >> 5U))))))) {
        if ((1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_last_id_q) 
                    != (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                              >> 5U))) | (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                                             >> 1U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_valid = 1U;
        }
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U] 
             & (2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_valid = 1U;
        }
    }
    if (((((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_q)) 
           & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                 >> 6U))) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_exception[0U]) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_valid_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__ld_valid = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_w 
        = (1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                  >> 0xeU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                              >> 7U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_flushed_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_flushed_q;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_ex) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__state_d = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_flushed_d = 3U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_valid_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_valid_q;
    if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_valid_d 
            = ((~ ((IData)(1U) << (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[4U] 
                                         >> 5U)))) 
               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_valid_d));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_w) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_flushed_d 
            = ((~ ((IData)(1U) << (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_free_index_multi_gen__DOT__lzc_windex_i__DOT__gen_lzc__DOT__index_nodes)))) 
               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_flushed_d));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_valid_d 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_valid_d) 
               | (3U & ((IData)(1U) << (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_load_unit__DOT__ldbuf_free_index_multi_gen__DOT__lzc_windex_i__DOT__gen_lzc__DOT__index_nodes)))));
    }
}
