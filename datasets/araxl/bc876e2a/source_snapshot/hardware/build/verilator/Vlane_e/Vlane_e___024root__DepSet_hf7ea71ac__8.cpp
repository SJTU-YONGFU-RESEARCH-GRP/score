// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlane_e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vlane_e__Syms.h"
#include "Vlane_e___024root.h"

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__234(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__234\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__out_ready_i) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__235(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__235\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellinp__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__out_ready_i));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__236(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__236\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellinp__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__out_ready_i));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__237(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__237\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))) 
                  << 1U)) | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_aux_q) 
                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellinp__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__out_ready_i)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__238(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__238\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__out_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__239(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__239\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__out_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__240(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__240\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__out_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__241(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__241\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__out_ready_i) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__242(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__242\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__out_ready_i) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__243(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__243\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_h11063625__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_hc80a84f6__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_he7811ab0__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_h927b7004__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_h83225957__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_hf05fca47__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_ha5379bfd__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_hb404d919__0))))))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_hafe31668__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_hc5ac7fef__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_he921e9c4__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_h12e47488__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_h078cb548__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_h172ffd07__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h945159fb__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_hbf146784__0))))))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_h3a58fee1__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_h542d3998__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_h5ff49fb9__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_hae09b26c__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_h123d6917__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_h403a0bf1__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h872d47ca__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_h8d1bae06__0))))))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_h50cf160c__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_h740f3125__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_hecc818f0__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_hb98f1d6f__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_ha7c7f1d5__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_h93a4021b__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h93f50e0c__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_h884344b4__0))))))));
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__244(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__244\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_h7a6b9c2b__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_hca5f7941__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_h097fa256__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_hb4eeacac__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_hcb47b680__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_hbeb8940f__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_hcd1c97fb__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_h06d617c0__0))))))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_hb6c147ac__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_h7db1af4e__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_h888396da__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_hd1beb3ed__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_hb73dbb24__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_hd333f15c__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h471bf582__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_hbcabe074__0))))))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_hc416f063__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_h8b79fbfd__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_hf2084df2__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_h17e4057d__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_hca64d372__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_hd0f89b24__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h3d61e230__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_h994ca958__0))))))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_h72555475__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_hf2410107__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_h3646605b__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_h7f958bc0__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_h58287cc3__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_hdbe100db__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_hb22141f2__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_hb4ec72b1__0))))))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__operand_requester_gnt 
        = (((IData)(vlSelf->__VdfgTmp_hd5c430a1__0) 
            << 7U) | (((IData)(vlSelf->__VdfgTmp_h2cacf40c__0) 
                       << 6U) | (((IData)(vlSelf->__VdfgTmp_h68c3ab87__0) 
                                  << 5U) | (((IData)(vlSelf->__VdfgTmp_had4ec8a8__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->__VdfgTmp_h024af646__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__VdfgTmp_hd30b4fd3__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h6f564151__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__VdfgTmp_h1fb1bac4__0))))))));
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__ibuf_usage_d) 
                       - (IData)(1U)));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__ibuf_usage_d) 
                       - (IData)(1U)));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__ibuf_usage_d) 
                       - (IData)(1U)));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__ibuf_usage_d) 
                       - (IData)(1U)));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__ibuf_usage_d 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__operand_requester_gnt))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__ibuf_usage_d)));
    }
    if (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__ibuf_pop) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__ibuf_usage_d 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__ibuf_usage_d) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__245(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__245\n"); );
    // Init
    QData/*62:0*/ lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0;
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0;
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 = 0;
    VlWide<4>/*111:0*/ lane_e__DOT__i_operand_requester__DOT__operand_gnt;
    VL_ZERO_W(112, lane_e__DOT__i_operand_requester__DOT__operand_gnt);
    VlWide<3>/*95:0*/ __Vtemp_h59313edb__0;
    VlWide<3>/*95:0*/ __Vtemp_h1f30da73__0;
    VlWide<3>/*95:0*/ __Vtemp_h2abbc5ca__0;
    VlWide<3>/*95:0*/ __Vtemp_hf533380c__0;
    VlWide<4>/*127:0*/ __Vtemp_h9173fe23__0;
    VlWide<4>/*127:0*/ __Vtemp_hbb15684b__0;
    // Body
    __Vtemp_h59313edb__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_hae09b26c__0)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_hb98f1d6f__0)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h12e47488__0)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_hb4eeacac__0)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_hd1beb3ed__0)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(vlSelf->__VdfgTmp_h17e4057d__0)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(vlSelf->__VdfgTmp_h7f958bc0__0)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(vlSelf->__VdfgTmp_had4ec8a8__0)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                ((4U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x15U)))) 
                                                                                | ((0x7feU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x15U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x15U)))))))) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                ((0x1ffeU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x13U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x13U))))))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->__VdfgTmp_h83225957__0)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->__VdfgTmp_h123d6917__0)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(vlSelf->__VdfgTmp_ha7c7f1d5__0)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(vlSelf->__VdfgTmp_h078cb548__0)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(vlSelf->__VdfgTmp_hcb47b680__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hb73dbb24__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hca64d372__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h58287cc3__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h024af646__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 7U)))) 
                                                                                | ((0x1fffffeU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 7U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 7U)))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x7fffffeU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 5U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 5U))))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hf05fca47__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h403a0bf1__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h93a4021b__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h172ffd07__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbeb8940f__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__VdfgTmp_hd333f15c__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hd0f89b24__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hdbe100db__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hd30b4fd3__0) 
                                                                                << 0x1cU) 
                                                                                | (((0x8000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x17U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 0x1bU) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))) 
                                                                                | ((0xfc000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x17U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0x1aU)))) 
                                                                                | (0x2000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x16U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 0x19U) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))))) 
                                                                                | (((0xff000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x15U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0x18U)))) 
                                                                                | (0x800000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x14U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 0x17U) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U])))) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_ha5379bfd__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h872d47ca__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h93f50e0c__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h945159fb__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hcd1c97fb__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h471bf582__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h3d61e230__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb22141f2__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h6f564151__0) 
                                                                                << 0xeU) 
                                                                                | (((0x2000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 9U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 0xdU) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))) 
                                                                                | ((0xfffff000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 9U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0xcU)))) 
                                                                                | (0x800U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 8U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 0xbU) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))))) 
                                                                                | (((0xfffffc00U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 7U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0xaU)))) 
                                                                                | (0x200U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 6U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 9U) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U])))) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb404d919__0) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h8d1bae06__0) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h884344b4__0) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hbf146784__0) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h06d617c0__0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hbcabe074__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h994ca958__0) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb4ec72b1__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h1fb1bac4__0)))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h59313edb__0[1U] = (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_hae09b26c__0)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->__VdfgTmp_hb98f1d6f__0)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->__VdfgTmp_h12e47488__0)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->__VdfgTmp_hb4eeacac__0)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->__VdfgTmp_hd1beb3ed__0)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(vlSelf->__VdfgTmp_h17e4057d__0)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(vlSelf->__VdfgTmp_h7f958bc0__0)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(vlSelf->__VdfgTmp_had4ec8a8__0)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                ((4U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x15U)))) 
                                                                                | ((0x7feU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x15U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x15U)))))))) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(
                                                                                ((0x1ffeU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x13U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 0x13U))))))) 
                                                                     << 0x33U) 
                                                                    | (((QData)((IData)(vlSelf->__VdfgTmp_h83225957__0)) 
                                                                        << 0x32U) 
                                                                       | (((QData)((IData)(vlSelf->__VdfgTmp_h123d6917__0)) 
                                                                           << 0x31U) 
                                                                          | (((QData)((IData)(vlSelf->__VdfgTmp_ha7c7f1d5__0)) 
                                                                              << 0x30U) 
                                                                             | (((QData)((IData)(vlSelf->__VdfgTmp_h078cb548__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hcb47b680__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hb73dbb24__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hca64d372__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h58287cc3__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h024af646__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((4U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 2U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 7U)))) 
                                                                                | ((0x1fffffeU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 7U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 7U)))))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                ((0x7fffffeU 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 2U) 
                                                                                & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 5U) 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 1U)))) 
                                                                                | (1U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                >> 3U) 
                                                                                & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                                                >> 5U))))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hf05fca47__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h403a0bf1__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h93a4021b__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h172ffd07__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbeb8940f__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__VdfgTmp_hd333f15c__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hd0f89b24__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hdbe100db__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hd30b4fd3__0) 
                                                                                << 0x1cU) 
                                                                                | (((0x8000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x17U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 0x1bU) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))) 
                                                                                | ((0xfc000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x17U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0x1aU)))) 
                                                                                | (0x2000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x16U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 0x19U) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))))) 
                                                                                | (((0xff000000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x15U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0x18U)))) 
                                                                                | (0x800000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 0x14U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 0x17U) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U])))) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_ha5379bfd__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h872d47ca__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h93f50e0c__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h945159fb__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hcd1c97fb__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h471bf582__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h3d61e230__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb22141f2__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h6f564151__0) 
                                                                                << 0xeU) 
                                                                                | (((0x2000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 9U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                                << 0xdU) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))) 
                                                                                | ((0xfffff000U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 9U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0xcU)))) 
                                                                                | (0x800U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 8U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 0xbU) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U]))))) 
                                                                                | (((0xfffffc00U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 7U) 
                                                                                & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                                                & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                                << 0xaU)))) 
                                                                                | (0x200U 
                                                                                & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                                << 6U) 
                                                                                & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                                << 9U) 
                                                                                & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U])))) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb404d919__0) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h8d1bae06__0) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h884344b4__0) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hbf146784__0) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h06d617c0__0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hbcabe074__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h994ca958__0) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb4ec72b1__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h1fb1bac4__0)))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h1f30da73__0[2U] = ((0xfffffff8U & ((0x20U 
                                                 & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                     << 1U) 
                                                    & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                        << 5U) 
                                                       & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U]))) 
                                                | ((0xfffffff0U 
                                                    & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        << 1U) 
                                                       & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                          & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                             << 4U)))) 
                                                   | (8U 
                                                      & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                         & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                             << 3U) 
                                                            & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U])))))) 
                                | ((0xfffffffeU & (
                                                   (0x7ffffffcU 
                                                    & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 1U) 
                                                       & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                          & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                             << 2U)))) 
                                                   | (2U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          >> 2U) 
                                                         & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                             << 1U) 
                                                            & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U]))))) 
                                   | (IData)(vlSelf->__VdfgTmp_h927b7004__0)));
    __Vtemp_h2abbc5ca__0[2U] = ((0xffff8000U & ((0xffff0000U 
                                                 & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                     << 0xdU) 
                                                    & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                       & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 0x10U)))) 
                                                | (0x8000U 
                                                   & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       << 0xcU) 
                                                      & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                          << 0xfU) 
                                                         & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U]))))) 
                                | (((IData)(vlSelf->__VdfgTmp_he7811ab0__0) 
                                    << 0xeU) | (((IData)(vlSelf->__VdfgTmp_h5ff49fb9__0) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->__VdfgTmp_hecc818f0__0) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__VdfgTmp_he921e9c4__0) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h097fa256__0) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__VdfgTmp_h888396da__0) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__VdfgTmp_hf2084df2__0) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h3646605b__0) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__VdfgTmp_h68c3ab87__0) 
                                                                      << 6U) 
                                                                     | __Vtemp_h1f30da73__0[2U]))))))))));
    __Vtemp_hf533380c__0[2U] = (((IData)(vlSelf->__VdfgTmp_hca5f7941__0) 
                                 << 0x18U) | (((IData)(vlSelf->__VdfgTmp_h7db1af4e__0) 
                                               << 0x17U) 
                                              | (((IData)(vlSelf->__VdfgTmp_h8b79fbfd__0) 
                                                  << 0x16U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_hf2410107__0) 
                                                     << 0x15U) 
                                                    | (((IData)(vlSelf->__VdfgTmp_h2cacf40c__0) 
                                                        << 0x14U) 
                                                       | ((0xfffe0000U 
                                                           & ((0x80000U 
                                                               & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                   << 0xfU) 
                                                                  & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                      << 0x13U) 
                                                                     & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U]))) 
                                                              | ((0xfffc0000U 
                                                                  & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                      << 0xfU) 
                                                                     & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                                        & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                                           << 0x12U)))) 
                                                                 | (0x20000U 
                                                                    & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                        << 0xeU) 
                                                                       & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                                           << 0x11U) 
                                                                          & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U])))))) 
                                                          | __Vtemp_h2abbc5ca__0[2U]))))));
    __Vtemp_h9173fe23__0[3U] = (((IData)(vlSelf->__VdfgTmp_hafe31668__0) 
                                 << 7U) | (((IData)(vlSelf->__VdfgTmp_h7a6b9c2b__0) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__VdfgTmp_hb6c147ac__0) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__VdfgTmp_hc416f063__0) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_h72555475__0) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->__VdfgTmp_hd5c430a1__0) 
                                                        << 2U) 
                                                       | (0x7fffffffU 
                                                          & ((2U 
                                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                  >> 3U) 
                                                                 & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                                     << 1U) 
                                                                    & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U]))) 
                                                             | ((0x1fffffffU 
                                                                 & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                     >> 3U) 
                                                                    & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                                       & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))) 
                                                                | ((IData)(
                                                                           ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                                              >> 3U) 
                                                                             & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                                                                            & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                                               >> 0x1fU))) 
                                                                   >> 1U))))))))));
    __Vtemp_hbb15684b__0[3U] = ((0xffffe000U & (((IData)(
                                                         ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                            >> 4U) 
                                                           & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel))) 
                                                          & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                             >> 0xfU))) 
                                                 << 0xfU) 
                                                | ((0xffffc000U 
                                                    & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        << 0xbU) 
                                                       & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                          & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                             << 0xeU)))) 
                                                   | (0x2000U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 0xaU) 
                                                         & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                             << 0xdU) 
                                                            & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U])))))) 
                                | ((0xfffff800U & (
                                                   (0xfffff000U 
                                                    & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        << 9U) 
                                                       & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                          & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                             << 0xcU)))) 
                                                   | (0x800U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 8U) 
                                                         & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                             << 0xbU) 
                                                            & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U]))))) 
                                   | (((IData)(vlSelf->__VdfgTmp_h11063625__0) 
                                       << 0xaU) | (
                                                   ((IData)(vlSelf->__VdfgTmp_h3a58fee1__0) 
                                                    << 9U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h50cf160c__0) 
                                                       << 8U) 
                                                      | __Vtemp_h9173fe23__0[3U])))));
    lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
        = __Vtemp_h59313edb__0[0U];
    lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
        = __Vtemp_h59313edb__0[1U];
    lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
        = (((IData)(((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                       >> 3U) & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                     & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                        >> 0x1fU))) << 0x1fU) | ((0xe0000000U 
                                                  & ((0xc0000000U 
                                                      & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                          << 0x1bU) 
                                                         & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                            & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                               << 0x1eU)))) 
                                                     | (0x20000000U 
                                                        & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                            << 0x1aU) 
                                                           & (((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                               << 0x1dU) 
                                                              & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U]))))) 
                                                 | (((IData)(vlSelf->__VdfgTmp_hc80a84f6__0) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->__VdfgTmp_h542d3998__0) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->__VdfgTmp_h740f3125__0) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->__VdfgTmp_hc5ac7fef__0) 
                                                              << 0x19U) 
                                                             | __Vtemp_hf533380c__0[2U]))))));
    lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U] 
        = __Vtemp_hbb15684b__0[3U];
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                                                  >> 0xaU));
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__mfpu_result_gnt) 
                                                  | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                                                     >> 0x18U)));
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__mfpu_result_gnt) 
                                                  | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                                                     >> 6U)));
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__mfpu_result_gnt) 
                                                  | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                                                     >> 0x14U)));
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__mfpu_result_gnt) 
                                                  | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                                                     >> 2U)));
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__mfpu_result_gnt) 
                                                  | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                                                     >> 0x10U)));
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__mfpu_result_gnt) 
                                                  | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                                                     >> 0x1eU)));
    vlSelf->lane_e__DOT__mfpu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__mfpu_result_gnt) 
                                                  | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U] 
                                                     >> 0xcU)));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                                                 >> 9U));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__alu_result_gnt) 
                                                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                                                    >> 0x17U)));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__alu_result_gnt) 
                                                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                                                    >> 5U)));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__alu_result_gnt) 
                                                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                                                    >> 0x13U)));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__alu_result_gnt) 
                                                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                                                    >> 1U)));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__alu_result_gnt) 
                                                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                                                    >> 0xfU)));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__alu_result_gnt) 
                                                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                                                    >> 0x1dU)));
    vlSelf->lane_e__DOT__alu_result_gnt = (1U & ((IData)(vlSelf->lane_e__DOT__alu_result_gnt) 
                                                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U] 
                                                    >> 0xbU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                 >> 0xcU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                    >> 0x1aU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                    >> 8U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                    >> 0x16U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                    >> 4U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                    >> 0x12U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt) 
                 | lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U] 
                    >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = (1U & (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                 >> 0xdU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                    >> 0x1bU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                    >> 9U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                    >> 0x17U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                    >> 5U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                    >> 0x13U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U] 
                    >> 1U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt) 
           | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U] 
              >> 0xfU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = (1U & (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                 >> 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[0U] 
                    >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                    >> 7U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[1U] 
                    >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                    >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
                    >> 0x11U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt) 
           | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[2U] 
              >> 0x1fU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt) 
                 | (lane_e__DOT__i_operand_requester__DOT__operand_gnt[3U] 
                    >> 0xdU)));
    vlSelf->masku_result_gnt_o = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_req)) 
                                        | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt)));
    vlSelf->ldu_result_gnt_o = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_req)) 
                                      | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt)));
    vlSelf->lane_e__DOT__sldu_result_gnt_opqueues = 
        (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_req)) 
               | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d = 0U;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d 
        = (((~ ((IData)(1U) << (IData)(vlSelf->lane_e__DOT__alu_result_id))) 
            & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d)) 
           | (0xffU & ((1U & (IData)(vlSelf->lane_e__DOT__alu_result_gnt)) 
                       << (IData)(vlSelf->lane_e__DOT__alu_result_id))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d 
        = (((~ ((IData)(1U) << (IData)(vlSelf->lane_e__DOT__mfpu_result_id))) 
            & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d)) 
           | (0xffU & ((1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d) 
                               >> (IData)(vlSelf->lane_e__DOT__mfpu_result_id)) 
                              | (IData)(vlSelf->lane_e__DOT__mfpu_result_gnt))) 
                       << (IData)(vlSelf->lane_e__DOT__mfpu_result_id))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d 
        = (((~ ((IData)(1U) << (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_masku_stream_register__data_o[2U] 
                                      >> 0x14U)))) 
            & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d)) 
           | (0xffU & ((1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d) 
                               >> (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_masku_stream_register__data_o[2U] 
                                         >> 0x14U))) 
                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__masku_result_gnt))) 
                       << (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_masku_stream_register__data_o[2U] 
                                 >> 0x14U)))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d 
        = (((~ ((IData)(1U) << (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_ldu_stream_register__data_o[2U] 
                                      >> 0x14U)))) 
            & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d)) 
           | (0xffU & ((1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d) 
                               >> (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_ldu_stream_register__data_o[2U] 
                                         >> 0x14U))) 
                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__ldu_result_gnt))) 
                       << (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_ldu_stream_register__data_o[2U] 
                                 >> 0x14U)))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d 
        = (((~ ((IData)(1U) << (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_sldu_stream_register__data_o[2U] 
                                      >> 0x14U)))) 
            & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d)) 
           | (0xffU & ((1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d) 
                               >> (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_sldu_stream_register__data_o[2U] 
                                         >> 0x14U))) 
                              | (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__sldu_result_gnt))) 
                       << (7U & (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__i_sldu_stream_register__data_o[2U] 
                                 >> 0x14U)))));
    vlSelf->sldu_result_gnt_o = ((0U == (IData)(vlSelf->sldu_commit_mux_sel_i))
                                  ? (IData)(vlSelf->lane_e__DOT__sldu_result_gnt_opqueues)
                                  : ((1U == (IData)(vlSelf->sldu_commit_mux_sel_i))
                                      ? (IData)(vlSelf->lane_e__DOT__sldu_alu_ready)
                                      : (IData)(vlSelf->lane_e__DOT__sldu_mfpu_ready)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x1feU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
        = (0xff000000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x1feU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((1U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_d = 0U;
                    if ((1U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__1__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                        >> 0x17U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (1U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
                            = ((0xff000000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]) 
                               | ((0xe00000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                << 5U)) 
                                  | ((0x1fff00U & (
                                                   ((0x400000U 
                                                     & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U])
                                                     ? 
                                                    ((0x1fffU 
                                                      & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                           << 0xbU) 
                                                          | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                             >> 0x15U)) 
                                                         << 
                                                         (7U 
                                                          & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                             >> 5U)))) 
                                                     >> 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                         >> 0x10U)))
                                                     : 
                                                    ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                      << 0xbU) 
                                                     | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                        >> 0x15U))) 
                                                   << 8U)) 
                                     | ((0xf0U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                  >> 8U)) 
                                        | ((0xcU & 
                                            (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                             >> 0x12U)) 
                                           | ((2U & 
                                               (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                >> 0x12U)) 
                                              | (1U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                    >> 0xbU))))))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (1U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__1__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__1__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
                                               >> 8U)))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
                                = (0x100U | (0xffe000ffU 
                                             & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]));
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                    >> 0x1cU)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__1__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                                >> 0x10U))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                                >> 8U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                                >> 0x10U))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x400000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                              >> 0x15U)) 
                                                                          << 
                                                                          (7U 
                                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                              >> 5U)))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                          >> 0x10U)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                       << 0xbU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                         >> 0x15U)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                       << 1U)) 
                                                                   | (0x1fe00U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                         << 9U))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__0__vid = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                  >> 0x17U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (1U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
            = ((0xff000000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]) 
               | ((0xe00000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                << 5U)) | ((0x1fff00U 
                                            & (((0x400000U 
                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U])
                                                 ? 
                                                ((0x1fffU 
                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                       << 0xbU) 
                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                         >> 0x15U)) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                         >> 5U)))) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                     >> 0x10U)))
                                                 : 
                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                  << 0xbU) 
                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                    >> 0x15U))) 
                                               << 8U)) 
                                           | ((0xf0U 
                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                  >> 8U)) 
                                              | ((0xcU 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                     >> 0x12U)) 
                                                 | ((2U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                        >> 0x12U)) 
                                                    | (1U 
                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                          >> 0xbU))))))));
        vlSelf->__Vfunc_vaddr__0__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__0__vid)) 
                                              << 4U);
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
                               >> 8U)))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
                = (0x100U | (0xffe000ffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]));
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (1U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                       >> 0x1cU)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__0__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                   >> 0x10U))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                                >> 8U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                   >> 0x10U))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x400000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                       << 0xbU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                         >> 0x15U)) 
                                                                     << 
                                                                     (7U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                         >> 5U)))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                     >> 0x10U)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                  << 0xbU) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                    >> 0x15U)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                  << 1U)) 
                                                              | ((0x1fe00U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                                                     << 9U)) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                         >> 0x14U))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                << 0xbU) | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U] 
                                            >> 0x15U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x1feU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__0__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x1fdU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
        = (0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]);
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
        = (0xffff0000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x1fdU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_d = 0U;
                    if ((2U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__3__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                        >> 0x16U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (2U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
                            = ((0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]) 
                               | (0xff000000U & ((0xf0000000U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                     << 0x11U)) 
                                                 | ((0xc000000U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                        << 7U)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                           << 7U)) 
                                                       | (0x1000000U 
                                                          & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                             << 0xeU)))))));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                            = ((0xffff0000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]) 
                               | (0xffffffU & ((0xe000U 
                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                   >> 2U)) 
                                               | (0x1fffU 
                                                  & ((0x200000U 
                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U])
                                                      ? 
                                                     ((0x1fffU 
                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                            << 0xcU) 
                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                              >> 0x14U)) 
                                                          << 
                                                          (7U 
                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                              >> 4U)))) 
                                                      >> 
                                                      (7U 
                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                          >> 0xfU)))
                                                      : 
                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                       << 0xcU) 
                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                         >> 0x14U)))))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (2U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__3__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__3__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                                = (1U | (0xffffe000U 
                                         & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]));
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                    >> 0x1bU)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__3__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                                >> 0xfU))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                                >> 7U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                                >> 0xfU))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x200000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                            << 0xcU) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                              >> 0x14U)) 
                                                                          << 
                                                                          (7U 
                                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                              >> 4U)))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                          >> 0xfU)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                       << 0xcU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                         >> 0x14U)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                       << 2U)) 
                                                                   | (0x1fe00U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                          << 0xaU) 
                                                                         | (0x200U 
                                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                               >> 0x16U))))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__2__vid = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                  >> 0x16U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (2U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
            = ((0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]) 
               | (0xff000000U & ((0xf0000000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                 << 0x11U)) 
                                 | ((0xc000000U & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                   << 7U)) 
                                    | ((0x2000000U 
                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                           << 7U)) 
                                       | (0x1000000U 
                                          & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                             << 0xeU)))))));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
            = ((0xffff0000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]) 
               | (0xffffffU & ((0xe000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                           >> 2U)) 
                               | (0x1fffU & ((0x200000U 
                                              & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U])
                                              ? ((0x1fffU 
                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                       << 0xcU) 
                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                         >> 0x14U)) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                         >> 4U)))) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                     >> 0xfU)))
                                              : ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                  << 0xcU) 
                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                    >> 0x14U)))))));
        vlSelf->__Vfunc_vaddr__2__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__2__vid)) 
                                              << 4U);
        if ((0U == (0x1fffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                = (1U | (0xffffe000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]));
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (2U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                       >> 0x1bU)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__2__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                   >> 0xfU))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                                >> 7U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                   >> 0xfU))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x200000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                       << 0xcU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                         >> 0x14U)) 
                                                                     << 
                                                                     (7U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                         >> 4U)))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                     >> 0xfU)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                  << 0xcU) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                    >> 0x14U)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                  << 2U)) 
                                                              | ((0x1fe00U 
                                                                  & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                                                      << 0xaU) 
                                                                     | (0x200U 
                                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U] 
                                                                           >> 0x16U)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                         >> 0x13U))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                << 0xcU) | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U] 
                                            >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x1fdU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__1__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x1fbU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
        = (0xffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]);
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
        = (0xffffff00U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x1fbU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_d = 0U;
                    if ((4U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__5__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                        >> 0x15U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (4U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                            = ((0xffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]) 
                               | (0xffff0000U & (((
                                                   (0x100000U 
                                                    & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])
                                                    ? 
                                                   ((0x1fffU 
                                                     & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                          << 0xdU) 
                                                         | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                            >> 0x13U)) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                            >> 3U)))) 
                                                    >> 
                                                    (7U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                        >> 0xeU)))
                                                    : 
                                                   ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                     << 0xdU) 
                                                    | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                       >> 0x13U))) 
                                                  << 0x18U) 
                                                 | ((0xf00000U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                        << 0xaU)) 
                                                    | ((0xc0000U 
                                                        & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U]) 
                                                       | ((0x20000U 
                                                           & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U]) 
                                                          | (0x10000U 
                                                             & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                << 7U))))))));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                            = ((0xffffff00U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]) 
                               | (0xffffU & ((0xe0U 
                                              & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                 >> 9U)) 
                                             | (0x1fU 
                                                & (((0x100000U 
                                                     & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])
                                                     ? 
                                                    ((0x1fffU 
                                                      & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                           << 0xdU) 
                                                          | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                             >> 0x13U)) 
                                                         << 
                                                         (7U 
                                                          & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                             >> 3U)))) 
                                                     >> 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                         >> 0xeU)))
                                                     : 
                                                    ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                      << 0xdU) 
                                                     | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                        >> 0x13U))) 
                                                   >> 8U)))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (4U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__5__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__5__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                                                << 8U) 
                                               | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                                                  >> 0x18U))))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                                = (0x1000000U | (0xffffffU 
                                                 & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]));
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                                = (0xffffffe0U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]);
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                    >> 0x1aU)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__5__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                                >> 0xeU))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                                >> 6U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                                >> 0xeU))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x100000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                            << 0xdU) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                              >> 0x13U)) 
                                                                          << 
                                                                          (7U 
                                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                              >> 3U)))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                          >> 0xeU)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                       << 0xdU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                         >> 0x13U)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                       << 3U)) 
                                                                   | (0x1fe00U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                          << 0xbU) 
                                                                         | (0x600U 
                                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                               >> 0x15U))))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__4__vid = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                  >> 0x15U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (4U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
            = ((0xffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]) 
               | (0xffff0000U & ((((0x100000U & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])
                                    ? ((0x1fffU & (
                                                   ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                     << 0xdU) 
                                                    | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                       >> 0x13U)) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                       >> 3U)))) 
                                       >> (7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                 >> 0xeU)))
                                    : ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                        << 0xdU) | 
                                       (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                        >> 0x13U))) 
                                  << 0x18U) | ((0xf00000U 
                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                   << 0xaU)) 
                                               | ((0xc0000U 
                                                   & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U]) 
                                                  | ((0x20000U 
                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U]) 
                                                     | (0x10000U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                           << 7U))))))));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
            = ((0xffffff00U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]) 
               | (0xffffU & ((0xe0U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                       >> 9U)) | (0x1fU 
                                                  & (((0x100000U 
                                                       & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])
                                                       ? 
                                                      ((0x1fffU 
                                                        & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                             << 0xdU) 
                                                            | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                               >> 0x13U)) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                               >> 3U)))) 
                                                       >> 
                                                       (7U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                           >> 0xeU)))
                                                       : 
                                                      ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                        << 0xdU) 
                                                       | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                          >> 0x13U))) 
                                                     >> 8U)))));
        vlSelf->__Vfunc_vaddr__4__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__4__vid)) 
                                              << 4U);
        if ((0U == (0x1fffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                                << 8U) | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                                          >> 0x18U))))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                = (0x1000000U | (0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U]));
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                = (0xffffffe0U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]);
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (4U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                       >> 0x1aU)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__4__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                   >> 0xeU))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                                >> 6U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                   >> 0xeU))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x100000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                       << 0xdU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                         >> 0x13U)) 
                                                                     << 
                                                                     (7U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                         >> 3U)))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                     >> 0xeU)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                  << 0xdU) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                    >> 0x13U)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                  << 3U)) 
                                                              | ((0x1fe00U 
                                                                  & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                                                                      << 0xbU) 
                                                                     | (0x600U 
                                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U] 
                                                                           >> 0x15U)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                         >> 0x12U))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d));
        }
        if ((0U == (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U] 
                    >> 0x13U))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x1fbU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__2__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x1f7U 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
        = (0xffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x1f7U & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_d = 0U;
                    if ((8U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__7__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                        >> 0x14U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (8U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                            = ((0xffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]) 
                               | (0xffffff00U & ((0xe0000000U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                     << 0x10U)) 
                                                 | ((0x1fff0000U 
                                                     & (((0x80000U 
                                                          & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U])
                                                          ? 
                                                         ((0x1fffU 
                                                           & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                << 0xeU) 
                                                               | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                  >> 0x12U)) 
                                                              << 
                                                              (7U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                  >> 2U)))) 
                                                          >> 
                                                          (7U 
                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                              >> 0xdU)))
                                                          : 
                                                         ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                           << 0xeU) 
                                                          | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                             >> 0x12U))) 
                                                        << 0x10U)) 
                                                    | ((0xf000U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                           << 3U)) 
                                                       | ((0xc00U 
                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                              >> 7U)) 
                                                          | ((0x200U 
                                                              & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                 >> 7U)) 
                                                             | (0x100U 
                                                                & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U]))))))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (8U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__7__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__7__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                                               >> 0x10U)))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                                = (0x10000U | (0xe000ffffU 
                                               & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]));
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                    >> 0x19U)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__7__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                                >> 0xdU))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                                >> 5U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                                >> 0xdU))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x80000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                            << 0xeU) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                              >> 0x12U)) 
                                                                          << 
                                                                          (7U 
                                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                              >> 2U)))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                          >> 0xdU)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                       << 0xeU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                         >> 0x12U)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                       << 4U)) 
                                                                   | (0x1fe00U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                          << 0xcU) 
                                                                         | (0xe00U 
                                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                               >> 0x14U))))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__6__vid = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                  >> 0x14U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (8U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
            = ((0xffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]) 
               | (0xffffff00U & ((0xe0000000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                 << 0x10U)) 
                                 | ((0x1fff0000U & 
                                     (((0x80000U & 
                                        vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U])
                                        ? ((0x1fffU 
                                            & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                 << 0xeU) 
                                                | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                   >> 0x12U)) 
                                               << (7U 
                                                   & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                      >> 2U)))) 
                                           >> (7U & 
                                               (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                >> 0xdU)))
                                        : ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                            << 0xeU) 
                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                              >> 0x12U))) 
                                      << 0x10U)) | 
                                    ((0xf000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                 << 3U)) 
                                     | ((0xc00U & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                   >> 7U)) 
                                        | ((0x200U 
                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                               >> 7U)) 
                                           | (0x100U 
                                              & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U]))))))));
        vlSelf->__Vfunc_vaddr__6__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__6__vid)) 
                                              << 4U);
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                               >> 0x10U)))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                = (0x10000U | (0xe000ffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U]));
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (8U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                       >> 0x19U)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__6__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                   >> 0xdU))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                                >> 5U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                   >> 0xdU))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x80000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                       << 0xeU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                         >> 0x12U)) 
                                                                     << 
                                                                     (7U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                         >> 2U)))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                     >> 0xdU)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                  << 0xeU) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                    >> 0x12U)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                  << 4U)) 
                                                              | ((0x1fe00U 
                                                                  & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                                                                      << 0xcU) 
                                                                     | (0xe00U 
                                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U] 
                                                                           >> 0x14U)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                         >> 0x11U))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U] 
                               >> 0x12U)))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x1f7U & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__3__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x1efU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
        = (0xff000000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x1efU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_d = 0U;
                    if ((0x10U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__9__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                        >> 0x13U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (0x10U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
                            = ((0xff000000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]) 
                               | ((0xe00000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                << 9U)) 
                                  | ((0x1fff00U & (
                                                   ((0x40000U 
                                                     & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U])
                                                     ? 
                                                    ((0x1fffU 
                                                      & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                           << 0xfU) 
                                                          | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                             >> 0x11U)) 
                                                         << 
                                                         (7U 
                                                          & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                             >> 1U)))) 
                                                     >> 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                         >> 0xcU)))
                                                     : 
                                                    ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                      << 0xfU) 
                                                     | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                        >> 0x11U))) 
                                                   << 8U)) 
                                     | ((0xf0U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                  >> 4U)) 
                                        | ((0xcU & 
                                            (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                             >> 0xeU)) 
                                           | ((2U & 
                                               (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                >> 0xeU)) 
                                              | (1U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                    >> 7U))))))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (0x10U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__9__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__9__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
                                               >> 8U)))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
                                = (0x100U | (0xffe000ffU 
                                             & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]));
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                    >> 0x18U)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__9__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                                >> 0xcU))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                                >> 4U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                                >> 0xcU))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x40000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                            << 0xfU) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                              >> 0x11U)) 
                                                                          << 
                                                                          (7U 
                                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                              >> 1U)))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                          >> 0xcU)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                       << 0xfU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                         >> 0x11U)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                       << 5U)) 
                                                                   | (0x1fe00U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                          << 0xdU) 
                                                                         | (0x1e00U 
                                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                               >> 0x13U))))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__8__vid = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                  >> 0x13U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (0x10U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
            = ((0xff000000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]) 
               | ((0xe00000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                << 9U)) | ((0x1fff00U 
                                            & (((0x40000U 
                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U])
                                                 ? 
                                                ((0x1fffU 
                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                       << 0xfU) 
                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                         >> 0x11U)) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                         >> 1U)))) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                     >> 0xcU)))
                                                 : 
                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                  << 0xfU) 
                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                    >> 0x11U))) 
                                               << 8U)) 
                                           | ((0xf0U 
                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                  >> 4U)) 
                                              | ((0xcU 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                     >> 0xeU)) 
                                                 | ((2U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                        >> 0xeU)) 
                                                    | (1U 
                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                          >> 7U))))))));
        vlSelf->__Vfunc_vaddr__8__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__8__vid)) 
                                              << 4U);
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
                               >> 8U)))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
                = (0x100U | (0xffe000ffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]));
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (0x10U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                       >> 0x18U)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__8__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                   >> 0xcU))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                                >> 4U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                   >> 0xcU))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x40000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                       << 0xfU) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                         >> 0x11U)) 
                                                                     << 
                                                                     (7U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                         >> 1U)))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                     >> 0xcU)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                  << 0xfU) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                    >> 0x11U)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                  << 5U)) 
                                                              | ((0x1fe00U 
                                                                  & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                                                                      << 0xdU) 
                                                                     | (0x1e00U 
                                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U] 
                                                                           >> 0x13U)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                         >> 0x10U))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U] 
                               >> 0x11U)))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x1efU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__4__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x1dfU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
        = (0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]);
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
        = (0xffff0000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x1dfU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_d = 0U;
                    if ((0x20U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__11__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                        >> 0x12U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (0x20U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
                            = ((0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]) 
                               | (0xff000000U & ((0xf0000000U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                     << 0x15U)) 
                                                 | ((0xc000000U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                        << 0xbU)) 
                                                    | ((0x2000000U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                           << 0xbU)) 
                                                       | (0x1000000U 
                                                          & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                             << 0x12U)))))));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                            = ((0xffff0000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]) 
                               | (0xffffffU & ((0xe000U 
                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                   << 2U)) 
                                               | (0x1fffU 
                                                  & ((0x20000U 
                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU])
                                                      ? 
                                                     ((0x1fffU 
                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                            << 0x10U) 
                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                              >> 0x10U)) 
                                                          << 
                                                          (7U 
                                                           & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU]))) 
                                                      >> 
                                                      (7U 
                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                          >> 0xbU)))
                                                      : 
                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                       << 0x10U) 
                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                         >> 0x10U)))))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (0x20U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__11__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__11__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                                = (1U | (0xffffe000U 
                                         & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]));
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                    >> 0x17U)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__11__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                                >> 0xbU))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                                >> 3U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                                >> 0xbU))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x20000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                            << 0x10U) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                              >> 0x10U)) 
                                                                          << 
                                                                          (7U 
                                                                           & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU]))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                          >> 0xbU)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                         >> 0x10U)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                       << 6U)) 
                                                                   | (0x1fe00U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                          << 0xeU) 
                                                                         | (0x3e00U 
                                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                               >> 0x12U))))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__10__vid = (0x1fU & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                   >> 0x12U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (0x20U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
            = ((0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]) 
               | (0xff000000U & ((0xf0000000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                 << 0x15U)) 
                                 | ((0xc000000U & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                   << 0xbU)) 
                                    | ((0x2000000U 
                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                           << 0xbU)) 
                                       | (0x1000000U 
                                          & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                             << 0x12U)))))));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
            = ((0xffff0000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]) 
               | (0xffffffU & ((0xe000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                           << 2U)) 
                               | (0x1fffU & ((0x20000U 
                                              & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU])
                                              ? ((0x1fffU 
                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                       << 0x10U) 
                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                         >> 0x10U)) 
                                                     << 
                                                     (7U 
                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU]))) 
                                                 >> 
                                                 (7U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                     >> 0xbU)))
                                              : ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                  << 0x10U) 
                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                    >> 0x10U)))))));
        vlSelf->__Vfunc_vaddr__10__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__10__vid)) 
                                               << 4U);
        if ((0U == (0x1fffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                = (1U | (0xffffe000U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]));
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (0x20U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                       >> 0x17U)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__10__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                   >> 0xbU))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                                >> 3U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                   >> 0xbU))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x20000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                         >> 0x10U)) 
                                                                     << 
                                                                     (7U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU]))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                     >> 0xbU)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                    >> 0x10U)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                  << 6U)) 
                                                              | ((0x1fe00U 
                                                                  & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                                                                      << 0xeU) 
                                                                     | (0x3e00U 
                                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U] 
                                                                           >> 0x12U)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                         >> 0xfU))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU] 
                               >> 0x10U)))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x1dfU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x1bfU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
        = (0xffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]);
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
        = (0xffffff00U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x1bfU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_d = 0U;
                    if ((0x40U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__13__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                        >> 0x11U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (0x40U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                            = ((0xffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]) 
                               | (0xffff0000U & (((
                                                   (0x10000U 
                                                    & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])
                                                    ? 
                                                   ((0x1fffU 
                                                     & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                          << 0x11U) 
                                                         | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                            >> 0xfU)) 
                                                        << 
                                                        (7U 
                                                         & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                             << 1U) 
                                                            | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                               >> 0x1fU))))) 
                                                    >> 
                                                    (7U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                        >> 0xaU)))
                                                    : 
                                                   ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                     << 0x11U) 
                                                    | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                       >> 0xfU))) 
                                                  << 0x18U) 
                                                 | ((0xf00000U 
                                                     & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                        << 0xeU)) 
                                                    | ((0xc0000U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                           << 4U)) 
                                                       | ((0x20000U 
                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                              << 4U)) 
                                                          | (0x10000U 
                                                             & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                << 0xbU))))))));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                            = ((0xffffff00U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]) 
                               | (0xffffU & ((0xe0U 
                                              & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                 >> 5U)) 
                                             | (0x1fU 
                                                & (((0x10000U 
                                                     & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])
                                                     ? 
                                                    ((0x1fffU 
                                                      & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                           << 0x11U) 
                                                          | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                             >> 0xfU)) 
                                                         << 
                                                         (7U 
                                                          & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                              << 1U) 
                                                             | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                >> 0x1fU))))) 
                                                     >> 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                         >> 0xaU)))
                                                     : 
                                                    ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                      << 0x11U) 
                                                     | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                        >> 0xfU))) 
                                                   >> 8U)))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (0x40U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__13__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__13__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                                                << 8U) 
                                               | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                                                  >> 0x18U))))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                                = (0x1000000U | (0xffffffU 
                                                 & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]));
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                                = (0xffffffe0U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]);
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                    >> 0x16U)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__13__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                                >> 0xaU))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                                >> 2U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                                >> 0xaU))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x10000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                            << 0x11U) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                              >> 0xfU)) 
                                                                          << 
                                                                          (7U 
                                                                           & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                               << 1U) 
                                                                              | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                                >> 0x1fU))))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                          >> 0xaU)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                       << 0x11U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                         >> 0xfU)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                       << 7U)) 
                                                                   | (0x1fe00U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                          << 0xfU) 
                                                                         | (0x7e00U 
                                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                               >> 0x11U))))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__12__vid = (0x1fU & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                   >> 0x11U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (0x40U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
            = ((0xffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]) 
               | (0xffff0000U & ((((0x10000U & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])
                                    ? ((0x1fffU & (
                                                   ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                     << 0x11U) 
                                                    | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                       >> 0xfU)) 
                                                   << 
                                                   (7U 
                                                    & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                        << 1U) 
                                                       | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                          >> 0x1fU))))) 
                                       >> (7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                 >> 0xaU)))
                                    : ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                        << 0x11U) | 
                                       (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                        >> 0xfU))) 
                                  << 0x18U) | ((0xf00000U 
                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                   << 0xeU)) 
                                               | ((0xc0000U 
                                                   & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                      << 4U)) 
                                                  | ((0x20000U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                         << 4U)) 
                                                     | (0x10000U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                           << 0xbU))))))));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
            = ((0xffffff00U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]) 
               | (0xffffU & ((0xe0U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                       >> 5U)) | (0x1fU 
                                                  & (((0x10000U 
                                                       & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])
                                                       ? 
                                                      ((0x1fffU 
                                                        & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                             << 0x11U) 
                                                            | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                               >> 0xfU)) 
                                                           << 
                                                           (7U 
                                                            & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                << 1U) 
                                                               | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                  >> 0x1fU))))) 
                                                       >> 
                                                       (7U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                           >> 0xaU)))
                                                       : 
                                                      ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                        << 0x11U) 
                                                       | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                          >> 0xfU))) 
                                                     >> 8U)))));
        vlSelf->__Vfunc_vaddr__12__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__12__vid)) 
                                               << 4U);
        if ((0U == (0x1fffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                                << 8U) | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                                          >> 0x18U))))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                = (0x1000000U | (0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U]));
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                = (0xffffffe0U & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]);
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (0x40U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                       >> 0x16U)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__12__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                   >> 0xaU))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                                >> 2U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                   >> 0xaU))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x10000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                       << 0x11U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                         >> 0xfU)) 
                                                                     << 
                                                                     (7U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                          << 1U) 
                                                                         | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                            >> 0x1fU))))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                     >> 0xaU)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                  << 0x11U) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                    >> 0xfU)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                  << 7U)) 
                                                              | ((0x1fe00U 
                                                                  & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                                                                      << 0xfU) 
                                                                     | (0x7e00U 
                                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU] 
                                                                           >> 0x11U)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                         >> 0xeU))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU] 
                               >> 0xfU)))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x1bfU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0x17fU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
        = (0xffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]);
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0x17fU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_d = 0U;
                    if ((0x80U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__15__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                        >> 0x10U));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (0x80U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                            = ((0xffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]) 
                               | (0xffffff00U & ((0xe0000000U 
                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                     << 0x14U)) 
                                                 | ((0x1fff0000U 
                                                     & (((0x8000U 
                                                          & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU])
                                                          ? 
                                                         ((0x1fffU 
                                                           & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                << 0x12U) 
                                                               | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                  >> 0xeU)) 
                                                              << 
                                                              (7U 
                                                               & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                   << 2U) 
                                                                  | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                     >> 0x1eU))))) 
                                                          >> 
                                                          (7U 
                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                              >> 9U)))
                                                          : 
                                                         ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                           << 0x12U) 
                                                          | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                             >> 0xeU))) 
                                                        << 0x10U)) 
                                                    | ((0xf000U 
                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                           << 7U)) 
                                                       | ((0xc00U 
                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                              >> 3U)) 
                                                          | ((0x200U 
                                                              & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                 >> 3U)) 
                                                             | (0x100U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                   << 4U)))))))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (0x80U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__15__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__15__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                                               >> 0x10U)))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                                = (0x10000U | (0xe000ffffU 
                                               & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]));
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                    >> 0x15U)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__15__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                                >> 9U))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                                >> 1U)))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                                >> 9U))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x8000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                            << 0x12U) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                              >> 0xeU)) 
                                                                          << 
                                                                          (7U 
                                                                           & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                               << 2U) 
                                                                              | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                                >> 0x1eU))))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                          >> 9U)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                         >> 0xeU)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                       << 8U)) 
                                                                   | (0x1fe00U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                          << 0x10U) 
                                                                         | (0xfe00U 
                                                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                               >> 0x10U))))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__14__vid = (0x1fU & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                   >> 0x10U));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (0x80U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
            = ((0xffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]) 
               | (0xffffff00U & ((0xe0000000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                 << 0x14U)) 
                                 | ((0x1fff0000U & 
                                     (((0x8000U & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU])
                                        ? ((0x1fffU 
                                            & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                 << 0x12U) 
                                                | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                   >> 0xeU)) 
                                               << (7U 
                                                   & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                       << 2U) 
                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                         >> 0x1eU))))) 
                                           >> (7U & 
                                               (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                >> 9U)))
                                        : ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                            << 0x12U) 
                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                              >> 0xeU))) 
                                      << 0x10U)) | 
                                    ((0xf000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                 << 7U)) 
                                     | ((0xc00U & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                   >> 3U)) 
                                        | ((0x200U 
                                            & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                               >> 3U)) 
                                           | (0x100U 
                                              & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                 << 4U)))))))));
        vlSelf->__Vfunc_vaddr__14__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__14__vid)) 
                                               << 4U);
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                               >> 0x10U)))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                = (0x10000U | (0xe000ffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U]));
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (0x80U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                       >> 0x15U)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__14__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                   >> 9U))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                                >> 1U)))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                   >> 9U))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x8000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                       << 0x12U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                         >> 0xeU)) 
                                                                     << 
                                                                     (7U 
                                                                      & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                          << 2U) 
                                                                         | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                            >> 0x1eU))))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                     >> 9U)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                  << 0x12U) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                    >> 0xeU)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                  << 8U)) 
                                                              | ((0x1fe00U 
                                                                  & ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                                                                      << 0x10U) 
                                                                     | (0xfe00U 
                                                                        & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU] 
                                                                           >> 0x10U)))) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                         >> 0xdU))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU] 
                               >> 0xeU)))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0x17fU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__7__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_q;
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
        = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q;
    vlSelf->lane_e__DOT__operand_request_ready = (0xffU 
                                                  & (IData)(vlSelf->lane_e__DOT__operand_request_ready));
    vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U] = 0U;
    vlSelf->lane_e__DOT__operand_queue_cmd_valid = 
        (0xffU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
    if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_q) {
        if (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_q) {
            if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xfffffffffffeULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | (IData)((IData)((1U & (~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q))))));
            }
            if ((2U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xfffffffffffdULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 1U)))))) 
                          << 1U));
            }
            if ((4U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xfffffffffffbULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 2U)))))) 
                          << 2U));
            }
            if ((8U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xfffffffffff7ULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 3U)))))) 
                          << 3U));
            }
            if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xffffffffffefULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 4U)))))) 
                          << 4U));
            }
            if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xffffffffffdfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 5U)))))) 
                          << 5U));
            }
            if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xffffffffffbfULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 6U)))))) 
                          << 6U));
            }
            if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__vinsn_result_written_d))) {
                vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                    = ((0xffffffffff7fULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                       | ((QData)((IData)((1U & (~ (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 7U)))))) 
                          << 7U));
            }
            if ((0x100U & (IData)(vlSelf->lane_e__DOT__operand_queue_ready))) {
                if ((0U != (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__operand_requester_gnt))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                        = ((0xe001ffffffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                           | ((QData)((IData)((0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(
                                                            (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                             >> 0x21U)))))) 
                              << 0x21U));
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                        = ((0xfffe000fffffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
                           | ((QData)((IData)((((0x1fffU 
                                                 & (IData)(
                                                           (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                            >> 0x14U))) 
                                                < (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << 
                                                    ((IData)(3U) 
                                                     - 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                                 >> 0x11U)))))
                                                    : 0U))
                                                ? 0U
                                                : (0x1fffU 
                                                   & ((IData)(
                                                              (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                               >> 0x14U)) 
                                                      - 
                                                      ((0x1fU 
                                                        >= 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        ? 
                                                       ((IData)(1U) 
                                                        << 
                                                        ((IData)(3U) 
                                                         - 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_q 
                                                                     >> 0x11U)))))
                                                        : 0U)))))) 
                              << 0x14U));
                }
                if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                                               >> 0x14U))))) {
                    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_d = 0U;
                    if ((0x100U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
                        vlSelf->__Vfunc_vaddr__17__vid 
                            = (0x1fU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                        >> 0xfU));
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_d = 1U;
                        vlSelf->lane_e__DOT__operand_request_ready 
                            = (0x100U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
                        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U] 
                            = (0xffffffU & ((0xe00000U 
                                             & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                << 0xdU)) 
                                            | ((0x1fff00U 
                                                & (((0x4000U 
                                                     & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U])
                                                     ? 
                                                    ((0x1fffU 
                                                      & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                           << 0x13U) 
                                                          | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                             >> 0xdU)) 
                                                         << 
                                                         (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                          >> 0x1dU))) 
                                                     >> 
                                                     (7U 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                         >> 8U)))
                                                     : 
                                                    ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                      << 0x13U) 
                                                     | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                        >> 0xdU))) 
                                                   << 8U)) 
                                               | ((0xf0U 
                                                   & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U]) 
                                                  | ((0xcU 
                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                         >> 0xaU)) 
                                                     | ((2U 
                                                         & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                            >> 0xaU)) 
                                                        | (1U 
                                                           & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                              >> 3U))))))));
                        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                            = (0x100U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
                        vlSelf->__Vfunc_vaddr__17__Vfuncout 
                            = ((QData)((IData)(vlSelf->__Vfunc_vaddr__17__vid)) 
                               << 4U);
                        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U] 
                                               >> 8U)))) {
                            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U] 
                                = (0x100U | (0xe000ffU 
                                             & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U]));
                        }
                        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                            = (((QData)((IData)((7U 
                                                 & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                    >> 0x14U)))) 
                                << 0x2dU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((IData)(vlSelf->__Vfunc_vaddr__17__Vfuncout) 
                                                                  + (IData)(
                                                                            ((0x3fU 
                                                                              >= 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                                >> 8U))))
                                                                              ? 
                                                                             ((QData)((IData)(
                                                                                (0x1fffU 
                                                                                & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U]))) 
                                                                              >> 
                                                                              ((IData)(3U) 
                                                                               - 
                                                                               (7U 
                                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                                >> 8U))))
                                                                              : 0ULL)))))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 (0x1fffU 
                                                                  & ((0x4000U 
                                                                      & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U])
                                                                      ? 
                                                                     ((0x1fffU 
                                                                       & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                            << 0x13U) 
                                                                           | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                              >> 0xdU)) 
                                                                          << 
                                                                          (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                           >> 0x1dU))) 
                                                                      >> 
                                                                      (7U 
                                                                       & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                          >> 8U)))
                                                                      : 
                                                                     ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                       << 0x13U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                         >> 0xdU)))))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xe0000U 
                                                                    & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                       << 9U)) 
                                                                   | (0x1fe00U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                         >> 0xfU))))))));
                        if ((0U == (0x1fffU & (IData)(
                                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                                                       >> 0x14U))))) {
                            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                                = (0x100000ULL | (0xfffe000fffffULL 
                                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d));
                        }
                    }
                }
            }
        }
    } else if ((0x100U & (IData)(vlSelf->lane_e__DOT__operand_request_valid))) {
        vlSelf->__Vfunc_vaddr__16__vid = (0x1fU & (
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                   >> 0xfU));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_d = 1U;
        vlSelf->lane_e__DOT__operand_request_ready 
            = (0x100U | (IData)(vlSelf->lane_e__DOT__operand_request_ready));
        vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U] 
            = (0xffffffU & ((0xe00000U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                          << 0xdU)) 
                            | ((0x1fff00U & (((0x4000U 
                                               & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U])
                                               ? ((0x1fffU 
                                                   & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                        << 0x13U) 
                                                       | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                          >> 0xdU)) 
                                                      << 
                                                      (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                       >> 0x1dU))) 
                                                  >> 
                                                  (7U 
                                                   & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                      >> 8U)))
                                               : ((
                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                   << 0x13U) 
                                                  | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                     >> 0xdU))) 
                                             << 8U)) 
                               | ((0xf0U & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U]) 
                                  | ((0xcU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                              >> 0xaU)) 
                                     | ((2U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                               >> 0xaU)) 
                                        | (1U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                 >> 3U))))))));
        vlSelf->__Vfunc_vaddr__16__Vfuncout = ((QData)((IData)(vlSelf->__Vfunc_vaddr__16__vid)) 
                                               << 4U);
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U] 
                               >> 8U)))) {
            vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U] 
                = (0x100U | (0xe000ffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U]));
        }
        vlSelf->lane_e__DOT__operand_queue_cmd_valid 
            = (0x100U | (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
            = (((QData)((IData)((7U & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                       >> 0x14U)))) 
                << 0x2dU) | (((QData)((IData)((0xfffU 
                                               & ((IData)(vlSelf->__Vfunc_vaddr__16__Vfuncout) 
                                                  + (IData)(
                                                            ((0x3fU 
                                                              >= 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                   >> 8U))))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0x1fffU 
                                                                               & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U]))) 
                                                              >> 
                                                              ((IData)(3U) 
                                                               - 
                                                               (7U 
                                                                & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                   >> 8U))))
                                                              : 0ULL)))))) 
                              << 0x21U) | (((QData)((IData)(
                                                            (0x1fffU 
                                                             & ((0x4000U 
                                                                 & vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U])
                                                                 ? 
                                                                ((0x1fffU 
                                                                  & (((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                       << 0x13U) 
                                                                      | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                         >> 0xdU)) 
                                                                     << 
                                                                     (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                      >> 0x1dU))) 
                                                                 >> 
                                                                 (7U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                     >> 8U)))
                                                                 : 
                                                                ((vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                  << 0x13U) 
                                                                 | (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                                                                    >> 0xdU)))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xe0000U 
                                                               & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                  << 9U)) 
                                                              | ((0x1fe00U 
                                                                  & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU] 
                                                                     >> 0xfU)) 
                                                                 | ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U] 
                                                                         >> 0xcU))) 
                                                                    << 8U))))))));
        if ((0U == (0x1fffU & (IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                                       >> 0x14U))))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                = (0x100000ULL | (0xfffe000fffffULL 
                                  & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d));
        }
        if ((0U == (0x1fffU & (vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U] 
                               >> 0xdU)))) {
            vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__state_d = 0U;
            vlSelf->lane_e__DOT__operand_queue_cmd_valid 
                = (0xffU & (IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid));
        }
    }
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
        = ((0xfffffffe01ffULL & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d) 
           | ((QData)((IData)((0xffU & ((IData)((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                                                 >> 9U)) 
                                        & (IData)((vlSelf->global_hazard_table_i 
                                                   >> 
                                                   (0x38U 
                                                    & ((IData)(
                                                               (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__8__KET____DOT__requester_d 
                                                                >> 0x2dU)) 
                                                       << 3U)))))))) 
              << 9U));
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & (IData)(vlSelf->lane_e__DOT__operand_request_valid));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x1feU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | (IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0));
    if ((1U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x1feU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 1U));
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (1U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x1fdU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 1U));
    if ((2U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x1fdU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 2U));
    if ((2U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (2U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x1fbU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 2U));
    if ((4U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x1fbU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 3U));
    if ((4U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (4U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x1f7U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 3U));
    if ((8U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x1f7U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 4U));
    if ((8U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (8U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x1efU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 4U));
    if ((0x10U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x1efU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 5U));
    if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x10U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x1dfU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 5U));
    if ((0x20U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x1dfU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 6U));
    if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x20U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x1bfU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 6U));
    if ((0x40U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x1bfU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 7U));
    if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x40U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0x17fU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 7U));
    if ((0x80U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x17fU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__operand_request_valid) 
                 >> 8U));
    if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x80U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
        = ((0xffU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d)) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_hda0c2a75__0) 
              << 8U));
    if ((0x100U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0xffU & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0U]))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0U] 
        = (IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0);
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U] 
        = ((0x80000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U]) 
           | (IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                      >> 0x20U)));
    if ((1U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0U] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U] 
            = (0x80000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U]);
    }
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0U]))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0U] 
            = (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U] 
            = ((0x80000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U]) 
               | (IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                          >> 0x20U)));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U])) 
                                     << 0x21U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[2U])) 
                                                   << 1U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[1U])) 
                                                     >> 0x1fU))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U] 
        = ((0x7fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x1fU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[2U] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 1U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x1fU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U] 
        = ((0xc0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U]) 
           | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                       >> 0x20U)) >> 1U));
    if ((2U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U] 
            = (0x7fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[2U] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U] 
            = (0xc0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U]);
    }
    if ((2U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[3U])) 
                                         << 0x21U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[2U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[1U])) 
                                              >> 0x1fU))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U] 
            = ((0x7fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[1U]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x1fU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[2U] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 1U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x1fU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U] 
            = ((0xc0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U]) 
               | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                           >> 0x20U)) >> 1U));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])) 
                                     << 0x22U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[4U])) 
                                                   << 2U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[3U])) 
                                                     >> 0x1eU))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U] 
        = ((0x3fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x1eU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[4U] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 2U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x1eU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U] 
        = ((0xe0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U]) 
           | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                       >> 0x20U)) >> 2U));
    if ((4U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U] 
            = (0x3fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[4U] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U] 
            = (0xe0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U]);
    }
    if ((4U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[5U])) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[4U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[3U])) 
                                              >> 0x1eU))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U] 
            = ((0x3fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[3U]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x1eU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[4U] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 2U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x1eU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U] 
            = ((0xe0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U]) 
               | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                           >> 0x20U)) >> 2U));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U])) 
                                     << 0x23U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[6U])) 
                                                   << 3U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[5U])) 
                                                     >> 0x1dU))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U] 
        = ((0x1fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x1dU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[6U] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 3U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x1dU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U] 
        = ((0xf0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U]) 
           | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                       >> 0x20U)) >> 3U));
    if ((8U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U] 
            = (0x1fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[6U] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U] 
            = (0xf0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U]);
    }
    if ((8U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[7U])) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[6U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[5U])) 
                                              >> 0x1dU))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U] 
            = ((0x1fffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[5U]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x1dU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[6U] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 3U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x1dU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U] 
            = ((0xf0000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U]) 
               | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                           >> 0x20U)) >> 3U));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[8U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[7U])) 
                                                     >> 0x1cU))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U] 
        = ((0xfffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x1cU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[8U] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 4U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x1cU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U] 
        = ((0xf8000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U]) 
           | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                       >> 0x20U)) >> 4U));
    if ((0x10U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U] 
            = (0xfffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[8U] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U] 
            = (0xf8000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U]);
    }
    if ((0x10U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[9U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[8U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[7U])) 
                                              >> 0x1cU))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U] 
            = ((0xfffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[7U]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x1cU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[8U] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 4U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x1cU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U] 
            = ((0xf8000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U]) 
               | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                           >> 0x20U)) >> 4U));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU])) 
                                     << 0x25U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xaU])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[9U])) 
                                                     >> 0x1bU))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U] 
        = ((0x7ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x1bU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xaU] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 5U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x1bU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU] 
        = ((0xfc000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU]) 
           | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                       >> 0x20U)) >> 5U));
    if ((0x20U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U] 
            = (0x7ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xaU] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU] 
            = (0xfc000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU]);
    }
    if ((0x20U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xbU])) 
                                         << 0x25U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xaU])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[9U])) 
                                              >> 0x1bU))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U] 
            = ((0x7ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[9U]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x1bU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xaU] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 5U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x1bU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU] 
            = ((0xfc000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU]) 
               | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                           >> 0x20U)) >> 5U));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])) 
                                     << 0x26U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xcU])) 
                                                   << 6U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xbU])) 
                                                     >> 0x1aU))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU] 
        = ((0x3ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x1aU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xcU] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 6U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x1aU));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU] 
        = ((0xfe000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU]) 
           | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                       >> 0x20U)) >> 6U));
    if ((0x40U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU] 
            = (0x3ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xcU] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU] 
            = (0xfe000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU]);
    }
    if ((0x40U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xdU])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xcU])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xbU])) 
                                              >> 0x1aU))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU] 
            = ((0x3ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xbU]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x1aU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xcU] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 6U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x1aU));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU] 
            = ((0xfe000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU]) 
               | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                           >> 0x20U)) >> 6U));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU])) 
                                     << 0x27U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xeU])) 
                                                   << 7U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xdU])) 
                                                     >> 0x19U))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU] 
        = ((0x1ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x19U));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xeU] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 7U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x19U));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU] 
        = ((0xff000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU]) 
           | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                       >> 0x20U)) >> 7U));
    if ((0x80U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xeU] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU] 
            = (0xff000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU]);
    }
    if ((0x80U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xfU])) 
                                         << 0x27U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xeU])) 
                                            << 7U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xdU])) 
                                              >> 0x19U))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU] 
            = ((0x1ffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xdU]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x19U));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xeU] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 7U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x19U));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU] 
            = ((0xff000000U & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU]) 
               | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                           >> 0x20U)) >> 7U));
    }
    lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x11U])) 
                                     << 0x28U) | (((QData)((IData)(
                                                                   vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0x10U])) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->lane_e__DOT____Vcellout__i_lane_sequencer__operand_request_o[0xfU])) 
                                                     >> 0x18U))));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU] 
        = ((0xffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU]) 
           | ((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
              << 0x18U));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0x10U] 
        = (((IData)(lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0) 
            >> 8U) | ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                               >> 0x20U)) << 0x18U));
    vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0x11U] 
        = (0x7fffffU & ((IData)((lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__0 
                                 >> 0x20U)) >> 8U));
    if ((0x100U & (IData)(vlSelf->lane_e__DOT__operand_request_ready))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU] 
            = (0xffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU]);
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0x10U] = 0U;
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0x11U] = 0U;
    }
    if ((0x100U & (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_push))) {
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d 
            = (0x100U | (IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_valid_d));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
            = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0x11U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0x10U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_i[0xfU])) 
                                              >> 0x18U))));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU] 
            = ((0xffffffU & vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0xfU]) 
               | ((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                  << 0x18U));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0x10U] 
            = (((IData)(vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2) 
                >> 8U) | ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                   >> 0x20U)) << 0x18U));
        vlSelf->lane_e__DOT__i_lane_sequencer__DOT__operand_request_d[0x11U] 
            = (0x7fffffU & ((IData)((vlSelf->lane_e__DOT__i_lane_sequencer__DOT____Vlvbound_h6dc4b1c1__2 
                                     >> 0x20U)) >> 8U));
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__gate_clock = 1U;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if (((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
         & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
           & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__cmd_pop)) 
          & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 1U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 1U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__cmd_pop)) 
          & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 2U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 2U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__cmd_pop)) 
          & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 3U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 3U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__cmd_pop)) 
          & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 4U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 4U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__cmd_pop)) 
          & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 7U) & (5U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = ((4U == (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__write_pointer_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__write_pointer_q))));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (0xfU & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 7U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__cmd_pop)) 
          & (5U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 8U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 8U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__cmd_pop)) 
          & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 5U) & (1U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 5U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop)) 
          & (1U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_q;
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 6U) & (1U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__gate_clock = 0U;
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_n 
            = ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_q)));
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
            >> 6U) & (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop)) 
          & (1U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__mem_n[0U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__mem_q[0U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__mem_n[1U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__mem_q[1U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__mem_n[2U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__mem_q[2U];
    if (((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
         & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0 
            = (0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U]);
        if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(96,24,(0x7fU & ((IData)(0x18U) 
                                            * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__write_pointer_q))), vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT__mem_n, vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_a__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0);
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__mem_n[0U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__mem_q[0U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__mem_n[1U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__mem_q[1U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__mem_n[2U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__mem_q[2U];
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 1U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0 
            = (0xffffffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                             << 8U) | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[0U] 
                                       >> 0x18U)));
        if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(96,24,(0x7fU & ((IData)(0x18U) 
                                            * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__write_pointer_q))), vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT__mem_n, vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_alu_b__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0);
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__mem_n[0U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__mem_q[0U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__mem_n[1U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__mem_q[1U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__mem_n[2U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__mem_q[2U];
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 2U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0 
            = (0xffffffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
                             << 0x10U) | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[1U] 
                                          >> 0x10U)));
        if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(96,24,(0x7fU & ((IData)(0x18U) 
                                            * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__write_pointer_q))), vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT__mem_n, vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_a__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0);
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__mem_n[0U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__mem_q[0U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__mem_n[1U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__mem_q[1U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__mem_n[2U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__mem_q[2U];
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 3U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0 
            = (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[2U] 
               >> 8U);
        if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(96,24,(0x7fU & ((IData)(0x18U) 
                                            * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__write_pointer_q))), vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT__mem_n, vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_b__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0);
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__mem_n[0U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__mem_q[0U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__mem_n[1U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__mem_q[1U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__mem_n[2U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__mem_q[2U];
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 4U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0 
            = (0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U]);
        if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(96,24,(0x7fU & ((IData)(0x18U) 
                                            * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__write_pointer_q))), vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT__mem_n, vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mfpu_c__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0);
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_n[0U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_q[0U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_n[1U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_q[1U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_n[2U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_q[2U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_n[3U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_q[3U];
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 7U) & (5U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT____Vlvbound_h0259036c__0 
            = (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
               >> 8U);
        if ((0x77U >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(120,24,(0x7fU & ((IData)(0x18U) 
                                             * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__write_pointer_q))), vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT__mem_n, vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_st_mask_a__DOT__i_cmd_buffer__DOT____Vlvbound_h0259036c__0);
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__mem_n[0U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__mem_q[0U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__mem_n[1U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__mem_q[1U];
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__mem_n[2U] 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__mem_q[2U];
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 8U) & (4U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0 
            = (0xffffffU & vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[6U]);
        if ((0x5fU >= (0x7fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WI(96,24,(0x7fU & ((IData)(0x18U) 
                                            * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__write_pointer_q))), vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT__mem_n, vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_slide_addrgen_a__DOT__i_cmd_buffer__DOT____Vlvbound_h63afe483__0);
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__mem_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__mem_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 5U) & (1U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT____Vlvbound_hceb00f56__0 
            = (0xffffffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                             << 8U) | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[3U] 
                                       >> 0x18U)));
        if ((0x17U >= (0x1fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__mem_n 
                = (((~ ((IData)(0xffffffU) << (0x1fU 
                                               & ((IData)(0x18U) 
                                                  * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_q))))) 
                    & vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__mem_n) 
                   | (0xffffffU & (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT____Vlvbound_hceb00f56__0 
                                   << (0x1fU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__write_pointer_q))))));
        }
    }
    vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__mem_n 
        = vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__mem_q;
    if ((((IData)(vlSelf->lane_e__DOT__operand_queue_cmd_valid) 
          >> 6U) & (1U != (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT____Vlvbound_hceb00f56__0 
            = (0xffffffU & ((vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[5U] 
                             << 0x10U) | (vlSelf->lane_e__DOT____Vcellout__i_operand_requester__operand_queue_cmd_o[4U] 
                                          >> 0x10U)));
        if ((0x17U >= (0x1fU & ((IData)(0x18U) * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_q))))) {
            vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__mem_n 
                = (((~ ((IData)(0xffffffU) << (0x1fU 
                                               & ((IData)(0x18U) 
                                                  * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_q))))) 
                    & vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__mem_n) 
                   | (0xffffffU & (vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT____Vlvbound_hceb00f56__0 
                                   << (0x1fU & ((IData)(0x18U) 
                                                * (IData)(vlSelf->lane_e__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__write_pointer_q))))));
        }
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__246(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__246\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__0__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__0__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__0__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__0__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__0__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__0__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__247(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__247\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__1__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__1__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__1__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__1__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__1__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__1__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__248(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__248\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__2__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__2__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__2__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__2__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__2__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__2__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__249(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__249\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__3__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__3__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__3__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__3__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__3__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__3__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__250(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__250\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__4__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__4__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__4__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__4__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__4__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__4__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__251(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__251\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__5__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__5__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__5__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__5__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__5__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__5__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__252(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__252\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__6__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__6__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__6__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__6__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__6__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__6__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__253(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__253\n"); );
    // Body
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__7__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__7__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__7__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    } else {
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__7__KET____DOT__i_vrf_arbiter__data_o[0U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__7__KET____DOT__i_vrf_arbiter__data_o[1U] 
            = vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellout__gen_vrf_arbiters__BRA__7__KET____DOT__i_vrf_arbiter__data_o[2U] 
            = (0x1ffffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__254(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__254\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__255(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__255\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__256(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__256\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__257(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__257\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__258(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__258\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__259(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__259\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__260(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__260\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__261(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__261\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__262(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__262\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__263(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__263\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__264(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__264\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__265(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__265\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__266(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__266\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__267(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__267\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__268(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__268\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__payload_hp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__269(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__269\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__payload_lp_gnt) 
                  & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__270(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__270\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__271(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__271\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__272(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__272\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))) 
            << 4U) | ((((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                        & ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                               >> 4U)) & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                          | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)))) 
                       << 2U) | (((((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                       >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q)))) 
                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)) 
                                  << 1U) | ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q))
                                             ? (0U 
                                                != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits))
                                             : ((0U 
                                                 != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits)) 
                                                | ((~ 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                                      | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__273(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__273\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))) 
            << 4U) | ((((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                        & ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                               >> 4U)) & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                          | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)))) 
                       << 2U) | (((((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                       >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q)))) 
                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)) 
                                  << 1U) | ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q))
                                             ? (0U 
                                                != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits))
                                             : ((0U 
                                                 != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits)) 
                                                | ((~ 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                                      | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__274(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__274\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))) 
            << 4U) | ((((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                        & ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                               >> 4U)) & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                          | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)))) 
                       << 2U) | (((((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                       >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q)))) 
                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)) 
                                  << 1U) | ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q))
                                             ? (0U 
                                                != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits))
                                             : ((0U 
                                                 != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits)) 
                                                | ((~ 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                                      | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__275(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__275\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))) 
            << 4U) | ((((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                        & ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                               >> 4U)) & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                          | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)))) 
                       << 2U) | (((((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                       >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q)))) 
                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)) 
                                  << 1U) | ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q))
                                             ? (0U 
                                                != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits))
                                             : ((0U 
                                                 != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits)) 
                                                | ((~ 
                                                    ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                                      | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__276(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__276\n"); );
    // Init
    IData/*19:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status = 0;
    CData/*4:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status = 0;
    // Body
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h41df089b__0)
              ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                  ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                      ? 0x10U : (0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                  : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                      ? (0x10U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                  << 2U)) : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
              : 0U) << 0xfU) | ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_ha7518916__0)
                                   ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                                       ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                           ? 0x10U : 
                                          (0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                       : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                           ? (0x10U 
                                              & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                 << 2U))
                                           : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
                                   : 0U) << 0xaU) | 
                                ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h7d0467ad__0)
                                    ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                                        ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                            ? 0x10U
                                            : (0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                        : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                            ? (0x10U 
                                               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                  << 2U))
                                            : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
                                    : 0U) << 5U) | 
                                 ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
                                   ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                                       ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                                           ? 0x10U : 
                                          (0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                                       : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                                           ? (0x10U 
                                              & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                 << 2U))
                                           : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
                                   : 0U))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                    & (- (IData)((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 5U) & (- (IData)((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                   >> 1U)))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xaU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 2U)))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xfU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 3U)))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o 
        = lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__277(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__277\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h102d3424__0 
        = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
            << 1U) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h7d0467ad__0)
            ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                    ? ((0x13fU >= (0x1c0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                             << 6U)))
                        ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                            (((IData)(0x3fU) 
                                              + (0x1c0U 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                        (0xeU 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                            << 1U))])))
                        : 0ULL) : ((0x13fU >= (0x1c0U 
                                               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                  << 6U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                        (((IData)(0x3fU) 
                                                          + 
                                                          (0x1c0U 
                                                           & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                              << 6U))) 
                                                         >> 5U)])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                    (0xeU 
                                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                                        << 1U))])))
                                    : 0ULL))) : (- (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__278(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__278\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__local_result 
        = (0xffffU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h41df089b__0)
                       ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                           ? (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result)
                           : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                               ? ((0x4fU >= (0x70U 
                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U)))
                                   ? (((0U == (0x10U 
                                               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                  << 4U)))
                                        ? 0U : (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                (((IData)(0xfU) 
                                                  + 
                                                  (0x70U 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                      << 4U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                     << 4U))))) 
                                      | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                         (3U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                >> 1U))] 
                                         >> (0x10U 
                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U))))
                                   : 0U) : ((0x4fU 
                                             >= (0x70U 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                    << 4U)))
                                             ? (((0U 
                                                  == 
                                                  (0x10U 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                      << 4U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x70U 
                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x10U 
                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                       << 4U))))) 
                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                   (3U 
                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                       >> 1U))] 
                                                   >> 
                                                   (0x10U 
                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                       << 4U))))
                                             : 0U)))
                       : (- (IData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o)))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__279(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__279\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__local_result 
        = (0xffffU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_ha7518916__0)
                       ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                           ? (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result)
                           : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                               ? ((0x4fU >= (0x70U 
                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U)))
                                   ? (((0U == (0x10U 
                                               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                  << 4U)))
                                        ? 0U : (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                (((IData)(0xfU) 
                                                  + 
                                                  (0x70U 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                      << 4U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                     << 4U))))) 
                                      | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                         (3U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                >> 1U))] 
                                         >> (0x10U 
                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U))))
                                   : 0U) : ((0x4fU 
                                             >= (0x70U 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                    << 4U)))
                                             ? (((0U 
                                                  == 
                                                  (0x10U 
                                                   & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                      << 4U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                  (((IData)(0xfU) 
                                                    + 
                                                    (0x70U 
                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                        << 4U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x10U 
                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                       << 4U))))) 
                                                | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                   (3U 
                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                       >> 1U))] 
                                                   >> 
                                                   (0x10U 
                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                       << 4U))))
                                             : 0U)))
                       : (- (IData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o)))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__280(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__280\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__281(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__281\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__282(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__282\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__283(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__283\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__284(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__284\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ua__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_a_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_a_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__285(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__285\n"); );
    // Body
    if (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_D 
                                      << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])));
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_D) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + (0U != (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__LOD_Ub__DOT__gen_lzc__DOT__index_nodes[0U]))));
    } else {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DN 
            = (0x1fffffffffffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Mant_b_norm_DP);
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DN 
            = (0xfffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__Exp_b_norm_DP));
    }
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__286(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__286\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status 
        = (((VL_LTES_III(32, 0x7ffU, VL_EXTENDS_II(32,13, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent))) 
             | (0x7ffU == (0x7ffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                             >> 0x34U))))) 
            << 2U) | (((IData)(((0ULL == (0x7ff0000000000000ULL 
                                          & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs)) 
                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))) 
                       << 1U) | (((0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                                  | VL_LTES_III(32, 0x7ffU, 
                                                VL_EXTENDS_II(32,13, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))) 
                                 | (0x7ffU == (0x7ffU 
                                               & (IData)(
                                                         (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                                          >> 0x34U)))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__287(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__287\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status 
        = (((VL_LTES_III(32, 0xffU, VL_EXTENDS_II(32,10, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent))) 
             | (0xffU == (0xffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                   >> 0x17U)))) << 2U) 
           | (((IData)(((0U == (0x7f800000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs)) 
                        & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))) 
               << 1U) | (((0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                          | VL_LTES_III(32, 0xffU, 
                                        VL_EXTENDS_II(32,10, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))) 
                         | (0xffU == (0xffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                               >> 0x17U))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__288(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__288\n"); );
    // Init
    SData/*9:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status = 0;
    CData/*4:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status = 0;
    // Body
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT____VdfgTmp_h154ed901__0)
              ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_status_q))
              : 0U) << 5U) | ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))
                               ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_status_q))
                               : 0U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status) 
                    & (- (IData)((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_masks))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status) 
                    | (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status) 
                        >> 5U) & (- (IData)((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_masks) 
                                                   >> 1U)))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__status_o 
        = lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__289(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__289\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status 
        = (((VL_LTES_III(32, 0xffU, VL_EXTENDS_II(32,10, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent))) 
             | (0xffU == (0xffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                   >> 0x17U)))) << 2U) 
           | (((IData)(((0U == (0x7f800000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs)) 
                        & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))) 
               << 1U) | (((0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                          | VL_LTES_III(32, 0xffU, 
                                        VL_EXTENDS_II(32,10, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))) 
                         | (0xffU == (0xffU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs 
                                               >> 0x17U))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__290(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__290\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status 
        = (((VL_LTES_III(32, 0x1fU, VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent))) 
             | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                   >> 0xaU)))) << 2U) 
           | (((IData)(((0U == (0x7c00U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))) 
                        & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))) 
               << 1U) | (((0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                          | VL_LTES_III(32, 0x1fU, 
                                        VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))) 
                         | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                               >> 0xaU))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__291(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__291\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status 
        = (((VL_LTES_III(32, 0x1fU, VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent))) 
             | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                   >> 0xaU)))) << 2U) 
           | (((IData)(((0U == (0x7c00U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))) 
                        & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))) 
               << 1U) | (((0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                          | VL_LTES_III(32, 0x1fU, 
                                        VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))) 
                         | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                               >> 0xaU))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__292(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__292\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status 
        = (((VL_LTES_III(32, 0x1fU, VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent))) 
             | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                   >> 0xaU)))) << 2U) 
           | (((IData)(((0U == (0x7c00U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))) 
                        & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))) 
               << 1U) | (((0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                          | VL_LTES_III(32, 0x1fU, 
                                        VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))) 
                         | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                               >> 0xaU))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__293(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__293\n"); );
    // Init
    IData/*19:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status = 0;
    CData/*4:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status = 0;
    // Body
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT____VdfgTmp_h99ae613c__0)
              ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_status_q))
              : 0U) << 0xfU) | ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT____VdfgTmp_h175f9d57__0)
                                   ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_status_q))
                                   : 0U) << 0xaU) | 
                                ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT____VdfgTmp_h154ed901__0)
                                    ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_status_q))
                                    : 0U) << 5U) | 
                                 ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))
                                   ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_status_q))
                                   : 0U))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status 
                    & (- (IData)((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_masks))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status 
                        >> 5U) & (- (IData)((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_masks) 
                                                   >> 1U)))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status 
                        >> 0xaU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_masks) 
                                                >> 2U)))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_status 
                        >> 0xfU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__lane_masks) 
                                                >> 3U)))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__status_o 
        = lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__output_processing__DOT__temp_status;
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__294(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__294\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status 
        = (((VL_LTES_III(32, 0x1fU, VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent))) 
             | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                   >> 0xaU)))) << 2U) 
           | (((IData)(((0U == (0x7c00U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs))) 
                        & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__regular_status))) 
               << 1U) | (((0U != (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__round_sticky_bits)) 
                          | VL_LTES_III(32, 0x1fU, 
                                        VL_EXTENDS_II(32,7, (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__final_exponent)))) 
                         | (0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__rounded_abs) 
                                               >> 0xaU))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__295(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__295\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_rdy));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__296(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__296\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_rdy));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__297(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__297\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_rdy));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__298(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__298\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_rdy));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__299(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__299\n"); );
    // Init
    VlWide<18>/*575:0*/ __Vtemp_h17024a4a__0;
    // Body
    __Vtemp_h17024a4a__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                     << 4U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                               >> 0x1cU))
                                 : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 0x12U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                  >> 0xeU)));
    __Vtemp_h17024a4a__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                       << 8U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                 >> 0x18U))
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                       << 0x16U) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                       >> 0xaU))) << 0xeU) 
                                | (0x3fffU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                   << 4U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                     >> 0x1cU))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 0x12U) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0xeU)))));
    __Vtemp_h17024a4a__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                       << 8U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                 >> 0x18U))
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                       << 0x16U) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                       >> 0xaU))) >> 0x12U) 
                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                     ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                         << 8U) | (
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0x18U))
                                     : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                         << 0x16U) 
                                        | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                           >> 0xaU))) 
                                   << 0xeU));
    __Vtemp_h17024a4a__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 0xcU) | (
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                   >> 0x14U))
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1aU) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 6U))) << 0x1cU) 
                                | ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                      ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                          << 8U) | 
                                         (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                          >> 0x18U))
                                      : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                          << 0x16U) 
                                         | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                            >> 0xaU))) 
                                    >> 0x12U) | (0xfffc000U 
                                                 & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                      ? 
                                                     ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                       << 8U) 
                                                      | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                         >> 0x18U))
                                                      : 
                                                     ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                       << 0x16U) 
                                                      | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                         >> 0xaU))) 
                                                    << 0xeU))));
    __Vtemp_h17024a4a__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 0xcU) | (
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                   >> 0x14U))
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1aU) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 6U))) >> 4U) 
                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                     ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                         << 0xcU) | 
                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                         >> 0x14U))
                                     : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                         << 0x1aU) 
                                        | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                           >> 6U))) 
                                   << 0x1cU));
    __Vtemp_h17024a4a__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                       << 0xcU) | (
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   >> 0x14U))
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 0x1aU) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       >> 6U))) >> 4U) 
                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                     ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                         << 0xcU) | 
                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                         >> 0x14U))
                                     : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                         << 0x1aU) 
                                        | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                           >> 6U))) 
                                   << 0x1cU));
    __Vtemp_h17024a4a__0[7U] = ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                                   ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U]
                                   : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                       << 0x12U) | 
                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
                                       >> 0xeU))) << 0xaU) 
                                | (0x3ffU & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   << 0xcU) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                     >> 0x14U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 0x1aU) 
                                                  | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 6U))) 
                                             >> 4U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 4U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                          >> 0x1cU)) : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0x12U) 
                                        | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xeU)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h17024a4a__0[1U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h17024a4a__0[2U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h17024a4a__0[3U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h17024a4a__0[4U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h17024a4a__0[5U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h17024a4a__0[6U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h17024a4a__0[7U];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
              ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U]
              : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                  << 0x12U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
                               >> 0xeU))) >> 0x16U) 
           | (((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U]
                : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                    << 0x12U) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                 >> 0xeU))) << 0xaU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((0xff000000U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
                           << 0xeU)) | ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                                           ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U]
                                           : ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                               << 0x12U) 
                                              | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                                 >> 0xeU))) 
                                         >> 0x16U) 
                                        | (0xfffc00U 
                                           & (((1U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                                                ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U]
                                                : (
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                                    << 0x12U) 
                                                   | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                                      >> 0xeU))) 
                                              << 0xaU))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (((0xffc000U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                          << 0xeU)) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
                                       >> 0x12U)) | 
           (0xff000000U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                           << 0xeU)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (((0xffc000U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                          << 0xeU)) | (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                                       >> 0x12U)) | 
           (0xff000000U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                           << 0xeU)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = (((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xaU] 
             << 0xeU) | (0x3fc0U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                                    >> 0x12U))) | (0x3fU 
                                                   & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                                                      >> 0x12U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((0x3fU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xaU] 
                     >> 0x12U)) | ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xbU] 
                                    << 0xeU) | (0x3fc0U 
                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xaU] 
                                                   >> 0x12U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((0x3fU & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xbU] 
                     >> 0x12U)) | (0xfffc0U & ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xcU] 
                                                << 0xeU) 
                                               | (0x3fc0U 
                                                  & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xbU] 
                                                     >> 0x12U)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] = 0U;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] = 0U;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] = 0U;
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__300(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__300\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready 
        = ((4U & ((0xfffffffcU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                                  << 1U)) | ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                                                 >> 1U)) 
                                             << 2U))) 
           | ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                      | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))) 
                     << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__out_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                 >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_output_pipeline__BRA__1__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                 >> 1U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_en 
        = ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_done) 
               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  >> 2U))) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__301(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__301\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready 
        = ((4U & ((0xfffffffcU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                                  << 1U)) | ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                                                 >> 1U)) 
                                             << 2U))) 
           | ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                      | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))) 
                     << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__out_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                 >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_output_pipeline__BRA__1__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                 >> 1U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_en 
        = ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_done) 
               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  >> 2U))) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__302(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__302\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready 
        = ((4U & ((0xfffffffcU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                                  << 1U)) | ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                                                 >> 1U)) 
                                             << 2U))) 
           | ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                      | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))) 
                     << 1U)) | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__out_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                 >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__gen_output_pipeline__BRA__1__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
                 >> 1U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__hold_en 
        = ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_done) 
               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                  >> 2U))) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_done));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__303(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__303\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (7U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT____Vcellinp__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__out_ready_i) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes
                      : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__304(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__304\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_hd7338254__0;
    VlWide<8>/*255:0*/ __Vtemp_h1141bb1c__0;
    VlWide<9>/*287:0*/ __Vtemp_he2c5c7a8__0;
    VlWide<10>/*319:0*/ __Vtemp_h4cf4a101__0;
    VlWide<10>/*319:0*/ __Vtemp_h00bca1a6__0;
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[2U] 
        = (IData)((((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__local_result)) 
                    << 0x30U) | (((QData)((IData)((
                                                   ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__local_result) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[3U] 
        = (IData)(((((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__local_result)) 
                     << 0x30U) | (((QData)((IData)(
                                                   (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__local_result) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[4U] 
        = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[5U] 
        = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[6U] 
        = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[7U] 
        = (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
                   >> 0x20U));
    __Vtemp_hd7338254__0[6U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x11U) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                               << 0x10U) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0xfU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 0xaU) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h102d3424__0) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o)))))))))))))))));
    __Vtemp_h1141bb1c__0[7U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x10U) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o)))))))))))))))));
    __Vtemp_he2c5c7a8__0[8U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x11U) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h102d3424__0) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o)))))))))))))))));
    __Vtemp_h4cf4a101__0[9U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x10U) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                               << 0xfU) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o)))))))))))))))));
    __Vtemp_h00bca1a6__0[0U] = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    __Vtemp_h00bca1a6__0[1U] = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result);
    __Vtemp_h00bca1a6__0[2U] = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    __Vtemp_h00bca1a6__0[3U] = (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
                                        >> 0x20U));
    __Vtemp_h00bca1a6__0[4U] = (IData)((((QData)((IData)(
                                                         (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__local_result) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__local_result)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))));
    __Vtemp_h00bca1a6__0[5U] = (IData)(((((QData)((IData)(
                                                          (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__local_result) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__local_result)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))) 
                                        >> 0x20U));
    __Vtemp_h00bca1a6__0[6U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x1fU) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x12U) 
                                                                                | __Vtemp_hd7338254__0[6U]))))))))))))));
    __Vtemp_h00bca1a6__0[7U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x1fU) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x11U) 
                                                                                | __Vtemp_h1141bb1c__0[7U])))))))))))))));
    __Vtemp_h00bca1a6__0[8U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x1fU) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x12U) 
                                                                                | __Vtemp_he2c5c7a8__0[8U]))))))))))))));
    __Vtemp_h00bca1a6__0[9U] = (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                 << 0x1fU) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                               << 0x1eU) 
                                              | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o) 
                                                                                << 0x11U) 
                                                                                | __Vtemp_h4cf4a101__0[9U])))))))))))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
        = ((0x10U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_aux_q))
            ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                                (((IData)(0x3fU) + 
                                  (0xc0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_aux_q) 
                                            << 6U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__ifmt_slice_result[
                                 (6U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_aux_q) 
                                        << 1U))])))
            : ((0x13fU >= (0x1c0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_aux_q) 
                                     << 6U))) ? (((QData)((IData)(
                                                                  __Vtemp_h00bca1a6__0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x1c0U 
                                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_aux_q) 
                                                                        << 6U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp_h00bca1a6__0[
                                                                   (0xeU 
                                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_aux_q) 
                                                                       << 1U))])))
                : 0ULL));
}
