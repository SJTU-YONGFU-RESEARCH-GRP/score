// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlane_e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vlane_e__Syms.h"
#include "Vlane_e___024root.h"

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__8(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__8\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__stage_ready 
        = ((2U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_simd_out_ready) 
                  >> 2U)) | (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__stage_ready) 
                                    >> 1U) | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__valid_q)))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__9(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__9\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__stage_ready 
        = ((2U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_simd_out_ready) 
                  >> 1U)) | (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__stage_ready) 
                                    >> 1U) | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__valid_q)))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__10(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__10\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__stage_ready 
        = ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_simd_out_ready)) 
           | (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__stage_ready) 
                     >> 1U) | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__valid_q)))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__11(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__11\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_simd_in_ready 
        = ((8U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__stage_ready) 
                  << 3U)) | ((4U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__stage_ready) 
                                    << 2U)) | ((2U 
                                                & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__stage_ready) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_simd_out_ready)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__gate_ff_en 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_simd_in_ready) 
                 >> (3U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                           >> 3U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__gate_ff_clr 
        = ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_simd_in_valid) 
               >> (3U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_issue_q[0U] 
                         >> 3U)))) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__gate_ff_en));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__12(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__12\n"); );
    // Init
    CData/*3:0*/ __Vfunc_get_opgroup__404__op;
    __Vfunc_get_opgroup__404__op = 0;
    // Body
    __Vfunc_get_opgroup__404__op = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_op;
    {
        if ((8U & (IData)(__Vfunc_get_opgroup__404__op))) {
            if ((4U & (IData)(__Vfunc_get_opgroup__404__op))) {
                if ((2U & (IData)(__Vfunc_get_opgroup__404__op))) {
                    if ((1U & (IData)(__Vfunc_get_opgroup__404__op))) {
                        vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 2U;
                        goto __Vlabel1858;
                    } else {
                        vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 3U;
                        goto __Vlabel1858;
                    }
                } else {
                    vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 3U;
                    goto __Vlabel1858;
                }
            } else if ((2U & (IData)(__Vfunc_get_opgroup__404__op))) {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 3U;
                goto __Vlabel1858;
            } else {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 2U;
                goto __Vlabel1858;
            }
        } else if ((4U & (IData)(__Vfunc_get_opgroup__404__op))) {
            if ((2U & (IData)(__Vfunc_get_opgroup__404__op))) {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 2U;
                goto __Vlabel1858;
            } else {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 1U;
                goto __Vlabel1858;
            }
        } else {
            vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 0U;
            goto __Vlabel1858;
        }
        __Vlabel1858: ;
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_in_ready 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__vfpu_in_valid) 
           & (((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__in_valid) 
                 & ((4U >= (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt)) 
                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                       >> (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt)))) 
                << 3U) | ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__in_valid) 
                            & ((4U >= (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt)) 
                               & (((4U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_ready) 
                                          << 1U)) | 
                                   ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_ready)) 
                                    | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_ready) 
                                             >> 1U)))) 
                                  >> (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt)))) 
                           << 2U) | ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__in_valid) 
                                       & ((4U >= (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt)) 
                                          & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__fmt_in_ready) 
                                             >> (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt)))) 
                                      << 1U) | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__in_valid) 
                                                & ((4U 
                                                    >= (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt)) 
                                                   & (((4U 
                                                        & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                                                           << 1U)) 
                                                       | ((2U 
                                                           & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                                                              >> 1U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                                                                >> 1U)))) 
                                                      >> (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__fp_dst_fmt))))))) 
              >> (IData)(vlSelf->__Vfunc_get_opgroup__404__Vfuncout)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__13(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__13\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__14(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__14\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__15(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__15\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__16(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__16\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__17(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__17\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__18(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__18\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__19(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__19\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__20(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__20\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                   >> 2U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__21(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__21\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                   >> 2U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__22(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__22\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__23(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__23\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready 
        = ((4U & ((0xfffffffcU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                                  << 1U)) | ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q) 
                                                 >> 1U)) 
                                             << 2U))) 
           | ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                      | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q))) 
                     << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                      >> 2U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_input_pipeline__BRA__1__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__24(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__24\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__out_pipe_ready 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_valid_q) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 4U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__out_pipe_ready 
        = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 3U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__out_pipe_ready 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_aux_q) 
           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__out_pipe_ready));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vlane_e__ConstPool__TABLE_hb5f425c0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlane_e__ConstPool__TABLE_h1741a1ba_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vlane_e__ConstPool__TABLE_h1e39ee31_0;

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__25(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__25\n"); );
    // Init
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                              << 3U)) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_done) 
                                          << 4U) | 
                                         (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready) 
                                           << 3U) | 
                                          ((4U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
                                                  << 2U)) 
                                           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready 
        = Vlane_e__ConstPool__TABLE_hb5f425c0_0[__Vtableidx7];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid 
        = Vlane_e__ConstPool__TABLE_h1741a1ba_0[__Vtableidx7];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d 
        = Vlane_e__ConstPool__TABLE_h1e39ee31_0[__Vtableidx7];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q 
        = ((3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid) 
              << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U != (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_hbd568b8e__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                    >> 3U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S) 
           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DN 
        = (7U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0)
                  ? (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_rnd_mode_q)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__26(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__26\n"); );
    // Init
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid = 0;
    CData/*5:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx10 = ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                               << 3U)) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_done) 
                                           << 4U) | 
                                          (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready) 
                                            << 3U) 
                                           | ((4U & 
                                               ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
                                                << 2U)) 
                                              | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready 
        = Vlane_e__ConstPool__TABLE_hb5f425c0_0[__Vtableidx10];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid 
        = Vlane_e__ConstPool__TABLE_h1741a1ba_0[__Vtableidx10];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d 
        = Vlane_e__ConstPool__TABLE_h1e39ee31_0[__Vtableidx10];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q 
        = ((3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid) 
              << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U != (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h5be20b23__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                    >> 3U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S) 
           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DN 
        = (7U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0)
                  ? (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_rnd_mode_q)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__27(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__27\n"); );
    // Init
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                              << 3U)) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_done) 
                                          << 4U) | 
                                         (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready) 
                                           << 3U) | 
                                          ((4U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
                                                  << 2U)) 
                                           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready 
        = Vlane_e__ConstPool__TABLE_hb5f425c0_0[__Vtableidx4];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid 
        = Vlane_e__ConstPool__TABLE_h1741a1ba_0[__Vtableidx4];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d 
        = Vlane_e__ConstPool__TABLE_h1e39ee31_0[__Vtableidx4];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q 
        = ((3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid) 
              << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U != (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h67097a05__0 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                    >> 3U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h67097a05__0)
            ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[0U]
            : 0xffffffffU);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S) 
           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DN 
        = (7U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0)
                  ? (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_rnd_mode_q)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__28(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__28\n"); );
    // Init
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_ready) 
                              << 3U)) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_done) 
                                          << 4U) | 
                                         (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready) 
                                           << 3U) | 
                                          ((4U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
                                                  << 2U)) 
                                           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready 
        = Vlane_e__ConstPool__TABLE_hb5f425c0_0[__Vtableidx1];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid 
        = Vlane_e__ConstPool__TABLE_h1741a1ba_0[__Vtableidx1];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__state_d 
        = Vlane_e__ConstPool__TABLE_h1e39ee31_0[__Vtableidx1];
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q 
        = ((3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_valid) 
              << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U != (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_valid_q) 
           & ((4U == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_op_q))) 
              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready)));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0 
        = (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1eU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0 = 0U;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0) 
              << 1U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0 = 0U;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0) 
              << 2U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0 = 0U;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0) 
              << 3U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0 = 0U;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_hebc66c21__0) 
              << 4U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
        = ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
            ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[0U])))
            : 0xffffffffffffffffULL);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__div_valid) 
           | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__sqrt_valid));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S) 
           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DN 
        = (7U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0)
                  ? (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_rnd_mode_q)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP)));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__29(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__29\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((8U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q) 
                  << 3U)) | (((IData)((0U != (0x60U 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                              << 2U) | (((IData)((0U 
                                                  != 
                                                  (0x18U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (6U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__30(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__30\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__out_pipe_ready 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 3U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__out_pipe_ready 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__out_pipe_ready) 
           & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_aux_q) 
              >> 3U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__31(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__31\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__32(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__32\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__33(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__33\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__34(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__34\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready 
        = ((4U & ((0xfffffffcU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                  << 1U)) | ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q) 
                                                 >> 1U)) 
                                             << 2U))) 
           | ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                      | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q))) 
                     << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                                      >> 1U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__1__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__35(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__35\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready 
        = ((4U & ((0xfffffffcU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                  << 1U)) | ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q) 
                                                 >> 1U)) 
                                             << 2U))) 
           | ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                      | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q))) 
                     << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                                      >> 1U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__1__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__36(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__36\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q))) 
                  << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                                   >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__37(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__37\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready 
        = ((4U & ((0xfffffffcU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                                  << 1U)) | ((~ ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q) 
                                                 >> 1U)) 
                                             << 2U))) 
           | ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                      | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q))) 
                     << 1U)) | (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                                      >> 1U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_inside_pipeline__BRA__1__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__mid_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__38(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__38\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_valid_q))) 
                  << 1U)) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              >> 3U) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__gen_input_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_noncomp__DOT__inp_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__39(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__39\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     << 1U)) | (((IData)((0U != (0xcU 
                                                 & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
                                            << 3U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x60U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                               << 2U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x18U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                  << 1U) 
                                                 | (IData)(
                                                           (0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__40(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__40\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
                        << 1U)) | (((IData)((0U != 
                                             (0xcU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                                    << 4U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x18U 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (6U 
                                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__41(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__41\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
           | (0x20000U | ((((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                             ? 2U : 3U) << 0xcU) | 
                          ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                              ? 0U : 1U) << 9U) | (
                                                   (0x1c0U 
                                                    & (((0x20U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xfU)
                                                         : 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0x12U)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                            ? 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 9U)
                                                            : 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 0xcU)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((2U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                             ? 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 3U)
                                                             : 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 6U)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__42(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__42\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellinp__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__out_ready_i 
        = (1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 4U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellinp__gen_parallel_slices__BRA__0__KET____DOT__active_format__DOT__i_fmt_slice__out_ready_i 
        = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                    >> 3U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__out_ready 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_aux_q) 
           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT____Vcellinp__gen_parallel_slices__BRA__2__KET____DOT__active_format__DOT__i_fmt_slice__out_ready_i));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__43(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__43\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
                        << 1U)) | (((IData)((0U != 
                                             (0xcU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                                    << 4U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x18U 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (6U 
                                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__44(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__44\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
           | (0x20000U | ((((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                             ? 2U : 3U) << 0xcU) | 
                          ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                              ? 0U : 1U) << 9U) | (
                                                   (0x1c0U 
                                                    & (((0x20U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xfU)
                                                         : 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0x12U)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                            ? 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 9U)
                                                            : 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 0xcU)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((2U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                             ? 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 3U)
                                                             : 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 6U)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__45(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__45\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
           | (0x20000U | ((((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                             ? 2U : 3U) << 0xcU) | 
                          ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                              ? 0U : 1U) << 9U) | (
                                                   (0x1c0U 
                                                    & (((0x20U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xfU)
                                                         : 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0x12U)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                            ? 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 9U)
                                                            : 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 0xcU)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((2U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                             ? 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 3U)
                                                             : 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 6U)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__46(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__46\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
                        << 1U)) | (((IData)((0U != 
                                             (0xcU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                                    << 4U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x18U 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (6U 
                                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__47(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__47\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     << 1U)) | (((IData)((0U != (0xcU 
                                                 & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_d)))) 
                                            << 3U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x60U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                               << 2U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x18U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                  << 1U) 
                                                 | (IData)(
                                                           (0U 
                                                            != 
                                                            (6U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__48(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__48\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready 
        = ((2U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                   | (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q))) 
                  << 1U)) | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                              >> 3U) & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__gen_output_pipeline__BRA__0__KET____DOT__reg_ena 
        = (1U & (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_ready) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__gen_parallel_slices__BRA__1__KET____DOT__active_format__DOT__i_fmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fma__DOT__out_pipe_valid_q)) 
                 >> 1U));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__49(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__49\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
                        << 1U)) | (((IData)((0U != 
                                             (0xcU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                                    << 4U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x18U 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (6U 
                                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__50(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__50\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
           | (0x20000U | ((((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                             ? 2U : 3U) << 0xcU) | 
                          ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                              ? 0U : 1U) << 9U) | (
                                                   (0x1c0U 
                                                    & (((0x20U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xfU)
                                                         : 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0x12U)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                            ? 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 9U)
                                                            : 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 0xcU)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((2U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                                                             ? 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 3U)
                                                             : 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 6U)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__51(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__51\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
           | (0x20000U | ((((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                             ? 2U : 3U) << 0xcU) | 
                          ((((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                              ? 0U : 1U) << 9U) | (
                                                   (0x1c0U 
                                                    & (((0x20U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xfU)
                                                         : 
                                                        (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0x12U)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                            ? 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 9U)
                                                            : 
                                                           (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 0xcU)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((2U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                             ? 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 3U)
                                                             : 
                                                            (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 6U)))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__52(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__52\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((0x20U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
                        << 1U)) | (((IData)((0U != 
                                             (0xcU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                                    << 4U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x18U 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (6U 
                                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__53(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__53\n"); );
    // Body
    vlSelf->__VdfgTmp_h11063625__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                 >> 0xaU)));
    vlSelf->__VdfgTmp_hafe31668__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                  >> 7U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h3a58fee1__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                  >> 9U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h50cf160c__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                  >> 8U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__54(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__54\n"); );
    // Body
    vlSelf->__VdfgTmp_h7a6b9c2b__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U]) 
                                            >> 6U));
    vlSelf->__VdfgTmp_hb6c147ac__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                  >> 5U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hc416f063__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                  >> 4U))));
    vlSelf->__VdfgTmp_h72555475__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hd5c430a1__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[3U] 
                                                  >> 2U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__55(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__55\n"); );
    // Body
    vlSelf->__VdfgTmp_hc80a84f6__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                 >> 0x1cU)));
    vlSelf->__VdfgTmp_hc5ac7fef__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0x19U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h542d3998__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0x1bU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h740f3125__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0x1aU))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__56(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__56\n"); );
    // Body
    vlSelf->__VdfgTmp_hca5f7941__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                 >> 0x18U)));
    vlSelf->__VdfgTmp_h7db1af4e__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0x17U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h8b79fbfd__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0x16U))));
    vlSelf->__VdfgTmp_hf2410107__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0x15U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h2cacf40c__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0x14U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__57(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__57\n"); );
    // Body
    vlSelf->__VdfgTmp_he7811ab0__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                 >> 0xeU)));
    vlSelf->__VdfgTmp_he921e9c4__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0xbU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h5ff49fb9__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0xdU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hecc818f0__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 0xcU))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__58(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__58\n"); );
    // Body
    vlSelf->__VdfgTmp_h097fa256__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                 >> 0xaU)));
    vlSelf->__VdfgTmp_h888396da__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 9U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hf2084df2__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 8U))));
    vlSelf->__VdfgTmp_h3646605b__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 7U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h68c3ab87__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U] 
                                                  >> 6U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__59(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__59\n"); );
    // Body
    vlSelf->__VdfgTmp_h927b7004__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[2U]));
    vlSelf->__VdfgTmp_h12e47488__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x1dU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hae09b26c__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x1fU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hb98f1d6f__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x1eU))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__60(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__60\n"); );
    // Body
    vlSelf->__VdfgTmp_hb4eeacac__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                 >> 0x1cU)));
    vlSelf->__VdfgTmp_hd1beb3ed__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x1bU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h17e4057d__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x1aU))));
    vlSelf->__VdfgTmp_h7f958bc0__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x19U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_had4ec8a8__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x18U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__61(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__61\n"); );
    // Body
    vlSelf->__VdfgTmp_h83225957__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                 >> 0x12U)));
    vlSelf->__VdfgTmp_h078cb548__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0xfU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h123d6917__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x11U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_ha7c7f1d5__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0x10U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__62(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__62\n"); );
    // Body
    vlSelf->__VdfgTmp_hcb47b680__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                 >> 0xeU)));
    vlSelf->__VdfgTmp_hb73dbb24__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0xdU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hca64d372__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0xcU))));
    vlSelf->__VdfgTmp_h58287cc3__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0xbU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h024af646__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 0xaU))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__63(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__63\n"); );
    // Body
    vlSelf->__VdfgTmp_hf05fca47__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                 >> 4U)));
    vlSelf->__VdfgTmp_h172ffd07__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h403a0bf1__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h93a4021b__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U] 
                                                  >> 2U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__64(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__64\n"); );
    // Body
    vlSelf->__VdfgTmp_hbeb8940f__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[1U]));
    vlSelf->__VdfgTmp_hd333f15c__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x1fU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hd0f89b24__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x1eU))));
    vlSelf->__VdfgTmp_hdbe100db__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x1dU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_hd30b4fd3__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x1cU))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__65(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__65\n"); );
    // Body
    vlSelf->__VdfgTmp_ha5379bfd__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                 >> 0x16U)));
    vlSelf->__VdfgTmp_h945159fb__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x13U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h872d47ca__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x15U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h93f50e0c__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x14U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__66(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__66\n"); );
    // Body
    vlSelf->__VdfgTmp_hcd1c97fb__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                 >> 0x12U)));
    vlSelf->__VdfgTmp_h471bf582__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x11U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h3d61e230__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0x10U))));
    vlSelf->__VdfgTmp_hb22141f2__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0xfU) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h6f564151__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 0xeU))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__67(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__67\n"); );
    // Body
    vlSelf->__VdfgTmp_hb404d919__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                 >> 8U)));
    vlSelf->__VdfgTmp_hbf146784__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 5U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h8d1bae06__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 7U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h884344b4__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 6U))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__68(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__68\n"); );
    // Body
    vlSelf->__VdfgTmp_h06d617c0__0 = (IData)((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                               >> 6U) 
                                              & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                 >> 4U)));
    vlSelf->__VdfgTmp_hbcabe074__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 5U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 3U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h994ca958__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 5U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                               & (vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 2U))));
    vlSelf->__VdfgTmp_hb4ec72b1__0 = (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                       >> 4U) & ((vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U] 
                                                  >> 1U) 
                                                 & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelf->__VdfgTmp_h1fb1bac4__0 = (1U & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                             >> 4U) 
                                            & ((~ (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                               & vlSelf->lane_e__DOT__i_operand_requester__DOT__operand_req[0U])));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__69(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__69\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__70(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__70\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__71(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__71\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__72(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__72\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__73(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__73\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__74(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__74\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__75(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__75\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__76(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__76\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__77(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__77\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__78(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__78\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__79(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__79\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__80(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__80\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__81(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__81\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__82(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__82\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__83(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__83\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__84(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__84\n"); );
    // Body
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((0x40U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__req_i)) 
           | (((IData)((0U != (0x30U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
               << 5U) | (((IData)((0U != (0xcU & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                          << 4U) | (((IData)((0U != 
                                              (3U & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__req_i)))) 
                                     << 3U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                << 2U) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            (0x18U 
                                                             & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0U 
                                                             != 
                                                             (6U 
                                                              & (IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__req_nodes))))))))));
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__85(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__85\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h2c231a3d__0;
    // Body
    __Vtemp_h2c231a3d__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h2c231a3d__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h2c231a3d__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h2c231a3d__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h2c231a3d__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h2c231a3d__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h2c231a3d__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h2c231a3d__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h2c231a3d__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h2c231a3d__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h2c231a3d__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h2c231a3d__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h2c231a3d__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h2c231a3d__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h2c231a3d__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h2c231a3d__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__86(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__86\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_hb125c3f3__0;
    // Body
    __Vtemp_hb125c3f3__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_hb125c3f3__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_hb125c3f3__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hb125c3f3__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hb125c3f3__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_hb125c3f3__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hb125c3f3__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hb125c3f3__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_hb125c3f3__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_hb125c3f3__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_hb125c3f3__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_hb125c3f3__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_hb125c3f3__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_hb125c3f3__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_hb125c3f3__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_hb125c3f3__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__87(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__87\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h36d7eeec__0;
    // Body
    __Vtemp_h36d7eeec__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h36d7eeec__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h36d7eeec__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h36d7eeec__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h36d7eeec__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h36d7eeec__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h36d7eeec__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h36d7eeec__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h36d7eeec__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h36d7eeec__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h36d7eeec__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h36d7eeec__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h36d7eeec__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h36d7eeec__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h36d7eeec__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h36d7eeec__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__88(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__88\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_ha3b20f59__0;
    // Body
    __Vtemp_ha3b20f59__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_ha3b20f59__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_ha3b20f59__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_ha3b20f59__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_ha3b20f59__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_ha3b20f59__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_ha3b20f59__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_ha3b20f59__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_ha3b20f59__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_ha3b20f59__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_ha3b20f59__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_ha3b20f59__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_ha3b20f59__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_ha3b20f59__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_ha3b20f59__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_ha3b20f59__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__1__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__89(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__89\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h7d0869ad__0;
    // Body
    __Vtemp_h7d0869ad__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h7d0869ad__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h7d0869ad__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h7d0869ad__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h7d0869ad__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h7d0869ad__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h7d0869ad__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h7d0869ad__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h7d0869ad__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h7d0869ad__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h7d0869ad__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h7d0869ad__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h7d0869ad__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h7d0869ad__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h7d0869ad__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h7d0869ad__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__90(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__90\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_hcd541cda__0;
    // Body
    __Vtemp_hcd541cda__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_hcd541cda__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_hcd541cda__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hcd541cda__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hcd541cda__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_hcd541cda__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hcd541cda__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hcd541cda__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_hcd541cda__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_hcd541cda__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_hcd541cda__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_hcd541cda__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_hcd541cda__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_hcd541cda__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_hcd541cda__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_hcd541cda__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__2__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__91(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__91\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_hd04c4946__0;
    // Body
    __Vtemp_hd04c4946__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_hd04c4946__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_hd04c4946__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hd04c4946__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hd04c4946__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_hd04c4946__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hd04c4946__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hd04c4946__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_hd04c4946__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_hd04c4946__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_hd04c4946__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_hd04c4946__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_hd04c4946__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_hd04c4946__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_hd04c4946__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_hd04c4946__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__92(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__92\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h2e0bb258__0;
    // Body
    __Vtemp_h2e0bb258__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h2e0bb258__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h2e0bb258__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h2e0bb258__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h2e0bb258__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h2e0bb258__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h2e0bb258__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h2e0bb258__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h2e0bb258__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h2e0bb258__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h2e0bb258__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h2e0bb258__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h2e0bb258__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h2e0bb258__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h2e0bb258__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h2e0bb258__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__3__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__93(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__93\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_hf53b9aaa__0;
    // Body
    __Vtemp_hf53b9aaa__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_hf53b9aaa__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_hf53b9aaa__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hf53b9aaa__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_hf53b9aaa__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_hf53b9aaa__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hf53b9aaa__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_hf53b9aaa__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_hf53b9aaa__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_hf53b9aaa__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_hf53b9aaa__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_hf53b9aaa__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_hf53b9aaa__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_hf53b9aaa__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_hf53b9aaa__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_hf53b9aaa__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__94(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__94\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h512368a5__0;
    // Body
    __Vtemp_h512368a5__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h512368a5__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h512368a5__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h512368a5__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h512368a5__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h512368a5__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h512368a5__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h512368a5__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h512368a5__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h512368a5__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h512368a5__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h512368a5__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h512368a5__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h512368a5__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h512368a5__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h512368a5__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__4__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__95(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__95\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h43fe0efd__0;
    // Body
    __Vtemp_h43fe0efd__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h43fe0efd__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h43fe0efd__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h43fe0efd__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h43fe0efd__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h43fe0efd__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h43fe0efd__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h43fe0efd__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h43fe0efd__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h43fe0efd__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h43fe0efd__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h43fe0efd__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h43fe0efd__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h43fe0efd__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h43fe0efd__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h43fe0efd__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__96(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__96\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h656eeb85__0;
    // Body
    __Vtemp_h656eeb85__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h656eeb85__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h656eeb85__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h656eeb85__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h656eeb85__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h656eeb85__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h656eeb85__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h656eeb85__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h656eeb85__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h656eeb85__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h656eeb85__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h656eeb85__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h656eeb85__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h656eeb85__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h656eeb85__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h656eeb85__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__5__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__97(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__97\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_he9265eee__0;
    // Body
    __Vtemp_he9265eee__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_he9265eee__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_he9265eee__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_he9265eee__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_he9265eee__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_he9265eee__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_he9265eee__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_he9265eee__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_he9265eee__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_he9265eee__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_he9265eee__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_he9265eee__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_he9265eee__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_he9265eee__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_he9265eee__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_he9265eee__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__98(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__98\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h091ab810__0;
    // Body
    __Vtemp_h091ab810__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h091ab810__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h091ab810__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h091ab810__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h091ab810__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h091ab810__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h091ab810__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h091ab810__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h091ab810__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h091ab810__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h091ab810__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h091ab810__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h091ab810__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h091ab810__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h091ab810__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h091ab810__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__6__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__99(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__99\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h5a24f36d__0;
    // Body
    __Vtemp_h5a24f36d__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h5a24f36d__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h5a24f36d__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h5a24f36d__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h5a24f36d__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h5a24f36d__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h5a24f36d__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h5a24f36d__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h5a24f36d__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h5a24f36d__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h5a24f36d__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h5a24f36d__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h5a24f36d__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h5a24f36d__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h5a24f36d__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h5a24f36d__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_hp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_hp_vrf_arbiter__data_i[0x13U]);
}

VL_INLINE_OPT void Vlane_e___024root___ico_comb__TOP__100(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___ico_comb__TOP__100\n"); );
    // Init
    VlWide<20>/*639:0*/ __Vtemp_h81f9c618__0;
    // Body
    __Vtemp_h81f9c618__0[1U] = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                 ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                     << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                 >> 0x12U))
                                 : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                     << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                               >> 0x19U)));
    __Vtemp_h81f9c618__0[2U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 << 0x19U) | (0x1ffffffU 
                                              & ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                   << 0xeU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                                     >> 0x12U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                                   << 7U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                     >> 0x19U)))));
    __Vtemp_h81f9c618__0[3U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h81f9c618__0[4U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                       << 0x1cU) | 
                                      (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                       >> 4U)) : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   << 0x15U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                                     >> 0xbU))) 
                                 >> 7U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 << 0x1cU) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                   >> 4U))
                                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                 << 0x15U) 
                                                | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                   >> 0xbU))) 
                                           << 0x19U));
    __Vtemp_h81f9c618__0[5U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 << 0x12U) | (0x3ffffU 
                                              & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    << 0x1cU) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                      >> 4U))
                                                   : 
                                                  ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                                    << 0x15U) 
                                                   | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                                      >> 0xbU))) 
                                                 >> 7U)));
    __Vtemp_h81f9c618__0[6U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h81f9c618__0[7U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                       << 0xaU) | (
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                   >> 0x16U))
                                   : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                       << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                 >> 0x1dU))) 
                                 >> 0xeU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                               ? ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                               : ((
                                                   vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                             << 0x12U));
    __Vtemp_h81f9c618__0[8U] = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                   ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                       << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                                                 >> 0x19U))
                                   : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
                                 << 0xbU) | (0x7ffU 
                                             & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                                  ? 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
                                                   << 0xaU) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
                                                     >> 0x16U))
                                                  : 
                                                 ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                   << 3U) 
                                                  | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                     >> 0x1dU))) 
                                                >> 0xeU)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                            >> 0x12U)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                           << 7U) | 
                                          (vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0x19U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_h81f9c618__0[1U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_h81f9c618__0[2U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_h81f9c618__0[3U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_h81f9c618__0[4U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_h81f9c618__0[5U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_h81f9c618__0[6U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_h81f9c618__0[7U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = __Vtemp_h81f9c618__0[8U];
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                  << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[3U] 
                            >> 0x19U)) : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[1U]) 
            >> 0x15U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                               << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                         >> 0x19U))
                           : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                         << 0xbU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            << 4U) | (0xfU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                    << 7U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[4U] 
                                              >> 0x19U))
                                : vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[2U]) 
                              >> 0x15U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                  << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                               >> 0xbU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                             << 0xeU) 
                                            | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[5U] 
                                               >> 0x12U))) 
            >> 0x1cU) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                           ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                               << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                            >> 0xbU))
                           : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                               << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                           >> 0x12U))) 
                         << 4U));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            << 0x1dU) | ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                << 0x15U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[9U] 
                                             >> 0xbU))
                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                << 0xeU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[6U] 
                                            >> 0x12U))) 
                          >> 0x1cU) | (0x1ffffff0U 
                                       & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                            ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                                << 0x15U) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xaU] 
                                                  >> 0xbU))
                                            : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[8U] 
                                                << 0xeU) 
                                               | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[7U] 
                                                  >> 0x12U))) 
                                          << 4U))));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xbU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
        = ((((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
              ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                  << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                            >> 0x1dU)) : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                           << 0x1cU) 
                                          | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xcU] 
                                             >> 4U))) 
            >> 3U) | (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                        ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                            << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                      >> 0x1dU)) : 
                       ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                         << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                      >> 4U))) << 0x1dU));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
        = ((0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U]) 
           | (0x3fffffU & (((IData)(vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)
                             ? ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x10U] 
                                 << 3U) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xfU] 
                                           >> 0x1dU))
                             : ((vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xeU] 
                                 << 0x1cU) | (vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0xdU] 
                                              >> 4U))) 
                           >> 3U)));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x11U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x12U] 
        = ((0x3fffffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]) 
           | (0xffc00000U & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x12U]));
    vlSelf->lane_e__DOT__i_operand_requester__DOT__gen_vrf_arbiters__BRA__7__KET____DOT__i_lp_vrf_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x13U] 
        = (0x7fffU & vlSelf->lane_e__DOT__i_operand_requester__DOT____Vcellinp__gen_vrf_arbiters__BRA__0__KET____DOT__i_lp_vrf_arbiter__data_i[0x13U]);
}
